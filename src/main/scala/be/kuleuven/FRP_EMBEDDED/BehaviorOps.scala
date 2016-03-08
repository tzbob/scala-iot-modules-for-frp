package be.kuleuven.FRP_EMBEDDED

import scala.collection.immutable.HashSet

trait BehaviorOps extends NodeOps {
  event: EventOps with NodeOps =>

  trait Behavior[A] extends Node[A] {
    def valueNow (): Rep[A]

    def delay (t: Rep[Int]): Behavior[A]

    // map2: Combine 2 behaviors (merge-like). Whenever a behaviors value changes, the output behavior applies
    // the function f to both child behaviors, changing its value to the result of that function
    def map2[B,C] (b: Behavior[B], f: (A, B)=>C ): Behavior[C]
    //def map3
    //def map4
    //...

    // General snapshot: Output event fires an event containing result of function of current value of behavior,
    // whenever the input event e (carrying the function to be applied to value of behavior) fires an event
    def genSnapshot[B] (e: Event[A=>B]): Event[B]
    // Snapshot: Output event fires an event containing the current value of behavior,
    // each time input e fires an event
    def snapshot[B] (e: Event[B]): Event[A]
    // changes: create an event stream that fires an event each time the value of the behavior changes,
    // carrying the new value
    def changes (): Event[A]
  }

  def constantB[A:Typ] (value: Rep[A]): Behavior[A]
}

trait BehaviorOpsImpl extends BehaviorOps with ScalaOpsPkgExt {
  eventImpl: EventOpsImpl =>

  def getBehaviorFunction[X](b: Behavior[X]): Rep[(Unit)=>Unit] = {
    b match {
      case bn @ StartsWithBehavior(_,_) => bn.behaviorfun
      case bn @ FoldpBehavior(_,_,_) => bn.behaviorfun
      case _ => throw new IllegalStateException("Unsupported Behavior type")
    }
  }

  def buildGraphTopDownBehavior[X](b: Behavior[X]): Unit = {
    b match {
      case bn @ StartsWithBehavior(_,_) =>
        bn.parent.addChild(b.id)
        bn.parent.buildGraphTopDown()
      case bn @ FoldpBehavior(_,_,_) =>
        bn.parent.addChild(b.id)
        bn.parent.buildGraphTopDown()
      case _ => throw new IllegalStateException("Unsupported Behavior type")
    }
  }

  override def constantB[A:Typ](c: Rep[A]): Behavior[A] = new ConstantBehavior[A](c)

  case class ConstantBehavior[A:Typ](c: Rep[A]) extends BehaviorNode[A] {
    val level = 0
    override val inputNodeIDs: Set[NodeID] = HashSet(this.id)
    override val ancestorNodeIDs: List[NodeID] = Nil
    lazy val value = var_new[A](c)
    override def valueNow(): Rep[A] = readVar(value)
    override def generateNode(f: () => Rep[Unit]): () => Rep[Unit] = {
      () => {
        f()
        value
        unitToRepUnit( () )
      }
    }
  }

  case class FoldpBehavior[A:Typ,B:Typ](parent: Event[B], f: (Rep[A],Rep[B])=>Rep[A], init: Rep[A]) extends BehaviorNode[A] {
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs
    override val ancestorNodeIDs: List[NodeID] = parent.id::parent.ancestorNodeIDs

    lazy val value = var_new[A](init)

    lazy val parentvalue: Var[B] = getEventValue(parent)
    lazy val parentfired: Var[Boolean] = getEventFired(parent)
    lazy val behaviorfun: Rep[(Unit)=>Unit] = {
      fun { () =>
        if(readVar(parentfired)) {
          var_assign[A](value, f(readVar(value), readVar(parentvalue)))
        }
        unitToRepUnit( () )
      }
    }

    override def generateNode(f: () => Rep[Unit]): () => Rep[Unit] = {
      () => {
        f()
        value
        behaviorfun
        unitToRepUnit( () )
      }
    }

    override def valueNow(): Rep[A] = readVar(value)

    System.err.println("Create StartsWithBehavior(ID:" + id + "): " + inputNodeIDs + ": " + ancestorNodeIDs)
  }

  case class StartsWithBehavior[A:Typ](parent: Event[A], init: Rep[A]) extends BehaviorNode[A] {
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs
    override val ancestorNodeIDs: List[NodeID] = parent.id::parent.ancestorNodeIDs

    lazy val value = var_new[A](init)

    lazy val parentvalue: Var[A] = getEventValue(parent)
    lazy val parentfired: Var[Boolean] = getEventFired(parent)
    lazy val behaviorfun: Rep[(Unit)=>Unit] = {
      fun { () =>
        if(readVar(parentfired)) {
          var_assign[A](value, readVar(parentvalue))
        }
        unitToRepUnit( () )
      }
    }

    override def generateNode(f: () => Rep[Unit]): () => Rep[Unit] = {
      () => {
        f()
        value
        behaviorfun
        unitToRepUnit( () )
      }
    }

    override def valueNow(): Rep[A] = readVar(value)

    System.err.println("Create StartsWithBehavior(ID:" + id + "): " + inputNodeIDs + ": " + ancestorNodeIDs)
  }

  abstract class BehaviorNode[A] extends BehaviorImpl[A] with NodeImpl[A] {
    nodeMap += ((id, this))

    override val childNodeIDs = scala.collection.mutable.HashSet[NodeID]()
    override def addChild(id: NodeID): Unit = {
      childNodeIDs.add(id)
    }


    override def getFunction(): Rep[(Unit)=>Unit] = {
      getBehaviorFunction(this)
    }
    override def buildGraphTopDown(): Unit = {
      buildGraphTopDownBehavior(this)
    }

    //lazy val value = vardecl_new[A]()
    //override def valueNow(): Rep[A] = readVar(value)
  }

  trait BehaviorImpl[A] extends Behavior[A] {
    override def delay(t: Rep[Int]): Behavior[A] = ???

    override def snapshot[B](e: Event[B]): Event[A] = ???
    override def changes(): Event[A] = ???
    override def map2[B, C](b: Behavior[B], f: (A, B) => C): Behavior[C] = ???
    override def genSnapshot[B](e: Event[(A) => B]): Event[B] = ???
  }
}