package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExt

import scala.collection.immutable.HashSet

trait BehaviorOps extends NodeOps {
  event: EventOps =>

  trait Behavior[A] extends Node[A] {
    val typOut: Typ[A]

    def valueNow (): Rep[A]

    def delay (t: Rep[Int]): Behavior[A]

    // map2: Combine 2 behaviors (merge-like). Whenever a behaviors value changes, the output behavior applies
    // the function f to both child behaviors, changing its value to the result of that function
    def map2[B:Typ,C:Typ] (b: Behavior[B], f: (Rep[A], Rep[B])=>Rep[C]): Behavior[C]
    //def map3
    //def map4
    //...

    // General snapshot: Output event fires an event containing result of function of current value of behavior,
    // whenever the input event e (carrying the function to be applied to value of behavior) fires an event
    def genSnapshot[B] (e: Event[A=>B]): Event[B]
    // Snapshot: Output event fires an event containing the current value of behavior,
    // each time input e fires an event
    def snapshot[B:Typ] (e: Event[B]): Event[A]
    // changes: create an event stream that fires an event each time the value of the behavior changes,
    // carrying the new value
    def changes (): Event[A]
  }

  def constantB[A:Typ] (value: Rep[A]): Behavior[A]
}

trait BehaviorOpsImpl extends BehaviorOps with ScalaOpsPkgExt {
  eventImpl: EventOpsImpl =>

  def getBehaviorValue[T:Typ](b: Behavior[T]): Var[T] = {
    b match {
      case bn @ StartsWithBehavior(_,_) => bn.value
      case bn @ FoldpBehavior(_,_,_) => bn.value
      case bn @ Map2Behavior(_,_) => bn.value
      case _ => throw new IllegalStateException("Unsupported Behavior type")
    }
  }

  def getBehaviorFunction[B](b: Behavior[B]): Rep[(Unit)=>Unit] = {
    b match {
      case bn @ StartsWithBehavior(_,_) => bn.behaviorfun
      case bn @ FoldpBehavior(_,_,_) => bn.behaviorfun
      case bn @ Map2Behavior(_,_) => bn.behaviorfun
      case _ => throw new IllegalStateException("Unsupported Behavior type")
    }
  }

  def buildGraphTopDownBehavior[B](b: Behavior[B]): Unit = {
    b match {
      case bn @ StartsWithBehavior(_,_) =>
        bn.parent.addChild(b.id)
        bn.parent.buildGraphTopDown()
      case bn @ FoldpBehavior(_,_,_) =>
        bn.parent.addChild(b.id)
        bn.parent.buildGraphTopDown()
      case bn @ Map2Behavior(_,_) =>
        bn.parentLeft.addChild(b.id)
        bn.parentLeft.buildGraphTopDown()
        bn.parentRight.addChild(b.id)
        bn.parentRight.buildGraphTopDown()
      case _ => throw new IllegalStateException("Unsupported Behavior type")
    }
  }

  override def constantB[A:Typ](c: Rep[A]): Behavior[A] = new ConstantBehavior[A](c)

  case class ConstantBehavior[A](c: Rep[A])(implicit val tA: Typ[A]) extends BehaviorNode[A] {
    override val typOut = tA
    val level = 0
    override val inputNodeIDs: Set[NodeID] = HashSet(this.id)
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

  case class Map2Behavior[A:Typ,B:Typ,C](parents: (Behavior[A],Behavior[B]), f: (Rep[A],Rep[B])=>Rep[C])(implicit val tC: Typ[C]) extends BehaviorNode[C]{
    override val typOut = tC
    val parentLeft: Behavior[A] = parents._1
    val parentRight: Behavior[B] = parents._2
    val level = scala.math.max(parentLeft.level, parentRight.level) + 1

    override val inputNodeIDs: Set[NodeID] = parentLeft.inputNodeIDs ++ parentRight.inputNodeIDs

    lazy val parentleftvalue = getBehaviorValue(parentLeft)
    lazy val parentrightvalue = getBehaviorValue(parentRight)
    lazy val value = var_new[C](f(parentleftvalue, parentrightvalue))
    lazy val behaviorfun: Rep[(Unit)=>Unit] = {
      fun { () =>
        var_assign[C](value, f(parentleftvalue, parentrightvalue))
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

    override def valueNow(): Rep[C] = readVar(value)

  }

  case class FoldpBehavior[A,B:Typ](parent: Event[B], f: (Rep[A],Rep[B])=>Rep[A], init: Rep[A])(implicit val tA: Typ[A]) extends BehaviorNode[A] {
    override val typOut = tA
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    lazy val value = var_new[A](init)

    lazy val parentvalue: Rep[B] = getEventValue(parent)
    lazy val parentfired: Rep[Boolean] = getEventFired(parent)
    lazy val behaviorfun: Rep[(Unit)=>Unit] = {
      fun { () =>
        if(parentfired) {
          var_assign[A](value, f(readVar(value), parentvalue))
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

    System.err.println("Create StartsWithBehavior(ID:" + id + "): " + inputNodeIDs)
  }

  case class StartsWithBehavior[A](parent: Event[A], init: Rep[A])(implicit val tA: Typ[A]) extends BehaviorNode[A] {
    override val typOut = tA
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    lazy val value = var_new[A](init)

    lazy val parentvalue: Rep[A] = getEventValue(parent)
    lazy val parentfired: Rep[Boolean] = getEventFired(parent)
    lazy val behaviorfun: Rep[(Unit)=>Unit] = {
      fun { () =>
        if(parentfired) {
          var_assign[A](value, parentvalue)
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

    System.err.println("Create StartsWithBehavior(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class BehaviorNode[A] extends BehaviorImpl[A] with NodeImpl[A] {
    addNodeToNodemap(id,this)

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

    override def snapshot[B:Typ](e: Event[B]): Event[A] = {
      implicit val tOut = typOut
      SnapshotEvent(this, e)
    }
    override def changes(): Event[A] = ChangesEvent(this)(typOut)
    override def map2[B:Typ, C:Typ](b: Behavior[B], f: (Rep[A], Rep[B]) => Rep[C]): Behavior[C] = {
      implicit val tOut: Typ[A] = typOut
      Map2Behavior((this, b), f)
    }
    override def genSnapshot[B](e: Event[(A) => B]): Event[B] = ???
  }
}