package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.{ScalaOpsPkgExpExt, ScalaOpsPkgExt}

import scala.collection.immutable.HashSet

trait EventOps extends NodeOps {
  behavior: BehaviorOps =>

  trait Event[A] extends Node[A] {
    type In
    type Out = A

    //TODO: make private[FRP_EMBEDDED]
    implicit val typIn: Typ[In]
    val typOut: Typ[Out]

    // Public part
    def constant[B:Typ] (c: Rep[B]): Event[B]
    def map[B:Typ] (f: Rep[A] => Rep[B]): Event[B]
    def filter (f: Rep[A] => Rep[Boolean]): Event[A]
    def merge (e: Event[A], f:(Rep[A],Rep[A])=>Rep[A]): Event[A]

    def startsWith(i: Rep[A]): Behavior[A]
    def foldp[B:Typ]( f:((Rep[B],Rep[A]) => Rep[B]), init: Rep[B]): Behavior[B]
  }

  def TimerEvent(i: Rep[Int])/*(implicit tI:Typ[Int])*/: Event[Int]

}

trait EventOpsImpl extends EventOps with NodeOpsImpl with ScalaOpsPkgExpExt  {
  behaviorImpl: BehaviorOpsImpl =>

  def getInputEventNodes: List[InputEvent[_]] = {
    val listbuilder = scala.collection.mutable.ListBuffer.empty[InputEvent[_]]
    getNodeMap.foreach(
      x => x match {
        case (_, i@ InputEvent(_)) => listbuilder += i
        case _ => //do not add it
      }
    )
    listbuilder.toList
  }

  def buildGraphTopDownEvent[T](e: Event[T]): Unit = {
    e match {
      case en @ MergeEvent(_,_) =>
        en.parentLeft.addChild(e.id)
        en.parentLeft.buildGraphTopDown()
        en.parentRight.addChild(e.id)
        en.parentRight.buildGraphTopDown()
      case en @ ConstantEvent(_,_) =>
        en.parent.addChild(e.id)
        en.parent.buildGraphTopDown()
      case en @ FilterEvent(_,_) =>
        en.parent.addChild(e.id)
        en.parent.buildGraphTopDown()
      case en @ MapEvent(_,_) =>
        en.parent.addChild(e.id)
        en.parent.buildGraphTopDown()
      case en @ ChangesEvent(_) =>
        en.parent.addChild(e.id)
        en.parent.buildGraphTopDown()
      case en @ SnapshotEvent(_,_) =>
        en.parentEvent.addChild(e.id)
        en.parentEvent.buildGraphTopDown()
        // Behaviorparent is left out!
      case en @ InputEvent(_) =>
      // no parents
      case _ => throw new IllegalStateException("Unsupported Event type")
    }
  }

  def isInputEvent[T: Typ](e: Event[T]): Boolean = {
    e match {
      case InputEvent(_) => true
      case _ => false
    }
  }

  def getInputEventFunction[T: Typ](e: Event[T]): Rep[((Ptr[Byte], Int)) => Unit] = {
    e match {
      case i @ InputEvent(_) => i.eventfun
      case _ => throw new IllegalStateException("Not an input event node.")
    }
  }

  def getEventValue[T:Typ](e: Event[T]): Var[T] = {
    e match {
      case en @ MergeEvent(_,_) => en.value
      case en @ ConstantEvent(_,_) => en.value
      case en @ FilterEvent(_,_) => en.value
      case en @ MapEvent(_,_) => en.value
      case en @ InputEvent(_) => en.value
      case en @ ChangesEvent(_) => en.value
      case en @ SnapshotEvent(_,_) => en.value
      case _ => throw new IllegalStateException("Unsupported Event type")
    }
  }

  def getEventFired[X](e: Event[X]): Var[Boolean] = {
    e match {
      case en @ MergeEvent(_,_) => en.fired
      case en @ ConstantEvent(_,_) => en.fired
      case en @ FilterEvent(_,_) => en.fired
      case en @ MapEvent(_,_) => en.fired
      case en @ InputEvent(_) => en.fired
      case en @ ChangesEvent(_) => en.fired
      case en @ SnapshotEvent(_,_) => en.fired
      case _ => throw new IllegalStateException("Unsupported Event type")
    }
  }

  def getEventFunction[X](e: Event[X]): Rep[(Unit)=>Unit] = {
    e match {
      case en @ MergeEvent(_,_) => en.eventfun
      case en @ ConstantEvent(_,_) => en.eventfun
      case en @ FilterEvent(_,_) => en.eventfun
      case en @ MapEvent(_,_) => en.eventfun
      case en @ ChangesEvent(_) => en.eventfun
      case en @ SnapshotEvent(_,_) => en.eventfun
      case en @ InputEvent(_) =>
        //en.eventfun
        throw new IllegalStateException("Input node should not be used anymore for eventfun. Handled in top level function")
      case _ => throw new IllegalStateException("Unsupported Event type")
    }
  }

