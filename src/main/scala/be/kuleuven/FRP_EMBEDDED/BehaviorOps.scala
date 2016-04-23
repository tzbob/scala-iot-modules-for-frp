package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.{ScalaOpsPkgExpExt, ScalaOpsPkgExt}

import scala.collection.immutable.HashSet

trait BehaviorOps extends NodeOps {
  event: EventOps =>

  trait Behavior[A] extends Node[A] {
    private[FRP_EMBEDDED] val typOut: Typ[A]
    private[FRP_EMBEDDED] def getValue(): Var[A]
    private[FRP_EMBEDDED] def getInitializer(): Rep[Unit]

    // map2: Combine 2 behaviors (merge-like). Whenever a behaviors value changes, the output behavior applies
    // the function f to both child behaviors, changing its value to the result of that function
    def map2[B:Typ,C:Typ] (b: Behavior[B], f: (Rep[A], Rep[B])=>Rep[C])(implicit n: ModuleName): Behavior[C]
    //def map3
    //def map4
    //...

    // General snapshot: Output event fires an event containing result of function of current value of behavior,
    // whenever the input event e (carrying the function to be applied to value of behavior) fires an event
    def genSnapshot[B] (e: Event[A=>B])(implicit n: ModuleName): Event[B]
    // Snapshot: Output event fires an event containing the current value of behavior,
    // each time input e fires an event
    def snapshot[B:Typ] (e: Event[B])(implicit n: ModuleName): Event[A]
    // changes: create an event stream that fires an event each time the value of the behavior changes,
    // carrying the new value
    def changes ()(implicit n: ModuleName): Event[A]
  }

  def constantB[A:Typ](value: Rep[A])(implicit n: ModuleName): Behavior[A]
}

trait BehaviorOpsImpl extends BehaviorOps with ScalaOpsPkgExpExt {
  eventImpl: EventOpsImpl =>

  def getBehaviorNodes: Map[NodeID,NodeImpl[_]] = {
    getNodeMap.filter(
      x => x match {
        case (id, _) => getBehaviorIDs().contains(id)
      }
    )
  }

  override def constantB[A:Typ](c: Rep[A])(implicit n: ModuleName): Behavior[A] = new ConstantBehavior[A](c)

  case class ConstantBehavior[A](init: Rep[A])(implicit val tA: Typ[A], mn: ModuleName) extends BehaviorNode[A] {
    override val typOut = tA
    val level = 0
    override val inputNodeIDs: Set[NodeID] = HashSet(this.id)
    lazy val value = vardeclmod_new[A](mn.str)
    override def getValue = value
    lazy val valueInit = var_assign[A](value, init)
    override def getInitializer() = valueInit
    override def generateNode(f: () => Rep[Unit]): () => Rep[Unit] = {
      () => {
        f()
        value
        unitToRepUnit( () )
      }
    }
    override def getFunction() =
      throw new IllegalStateException("Not defined on ConstantBehavior") //TODO: implement
    override def buildGraphTopDown() =
      throw new IllegalStateException("Not defined on ConstantBehavior") //TODO: implement

    System.err.println("Create ConstantBehavior(ID:" + id + "): " + inputNodeIDs)
  }

  case class Map2Behavior[A:Typ,B:Typ,C](parents: (Behavior[A],Behavior[B]), f: (Rep[A],Rep[B])=>Rep[C])(implicit val tC: Typ[C], mn: ModuleName) extends BehaviorNode[C]{
    override val typOut = tC
    val parentLeft: Behavior[A] = parents._1
    val parentRight: Behavior[B] = parents._2
    val level = scala.math.max(parentLeft.level, parentRight.level) + 1

    override val inputNodeIDs: Set[NodeID] = parentLeft.inputNodeIDs ++ parentRight.inputNodeIDs

    lazy val parentleftvalue = parentLeft.getValue()
    lazy val parentrightvalue = parentRight.getValue()
    lazy val value = vardeclmod_new[C](mn.str)
    override def getValue = value
    lazy val valueInit = var_assign[C](value, f(parentleftvalue, parentrightvalue))
    override def getInitializer() = valueInit
    lazy val behaviorfun: Rep[(Unit)=>Unit] = {
      namedfun0 (mn.str) { () =>
        var_assign[C](value, f(parentleftvalue, parentrightvalue))
        unitToRepUnit( () )
      }
    }
    override def getFunction() = behaviorfun
    override def buildGraphTopDown() = {
      parentLeft.addChild(id)
      parentLeft.buildGraphTopDown()
      parentRight.addChild(id)
      parentRight.buildGraphTopDown()
    }

    override def generateNode(f: () => Rep[Unit]): () => Rep[Unit] = {
      () => {
        f()
        value
        behaviorfun
        unitToRepUnit( () )
      }
    }

    System.err.println("Create Map2Behavior(ID:" + id + "): " + inputNodeIDs)
  }

