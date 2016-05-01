package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExpExt

import scala.collection.immutable.HashSet

trait EventOpsOptImpl extends EventOps_Impl with NodeOpsOptImpl with ScalaOpsPkgExpExt {
  behaviorImpl: BehaviorOpsOptImpl =>

  def getInputEventNodes: List[InputEvent[_]] = {
    val listbuilder = scala.collection.mutable.ListBuffer.empty[InputEvent[_]]
    getNodeMap.foreach(
      x => x match {
        case (_, i@ InputEvent( )) => listbuilder += i
        case _ => //do not add it
      }
    )
    listbuilder.toList
  }

  def isInputEvent[T: Typ](e: Event[T]): Boolean = {
    e match {
      case InputEvent( ) => true
      case _ => false
    }
  }

  def getInputEvent[T:Typ](e:Event[T]): Option[InputEvent[T]] = {
    e match {
      case i @ InputEvent( ) => Some(i)
      case _ => None
    }
  }

  implicit def eventToEventImpl[X](e: Event[X]): EventOptImpl[X] = {
    e match {
      case en @ MergeEvent(_,_) => en
      case en @ ConstantEvent(_,_) => en
      case en @ FilterEvent(_,_) => en
      case en @ MapEvent(_,_) => en
      case en @ ChangesEvent(_) => en
      case en @ SnapshotEvent(_,_) => en
      case en @ InputEvent( ) => en
      case _ => throw new Exception("Event without Implementation")
    }
  }

  override def out[A:Typ](name: String, e: Event[A])(implicit n: ModuleName): OutputEvent[A] = {
    new ConcreteOutputEvent(e)
  }

  case class ConcreteOutputEvent[A:Typ](parent: Event[A])(implicit mn: ModuleName) extends OutputEvent[A] {
    lazy val outfun: Rep[((Ptr[Byte], Int))=>Unit] = {
      outputfun (mn.str, "dummy") { (data: Rep[Ptr[Byte]], len: Rep[Int]) =>
        // TODO: this is only to show printing! make it generic maybe
        // only generated with the C code generator
        println(ptr_readVal(data))

        unitToRepUnit( () )
      }
    }

    lazy val eventfun = {
      namedfun2 (mn.str) { (pv: Rep[A], pf: Rep[Boolean]) =>
        if(pf){
          doApplyOut("dummy", outfun, pv)
        }
        unitToRepUnit( () )
      }

    }
    def useFunction = {
      val parentvalue = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired = getSymMap.getOrElse(parent.id, null)._2
      eventfun(readVar(parentvalue), readVar(parentfired))
    }

    val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs
  }

  override def TimerEvent(i: Rep[Int])(implicit n: ModuleName) = InputEvent[Int]( )  // only conceptual
  override def ExternalEvent[A:Typ](oe: OutputEvent[A])(implicit n: ModuleName) = InputEvent[A]( ) // oe possibly null (!)

  case class InputEvent[A]()(implicit tA:Typ[A], mn: ModuleName) extends EventNode[Unit,A] {
    //val inputFun: () => Rep[Out] = () => i
    implicit val ptrbytetyp = ptrTyp[Byte]
    lazy val eventfun = {
      namedfun4 (mn.str) { (data: Rep[Ptr[Byte]], len: Rep[Int], v: Rep[Ptr[A]], f: Rep[Ptr[Boolean]]) =>
        val input: Var[Int] = var_new[Int](unit(0))
        val i: Var[Int] = var_new[Int](unit(0))
        while(i<len){
          val databyte: Rep[Int] = rep_asinstanceof(ptr_readValIndexed(data, readVar(i)), typ[Byte], typ[Int])
          val sh = infix_<<(databyte, i*8)
          val cummulated = input + sh
          var_assign[Int](input, cummulated)
          var_assign(i, i+1)
        }

        ptr_assignToVal(f, true)
        ptr_assignToVal(v, rep_asinstanceof(readVar(input), typ[Int], typ[A]))
      }
    }
    override def produceFunction =
      throw new IllegalStateException("Input node should not be used anymore for eventfun. Handled in top level function")

    override def useFunction = {
      throw new IllegalStateException("UseNode should not be used in Input")
    }

    def useInputNode(data: Rep[Ptr[Byte]], len: Rep[Int]/*, value: Var[A], fired: Var[Boolean]*/): Unit = {
      renewNode()
      val value = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[A]]
      val fired = getSymMap.getOrElse(id, null)._2
      eventfun(data, len, ptr_new(value), ptr_new(fired))
    }