  override def TimerEvent(i: Rep[Int]) = InputEvent[Int](i)  // only conceptual

  case class InputEvent[A] (i: Rep[A])(implicit tA:Typ[A]) extends EventNode[Unit,A] {
    val inputFun: () => Rep[Out] = () => i
    implicit val ptrbytetyp = ptrTyp[Byte]
    lazy val eventfun: Rep[((Ptr[Byte], Int)) => Unit] = {
      namedfun2 ("module1") { (data: Rep[Ptr[Byte]], len: Rep[Int]) =>
        val input: Var[Int] = var_new[Int](unit(0))
        val i: Var[Int] = var_new[Int](unit(0))
        while(i<len){
          val databyte: Rep[Int] = rep_asinstanceof(ptr_readValIndexed(data, readVar(i)), typ[Byte], typ[Int])
          val sh = infix_<<(databyte, i*8)
          val cummulated = input + sh
          var_assign[Int](input, cummulated)
          var_assign(i, i+1)
        }

        var_assign(fired, unit(true))
        var_assign(value, rep_asinstanceof(readVar(input), typ[Int], typ[A]))
      }
    }
    val level = 0
    override val typIn: Typ[In] = typ[Unit]
    override val typOut: Typ[Out] = tA
    override val inputNodeIDs: Set[NodeID] = HashSet(this.id)

    System.err.println("Create InputEvent(ID:" + id + "): " + inputNodeIDs)
  }

