package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExpExt

import scala.collection.immutable.HashSet

trait EventOps extends NodeOps {
  behavior: BehaviorOps =>

  trait Event[A] extends Node[A] {
    // Private part
    private[FRP_EMBEDDED] type In
    private[FRP_EMBEDDED] override type Out = A
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

  object Buttons extends Enumeration {
    type Button = Value
    val button1 = Value(1)
    val button2 = Value(2)
    val button3 = Value(3)
    val button4 = Value(4)
  }

  import Buttons._
  def ButtonEvent(b: Button)(implicit n: ModuleName): Event[Int]
  def TimerEvent(i: Rep[Int])(implicit n: ModuleName)/*(implicit tI:Typ[Int])*/: Event[Int]
  def SystemTimerEvent(i: Rep[Int])(implicit n: ModuleName)/*(implicit tI:Typ[Int])*/: Event[Int]
  def ExternalEvent[A:Typ](oe: OutputEvent[A])(implicit n: ModuleName): Event[A] // oe possibly null (!)

  abstract class OutputEvent[A:Typ](val mn: ModuleName, val outName: String)
  def out[A:Typ](name: String, e: Event[A])(implicit n: ModuleName): OutputEvent[A]
}

trait EventOps_Impl extends EventOps with ScalaOpsPkgExpExt {
  behavior: BehaviorOps =>

  private val outInList = scala.collection.mutable.ListBuffer.empty[(OutputEvent[_], InputEvent[_])]
  private val buttonsRegister: scala.collection.mutable.Map[Int,Set[InputEvent[_]]] = scala.collection.mutable.HashMap()
  private val timersRegister: scala.collection.mutable.Map[Int,InputEvent[_]] = scala.collection.mutable.HashMap()
  private[FRP_EMBEDDED] val systemTimer = 0

  def getButtonsRegister: Map[Int, Set[InputEvent[_]]] = buttonsRegister.toMap
  import Buttons._
  def registerButton(b: Button, inputEvent: InputEvent[_]): Unit = {
    val button:Option[Set[InputEvent[_]]] = buttonsRegister.get(b.id)
    button match {
      case Some(set) => {
        throw new Exception("Button is already registered.")
        //buttonsRegister.update(b.id, set + inputEvent )
      }
      case None => buttonsRegister += ((b.id, HashSet(inputEvent)))
    }
  }

  def getTimersRegister: Map[Int, InputEvent[_]] = timersRegister.toMap
  def registerTimer(id: Int, inputEvent: InputEvent[_]): Unit = {
    if(timersRegister.contains(id)) throw new Exception("Timer (" + id + ") is already registered.")
    timersRegister += ((id, inputEvent))
  }

  def getOutInList: List[(OutputEvent[_], InputEvent[_])] = outInList.toList
  def addToOutInList(oe: OutputEvent[_], ie: InputEvent[_]): Unit = {
    outInList += ((oe, ie))
  }

  def getInputEventNodes: List[InputEvent[_]] = {
    val listbuilder = scala.collection.mutable.ListBuffer.empty[InputEvent[_]]
    getNodeMap.foreach{
      case (_, i@ InputEvent(_)) => listbuilder += i
      case _ => //do not add it
    }
    listbuilder.toList
  }

  def isInputEvent[T: Typ](e: Event[T]): Boolean = {
    e match {
      case InputEvent(_) => true
      case _ => false
    }
  }

  def getInputEvent[T:Typ](e:Event[T]): Option[InputEvent[T]] = {
    e match {
      case i @ InputEvent(_) => Some(i)
      case _ => None
    }
  }

  object AOutputEvent{
    def unapply[A](oe: AOutputEvent[A]) = Some(oe)
  }
  abstract class AOutputEvent[A:Typ](name: String, val parent: Event[A])(implicit val n: ModuleName) extends OutputEvent[A](n,name) {
    val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs
    def useOutput(): Unit

    lazy val outfun: Rep[((Ptr[Byte], Int))=>Unit] = {
      outputfun (mn.str, name) { (data: Rep[Ptr[Byte]], len: Rep[Int]) =>
        // TODO: this is only to show printing! make it generic maybe
        // only generated with the C code generator
        println(ptr_readVal(data))

        unitToRepUnit( () )
      }
    }
  }

  object InputEvent {
    def unapply[A](ie: InputEvent[A]) = Some(ie)
  }
  abstract class InputEvent[A](implicit tA:Typ[A], mn: ModuleName) extends Event[A] {

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

    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs
    override val moduleName = mn
    override type In = A
    override implicit val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = tB
    val mapFun: Rep[In]=>Rep[Out] = f

    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    System.err.println("Create MapEvent(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class FilterEvent[A](parent: Event[A], f: Rep[A] => Rep[Boolean])(implicit val tA: Typ[A], mn: ModuleName) extends Event[A] {

    override val moduleName = mn
    override type In = A
    override val typIn: Typ[In] = parent.typOut //tA?
    override val typOut: Typ[Out] = typIn //tA?
    val filterFun: Rep[In]=>Rep[Boolean] = f
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    System.err.println("Create FilterEvent(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class MergeEvent[A](parents: (Event[A],Event[A]), f: (Rep[A],Rep[A])=>Rep[A] )(implicit tA:Typ[A], mn: ModuleName) extends Event[A] {

    override val moduleName = mn
    override type In = A
    val mergeFun: (Rep[In],Rep[In])=>Rep[Out] = f
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
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    System.err.println("Create ChangesEvent(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class SnapshotEvent[A:Typ,B:Typ](parentBeh: Behavior[A], parentEvent: Event[B])(implicit mn: ModuleName) extends Event[A] {

    override val moduleName = mn
    override type In = B
    override val typIn: Typ[In] = parentEvent.typOut
    override val typOut: Typ[Out] = parentBeh.typOut

    // Important! This nodes is only tied to the chain of the event parent
    // This is made explicit in buildGraphTopDown function
    // BUT !!!!!
    // Since it does also depend on the behavior, it needs to be leveled after the the max level of both!!!
    // this is actually a level for generation
    // a difference can be made between frp level and generation level (important for side effects)
    override val level = scala.math.max(parentBeh.level, parentEvent.level) + 1 //TODO: genlevel
    override val inputNodeIDs: Set[NodeID] = parentEvent.inputNodeIDs

    override def buildGraphTopDown() = {
      parentEvent.addChild(id)
      parentEvent.buildGraphTopDown()
      //Behaviorparent is left out!
    }

    System.err.println("Create SnapshotEvent(ID:" + id + "): " + inputNodeIDs)
  }

}