  case class FoldpBehavior[A,B](parent: Event[B], f: (Rep[B],Rep[A])=>Rep[A], init: Rep[A])(implicit val tA: Typ[A], val tB: Typ[B], mn: ModuleName) extends BehaviorNode[A] {
    override val typOut = tA
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    lazy val value = vardeclmod_new[A](mn.str)
    override def getValue = value
    lazy val valueInit = var_assign[A](value, init)
    override def getInitializer() = valueInit

    lazy val parentvalue: Rep[B] = parent.getValue()
    lazy val parentfired: Rep[Boolean] = parent.getFired()
    lazy val behaviorfun: Rep[(Unit)=>Unit] = {
      namedfun0 (mn.str) { () =>
        if(parentfired) {
          var_assign[A](value, f(parentvalue,readVar(value)))
        }
        unitToRepUnit( () )
      }
    }
    override def getFunction() = behaviorfun
    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    override def generateNode(f: () => Rep[Unit]): () => Rep[Unit] = {
      () => {
        f()
        value
        behaviorfun
        unitToRepUnit( () )
      }
    }

    System.err.println("Create FoldpBehavior(ID:" + id + "): " + inputNodeIDs)
  }

  case class StartsWithBehavior[A](parent: Event[A], init: Rep[A])(implicit val tA: Typ[A], mn: ModuleName) extends BehaviorNode[A] {
    override val typOut = tA
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    lazy val value = vardeclmod_new[A](mn.str)
    override def getValue = value
    lazy val valueInit = var_assign[A](value, init)
    override def getInitializer() = valueInit

    lazy val parentvalue: Rep[A] = parent.getValue()
    lazy val parentfired: Rep[Boolean] = parent.getFired()
    lazy val behaviorfun: Rep[(Unit)=>Unit] = {
      namedfun0 (mn.str) { () =>
        if(parentfired) {
          var_assign[A](value, parentvalue)
        }
        unitToRepUnit( () )
      }
    }
    override def getFunction() = behaviorfun
    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    override def generateNode(f: () => Rep[Unit]): () => Rep[Unit] = {
      () => {
        f()
        value
        behaviorfun
        unitToRepUnit( () )
      }
    }

    System.err.println("Create StartsWithBehavior(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class BehaviorNode[A](implicit mn: ModuleName) extends BehaviorImpl[A] with NodeImpl[A] {
    addNodeToNodemap(id,this)
    addBehaviorID(id)

    override val moduleName = mn

    override val childNodeIDs = scala.collection.mutable.HashSet[NodeID]()
    override def addChild(id: NodeID): Unit = {
      childNodeIDs.add(id)
    }

  }

  trait BehaviorImpl[A] extends Behavior[A] {

    override def snapshot[B:Typ](e: Event[B])(implicit n: ModuleName): Event[A] = {
      implicit val tOut = typOut
      SnapshotEvent(this, e)
    }
    override def changes()(implicit n: ModuleName): Event[A] = ChangesEvent(this)(typOut,n)
    override def map2[B:Typ, C:Typ](b: Behavior[B], f: (Rep[A], Rep[B]) => Rep[C])(implicit n: ModuleName): Behavior[C] = {
      implicit val tOut: Typ[A] = typOut
      Map2Behavior((this, b), f)
    }
    override def genSnapshot[B](e: Event[(A) => B])(implicit n: ModuleName): Event[B] = ???
  }
}