  case class ConstantEvent[A,B](parent: Event[A], c : Rep[B])(implicit tB:Typ[B]) extends EventNode[A,B] {
    override implicit val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = tB
    val constFun: Rep[In]=>Rep[Out] = _ => c
    lazy val parentvalue: Rep[In] = readVar(getEventValue(parent))
    lazy val parentfired: Rep[Boolean] = readVar(getEventFired(parent))
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 ("module1") { () =>
        if(parentfired) {
          var_assign(fired, unit(true))
          var_assign[Out](value, constFun(parentvalue))
        } else {
          var_assign(fired, unit(false))
        }
      }
    }
    val level = parent.level + 1

    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    System.err.println("Create ConstantEvent(ID:" + id + "): " + inputNodeIDs)
  }

  case class MapEvent[A,B](parent: Event[A], f: Rep[A] => Rep[B])(implicit tB:Typ[B]) extends EventNode[A,B] {
    override implicit val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = tB
    val mapFun: Rep[In]=>Rep[Out] = f
    lazy val parentvalue: Rep[In] = readVar(getEventValue(parent))
    lazy val parentfired: Rep[Boolean] = readVar(getEventFired(parent))
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 ("module1") { () =>
        if(parentfired) {
          var_assign(fired, unit(true))
          var_assign[Out](value, mapFun(parentvalue))
        } else {
          var_assign(fired, unit(false))
        }
      }
    }
    val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    System.err.println("Create MapEvent(ID:" + id + "): " + inputNodeIDs)
  }

  case class FilterEvent[A](parent: Event[A], f: Rep[A] => Rep[Boolean])(implicit val tA: Typ[A]) extends EventNode[A,A] {
    override val typIn: Typ[In] = parent.typOut //tA?
    override val typOut: Typ[Out] = typIn //tA?
    val filterFun: Rep[In]=>Rep[Boolean] = f
    lazy val parentvalue: Rep[In] = readVar(getEventValue(parent))
    lazy val parentfired: Rep[Boolean] = readVar(getEventFired(parent))
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 ("module1") { () =>
        if(parentfired) {
          if(filterFun(parentvalue) ) {
            var_assign(fired, unit(true))
            var_assign[In](value, parentvalue)
          } else {
            var_assign(fired, unit(false))

          }
        } else {
          var_assign(fired, unit(false))
        }
      }
    }
    val level = parent.level + 1

    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    System.err.println("Create FilterEvent(ID:" + id + "): " + inputNodeIDs)
  }

  case class MergeEvent[A](parents: (Event[A],Event[A]), f: (Rep[A],Rep[A])=>Rep[A] )(implicit tA:Typ[A]) extends EventNode[A,A] {
    val mergeFun: (Rep[In],Rep[In])=>Rep[Out] = f
    //val parentEvents: List[Event[In]] = parents._1::parents._2::Nil
    val parentLeft: Event[In] = parents._1
    val parentRight: Event[In] = parents._2
    val level = scala.math.max(parentLeft.level, parentRight.level) + 1
    override val typIn: Typ[In] = parentLeft.typOut //TODO: fix if different typed Events can be merged
    override val typOut: Typ[Out] = typIn
    val inputIDsLeft: Set[NodeID] = parentLeft.inputNodeIDs
    val inputIDsRight: Set[NodeID] = parentRight.inputNodeIDs
    override val inputNodeIDs: Set[NodeID] = inputIDsLeft ++ inputIDsRight

    lazy val parentleftvalue: Rep[In] = readVar(getEventValue(parentLeft))
    lazy val parentleftfired: Rep[Boolean] = readVar(getEventFired(parentLeft))
    lazy val parentrightvalue: Rep[In] = readVar(getEventValue(parentRight))
    lazy val parentrightfired: Rep[Boolean] = readVar(getEventFired(parentRight))
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 ("module1") { () =>
        if(parentleftfired && parentrightfired ) {
          var_assign(fired, unit(true))
          var_assign[Out](value, mergeFun(parentleftvalue, parentrightvalue))
        }
        else if (parentleftfired) {
          var_assign(fired, unit(true))
          var_assign[Out](value, parentleftvalue)
        }
        else if (parentrightfired){
          var_assign(fired, unit(true))
          var_assign[Out](value, parentrightvalue)
        }
        else {
          var_assign(fired, unit(false))
        }
      }
    }

    System.err.println("Create MergeEvent(ID:" + id + "): " + inputNodeIDs + ". Left: " + inputIDsLeft + ", Right: " + inputIDsRight)
  }

  case class ChangesEvent[A](parent: Behavior[A])(implicit val tA: Typ[A]) extends EventNode[A,A] {
    override val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = typIn

    lazy val parentvalue: Rep[In] = readVar(getBehaviorValue(parent))
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 ("module1") { () =>
          var_assign(fired, unit(true))
          var_assign[Out](value, parentvalue)
      }
    }
    val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    System.err.println("Create ChangesEvent(ID:" + id + "): " + inputNodeIDs)

  }

  case class SnapshotEvent[A:Typ,B:Typ](parentBeh: Behavior[A], parentEvent: Event[B]) extends EventNode[B,A] {
    override val typIn: Typ[In] = parentEvent.typOut
    override val typOut: Typ[Out] = parentBeh.typOut

    lazy val parentvalue: Rep[Out] = readVar(getBehaviorValue(parentBeh))
    lazy val parentEventFired: Rep[Boolean] = readVar(getEventFired(parentEvent))
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 ("module1") { () =>
        if(parentEventFired) {
          var_assign(fired, unit(true))
          var_assign[Out](value, parentvalue)
        } else {
          var_assign(fired, unit(false))
        }
      }
    }

    // Important! This nodes is only tied to the chain of the event parent
    // This is made explicit in buildGraphTopDown function
    val level = parentEvent.level + 1
    override val inputNodeIDs: Set[NodeID] = parentEvent.inputNodeIDs

    System.err.println("Create SnapshotEvent(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class EventNode[A,B:Typ] extends EventImpl[B] with NodeImpl[B] {
    addNodeToNodemap(id,this)
    override type In = A
    override val childNodeIDs = scala.collection.mutable.HashSet[NodeID]()
    override def addChild(id: NodeID): Unit = {
      childNodeIDs.add(id)
    }

    //lazy val fired = vardecl_new[Boolean]()
    lazy val fired = vardeclmod_new[Boolean]("module1")
    //lazy val value = vardecl_new[B]()
    lazy val value = vardeclmod_new[B]("module1")

    override def generateNode(f: () => Rep[Unit]): () => Rep[Unit] = {
          if (isInputEvent(this)) {
            () => {
              f()
              fired
              value
              getInputEventFunction(this)
              unitToRepUnit(())
            }
          }
          else {
              () => {
                f()
                fired
                value
                implicit val tOut = this.typOut
                getEventFunction(this)
                unitToRepUnit( () )
              }
          }

    }

    override def getFunction(): Rep[(Unit)=>Unit] = {
      getEventFunction(this)
    }

    override def getInitializer(): Rep[Unit] = unitToRepUnit( () )

    override def buildGraphTopDown(): Unit = {
      buildGraphTopDownEvent(this)
    }
  }

  trait EventImpl[A] extends Event[A] {
    override def constant[B:Typ](c: Rep[B]): Event[B] = ConstantEvent[A,B](this, c)
    override def map[B:Typ](f: Rep[A] => Rep[B]): Event[B] = MapEvent[A,B](this, f)
    override def filter(f: Rep[A] => Rep[Boolean]): Event[A] = FilterEvent[A](this, f)(typOut)
    override def merge(e: Event[A], f: (Rep[A],Rep[A])=>Rep[A]) = MergeEvent[A]( (this, e), f)(typOut)

    override def startsWith(i: Rep[A]): Behavior[A] = StartsWithBehavior(this, i)(typOut)
    override def foldp[B:Typ](f: (Rep[B], Rep[A]) => Rep[B], init: Rep[B]): Behavior[B] = {
      implicit val tOut = typOut
      FoldpBehavior[B,A](this, f, init)
    }
  }
}