    override def buildGraphTopDown() = {
      // has no parents, nothing to do!
    }

    val level = 0
    override val typIn: Typ[In] = typ[Unit]
    override val typOut: Typ[Out] = tA
    override val inputNodeIDs: Set[NodeID] = HashSet(this.id)

    System.err.println("Create InputEvent(ID:" + id + "): " + inputNodeIDs)
  }

  case class ConstantEvent[A,B](parent: Event[A], c : Rep[B])(implicit tB:Typ[B], mn: ModuleName) extends EventNode[A,B] {
    override implicit val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = tB
    val constFun: Rep[In]=>Rep[Out] = _ => c
    lazy val eventfun = {
      namedfun4 (mn.str) { (pv: Rep[A], pf: Rep[Boolean], v: Rep[Ptr[B]], f: Rep[Ptr[Boolean]]) =>
        if(pf) {
          ptr_assignToVal(f, true)
          ptr_assignToVal(v, constFun(pv))
        } else {
          ptr_assignToVal(f, false)
        }
      }
    }
    override def produceFunction = eventfun
    override def useFunction = {
      renewNode()
      val parentvalue = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired = getSymMap.getOrElse(parent.id, null)._2
      val value = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[B]]
      val fired = getSymMap.getOrElse(id, null)._2
      eventfun(parentvalue, parentfired, ptr_new(value), ptr_new(fired))
    }
    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    val level = parent.level + 1

    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    System.err.println("Create ConstantEvent(ID:" + id + "): " + inputNodeIDs)
  }

  case class MapEvent[A,B](parent: Event[A], f: Rep[A] => Rep[B])(implicit tB:Typ[B], mn: ModuleName) extends EventNode[A,B] {
    override implicit val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = tB
    val mapFun: Rep[In]=>Rep[Out] = f
    lazy val eventfun = {
      namedfun4 (mn.str) { (pv: Rep[A], pf: Rep[Boolean], v: Rep[Ptr[B]], f: Rep[Ptr[Boolean]]) =>
        if(pf) {
          ptr_assignToVal(f, true)
          ptr_assignToVal(v, mapFun(pv))
        } else {
          ptr_assignToVal(f, false)
        }
      }
    }
    override def produceFunction = eventfun
    override def useFunction = {
      renewNode()
      val parentvalue = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired = getSymMap.getOrElse(parent.id, null)._2
      val value = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[B]]
      val fired = getSymMap.getOrElse(id, null)._2
      eventfun(parentvalue, parentfired, ptr_new(value), ptr_new(fired))
    }
    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    System.err.println("Create MapEvent(ID:" + id + "): " + inputNodeIDs)
  }

  case class FilterEvent[A](parent: Event[A], f: Rep[A] => Rep[Boolean])(implicit val tA: Typ[A], mn: ModuleName) extends EventNode[A,A] {
    override val typIn: Typ[In] = parent.typOut //tA?
    override val typOut: Typ[Out] = typIn //tA?
    val filterFun: Rep[In]=>Rep[Boolean] = f
    lazy val eventfun = {
      namedfun4 (mn.str) { (pv: Rep[A], pf: Rep[Boolean], v: Rep[Ptr[A]], f: Rep[Ptr[Boolean]]) =>
        if(pf) {
          if(filterFun(pv) ) {
            ptr_assignToVal(f, true)
            ptr_assignToVal(v, pv)
          } else {
            ptr_assignToVal(f, false)

          }
        } else {
          ptr_assignToVal(f, true)
        }
      }
    }
    override def produceFunction = eventfun
    override def useFunction = {
      renewNode()
      val parentvalue = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired = getSymMap.getOrElse(parent.id, null)._2
      val value = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[A]]
      val fired = getSymMap.getOrElse(id, null)._2
      eventfun(parentvalue, parentfired, ptr_new(value), ptr_new(fired))
    }
    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    System.err.println("Create FilterEvent(ID:" + id + "): " + inputNodeIDs)
  }

  case class MergeEvent[A](parents: (Event[A],Event[A]), f: (Rep[A],Rep[A])=>Rep[A] )(implicit tA:Typ[A], mn: ModuleName) extends EventNode[A,A] {
    val mergeFun: (Rep[In],Rep[In])=>Rep[Out] = f
    val parentLeft: Event[In] = parents._1
    val parentRight: Event[In] = parents._2
    val level = scala.math.max(parentLeft.level, parentRight.level) + 1
    override val typIn: Typ[In] = parentLeft.typOut //TODO: fix if different typed Events can be merged
    override val typOut: Typ[Out] = typIn
    val inputIDsLeft: Set[NodeID] = parentLeft.inputNodeIDs
    val inputIDsRight: Set[NodeID] = parentRight.inputNodeIDs
    override val inputNodeIDs: Set[NodeID] = inputIDsLeft ++ inputIDsRight

    lazy val eventfun = {
      namedfun6 (mn.str) { (plv: Rep[A], plf: Rep[Boolean], prv: Rep[A], prf: Rep[Boolean], v: Rep[Ptr[A]], f: Rep[Ptr[Boolean]]) =>
        if(plf && prf ) {
          ptr_assignToVal(f, true)
          ptr_assignToVal(v, mergeFun(plv,prv))
        }
        else if (plf) {
          ptr_assignToVal(f, true)
          ptr_assignToVal(v, plv)
        }
        else if (prf){
          ptr_assignToVal(f, true)
          ptr_assignToVal(v, prv)
        }
        else {
          ptr_assignToVal(f, false)
        }
      }
    }
    override def produceFunction = eventfun
    override def useFunction = {
      renewNode()
      val parentleftvalue = getSymMap.getOrElse(parentLeft.id, (parentLeft.createValue,0))._1.asInstanceOf[Var[A]]
      val parentleftfired = getSymMap.getOrElse(parentLeft.id, (0,var_new[Boolean](false)))._2
      val parentrightvalue = getSymMap.getOrElse(parentRight.id, (parentRight.createValue,0))._1.asInstanceOf[Var[A]]
      val parentrightfired = getSymMap.getOrElse(parentRight.id, (0,var_new[Boolean](false)))._2
      val value = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[A]]
      val fired = getSymMap.getOrElse(id, null)._2
      eventfun(parentleftvalue, parentleftfired, parentrightvalue, parentrightfired, ptr_new(value), ptr_new(fired))
    }
    override def buildGraphTopDown() = {
      parentLeft.addChild(id)
      parentLeft.buildGraphTopDown()
      parentRight.addChild(id)
      parentRight.buildGraphTopDown()
    }

    System.err.println("Create MergeEvent(ID:" + id + "): " + inputNodeIDs + ". Left: " + inputIDsLeft + ", Right: " + inputIDsRight)
  }

  case class ChangesEvent[A](parent: Behavior[A])(implicit val tA: Typ[A], mn: ModuleName) extends EventNode[A,A] {
    override val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = typIn

    lazy val parentvalue: Rep[In] = readVar(parent.getValue())
    lazy val eventfun = {
      namedfun2 (mn.str) { (v: Rep[Ptr[A]], f: Rep[Ptr[Boolean]]) =>
        ptr_assignToVal(f, true)
        ptr_assignToVal(v, parentvalue)
      }
    }
    override def produceFunction = eventfun
    override def useFunction = {
      renewNode()
      val value = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[A]]
      val fired = getSymMap.getOrElse(id, null)._2
      eventfun(ptr_new(value), ptr_new(fired))
    }
    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    System.err.println("Create ChangesEvent(ID:" + id + "): " + inputNodeIDs)

  }

  case class SnapshotEvent[A:Typ,B:Typ](parentBeh: Behavior[A], parentEvent: Event[B])(implicit mn: ModuleName) extends EventNode[B,A] {
    override val typIn: Typ[In] = parentEvent.typOut
    override val typOut: Typ[Out] = parentBeh.typOut

    lazy val parentvalue: Rep[Out] = readVar(parentBeh.getValue())
    lazy val eventfun = {
      namedfun3 (mn.str) { (pef: Rep[Boolean], v: Rep[Ptr[A]], f: Rep[Ptr[Boolean]]) =>
        if(pef) {
          //var_assign(fired, unit(true))
          ptr_assignToVal(f, true)
          //var_assign[Out](value, parentvalue)
          ptr_assignToVal(v, parentvalue)
        } else {
          //var_assign(fired, unit(false))
          ptr_assignToVal(f, false)
        }
      }
    }
    override def produceFunction = eventfun
    override def useFunction = {
      renewNode()
      val parentEventFired = getSymMap.getOrElse(parentEvent.id, null)._2
      val value = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[A]]
      val fired = getSymMap.getOrElse(id, null)._2
      eventfun(parentEventFired, ptr_new(value), ptr_new(fired))
    }
    override def buildGraphTopDown() = {
      parentEvent.addChild(id)
      parentEvent.buildGraphTopDown()
      //Behaviorparent is left out!
    }

    // Important! This nodes is only tied to the chain of the event parent
    // This is made explicit in buildGraphTopDown function
    val level = parentEvent.level + 1
    override val inputNodeIDs: Set[NodeID] = parentEvent.inputNodeIDs

    System.err.println("Create SnapshotEvent(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class EventNode[A,B:Typ](implicit mn: ModuleName) extends EventOptImpl[B] with NodeOptImpl[B] {
    addNodeToNodemap(id,this)
    override type In = A
    override val childNodeIDs = scala.collection.mutable.HashSet[NodeID]()
    override def addChild(id: NodeID): Unit = {
      childNodeIDs.add(id)
    }

    override val moduleName = mn

    override def generateNode() = {
      if (isInputEvent(this)) {
        getInputEvent(this) match {
          case Some(i) => i.eventfun
          case None => throw new Exception("Not cool. You should check using isInputEvent!")
        }
      }
      else {
        implicit val tOut = this.typOut
        this.produceFunction
      }
    }

    def createValue() = {
      vardecl_new[B]
    }
    def createFired() = {
      var_new[Boolean](false)
    }

    override def renewNode(): Unit = {
      val f = createFired()
      val v = createValue()
      addSymToSymMap(id, v, f)
    }

    override def getInitializer(): Rep[Unit] = unitToRepUnit( () )

  }

  trait EventOptImpl[A] extends Event[A] {

    def createValue(): Var[_]
    def createFired(): Var[Boolean]
    def renewNode(): Unit

    override def constant[B:Typ](c: Rep[B])(implicit n: ModuleName): Event[B] = ConstantEvent[A,B](this, c)
    override def map[B:Typ](f: Rep[A] => Rep[B])(implicit n: ModuleName): Event[B] = MapEvent[A,B](this, f)
    override def filter(f: Rep[A] => Rep[Boolean])(implicit n: ModuleName): Event[A] = FilterEvent[A](this, f)(typOut,n)
    override def merge(e: Event[A], f: (Rep[A],Rep[A])=>Rep[A])(implicit n: ModuleName) = MergeEvent[A]( (this, e), f)(typOut, n)

    override def startsWith(i: Rep[A])(implicit n: ModuleName): Behavior[A] = StartsWithBehavior(this, i)(typOut,n)
    override def foldp[B](f: (Rep[A], Rep[B]) => Rep[B], init: Rep[B])(implicit tB: Typ[B],n: ModuleName): Behavior[B] = {
      implicit val tOut = typOut
      FoldpBehavior[A,B](this, f, init)(typOut, tB, n)
    }
    override def foldp2[B,C]
    (e: Event[B],
     f1:((Rep[A],Rep[C]) => Rep[C]),f2:((Rep[B],Rep[C]) => Rep[C]), f3:((Rep[A],Rep[B],Rep[C]) => Rep[C]),
     init: Rep[C]
    )(implicit tB: Typ[B], tC: Typ[C], n: ModuleName): Behavior[C] = {

      implicit val tOut = typOut
      Foldp2Behavior[A,B,C](this, e, f1,f2,f3, init)(typOut, tB, tC, n)

    }
  }
}
