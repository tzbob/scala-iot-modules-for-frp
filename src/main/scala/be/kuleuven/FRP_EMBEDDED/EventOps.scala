package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExpExt

import scala.collection.immutable.HashSet

trait EventOps extends NodeOps {
  behavior: BehaviorOps =>

  trait Event[A] extends Node[A] {
    // Private part
    private[FRP_EMBEDDED] type In
    override type Out = A
    private[FRP_EMBEDDED] implicit val typIn: Typ[In]
    private[FRP_EMBEDDED] val typOut: Typ[Out]

    // Public part
    def constant[B:Typ] (c: Rep[B])(implicit n: ModuleName): Event[B]
    def map[B:Typ] (f: Rep[A] => Rep[B])(implicit n: ModuleName): Event[B]
    def filter (f: Rep[A] => Rep[Boolean])(implicit n: ModuleName): Event[A]
    def merge (e: Event[A], f:(Rep[A],Rep[A])=>Rep[A])(implicit n: ModuleName): Event[A]

    def startsWith(i: Rep[A])(implicit n: ModuleName): Behavior[A]
    def foldp[B:Typ]( f:((Rep[A],Rep[B]) => Rep[B]), init: Rep[B])(implicit n: ModuleName): Behavior[B]
    def foldp2[B:Typ, C:Typ]
      (e: Event[B],
       f1:((Rep[A],Rep[C]) => Rep[C]),f2:((Rep[B],Rep[C]) => Rep[C]), f3:((Rep[A],Rep[B],Rep[C]) => Rep[C]),
       init: Rep[C]
      )(implicit n: ModuleName): Behavior[C]
  }

  def TimerEvent(i: Rep[Int])(implicit n: ModuleName)/*(implicit tI:Typ[Int])*/: Event[Int]
  def ExternalEvent[A:Typ](oe: OutputEvent[A])(implicit n: ModuleName): Event[A] // oe possibly null (!)

  abstract class OutputEvent[A:Typ](val mn: ModuleName, val outName: String)
  def out[A:Typ](name: String, e: Event[A])(implicit n: ModuleName): OutputEvent[A]
}

trait EventOps_Impl extends EventOps with ScalaOpsPkgExpExt {
  behavior: BehaviorOps =>

  private val outInList = scala.collection.mutable.ListBuffer.empty[(String, String, String, String)]

  def getOutInList: List[(String,String,String,String)] = {
    outInList.toList
  }

  def addToOutInList(oe: OutputEvent[_], inputModName: String, inputID: NodeID): Unit = {
    outInList += ((oe.mn.str, oe.outName, inputModName, "top"+inputID))
  }

  abstract class InputEvent[A](implicit tA:Typ[A], mn: ModuleName) extends Event[A] {
    //val inputFun: () => Rep[Out] = () => i
    override val moduleName = mn
    override def produceFunction =
      throw new IllegalStateException("Should be handled in top level function.")
    override def useFunction =
      throw new IllegalStateException("Should be handled in top level function.")
    override def buildGraphTopDown() = {
      // has no parents, nothing to do!
    }

    def produceInput(): Unit
    def useInput(data: Rep[Ptr[Byte]], len: Rep[Int]): Unit

    override val level = 0
    override val typOut: Typ[Out] = tA
    override type In = Unit
    override val typIn: Typ[In] = typ[Unit]
    override val inputNodeIDs: Set[NodeID] = HashSet(this.id)

    System.err.println("Create InputEvent(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class ConstantEvent[A,B](parent: Event[A], c : Rep[B])(implicit tB:Typ[B], mn: ModuleName) extends Event[B] {
    override val moduleName = mn
    override type In = A
    override implicit val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = tB
    val constFun: Rep[In]=>Rep[Out] = _ => c

    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    System.err.println("Create ConstantEvent(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class MapEvent[A,B](parent: Event[A], f: Rep[A] => Rep[B])(implicit tB:Typ[B], mn: ModuleName) extends Event[B] {

    override val moduleName = mn
    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    override type In = A
    override implicit val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = tB
    val mapFun: Rep[In]=>Rep[Out] = f

    System.err.println("Create MapEvent(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class FilterEvent[A](parent: Event[A], f: Rep[A] => Rep[Boolean])(implicit val tA: Typ[A], mn: ModuleName) extends Event[A] {

    override val moduleName = mn
    override type In = A
    override val typIn: Typ[In] = parent.typOut //tA?
    override val typOut: Typ[Out] = typIn //tA?
    val filterFun: Rep[In]=>Rep[Boolean] = f

    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    System.err.println("Create FilterEvent(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class MergeEvent[A](parents: (Event[A],Event[A]), f: (Rep[A],Rep[A])=>Rep[A] )(implicit tA:Typ[A], mn: ModuleName) extends Event[A] {

    override val moduleName = mn
    override type In = A
    val mergeFun: (Rep[In],Rep[In])=>Rep[Out] = f

    //val parentEvents: List[Event[In]] = parents._1::parents._2::Nil
    val parentLeft: Event[In] = parents._1
    val parentRight: Event[In] = parents._2

    override val level = scala.math.max(parentLeft.level, parentRight.level) + 1
    override val typIn: Typ[In] = parentLeft.typOut //TODO: fix if different typed Events can be merged
    override val typOut: Typ[Out] = typIn

    val inputIDsLeft: Set[NodeID] = parentLeft.inputNodeIDs
    val inputIDsRight: Set[NodeID] = parentRight.inputNodeIDs
    override val inputNodeIDs: Set[NodeID] = inputIDsLeft ++ inputIDsRight

    override def buildGraphTopDown() = {
      parentLeft.addChild(id)
      parentLeft.buildGraphTopDown()
      parentRight.addChild(id)
      parentRight.buildGraphTopDown()
    }

    System.err.println("Create MergeEvent(ID:" + id + "): " + inputNodeIDs + ". Left: " + inputIDsLeft + ", Right: " + inputIDsRight)
  }

  abstract class ChangesEvent[A](parent: Behavior[A])(implicit val tA: Typ[A], mn: ModuleName) extends Event[A] {

    override val moduleName = mn
    override type In = A
    override val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = typIn

    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    System.err.println("Create ChangesEvent(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class SnapshotEvent[A:Typ,B:Typ](parentBeh: Behavior[A], parentEvent: Event[B])(implicit mn: ModuleName) extends Event[A] {

    override val moduleName = mn
    override type In = B
    override val typIn: Typ[In] = parentEvent.typOut
    override val typOut: Typ[Out] = parentBeh.typOut

    override def buildGraphTopDown() = {
      parentEvent.addChild(id)
      parentEvent.buildGraphTopDown()
      //Behaviorparent is left out!
    }

    // Important! This nodes is only tied to the chain of the event parent
    // This is made explicit in buildGraphTopDown function
    override val level = parentEvent.level + 1
    override val inputNodeIDs: Set[NodeID] = parentEvent.inputNodeIDs

    System.err.println("Create SnapshotEvent(ID:" + id + "): " + inputNodeIDs)
  }
}
