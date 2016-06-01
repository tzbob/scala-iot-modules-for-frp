package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExpExt

trait EventOpsImpl extends EventOps_Impl with NodeOpsImpl with ScalaOpsPkgExpExt {
  behaviorImpl: BehaviorOpsImpl =>

  def getEventNodeList: List[Event[_]] = {
    val listbuilder = scala.collection.mutable.ListBuffer.empty[Event[_]]
    getNodeMap.values.foreach( n =>
      getOptionEvent(n) match {
        case Some(e) => listbuilder += e
        case None => // do not add it
      }
    )
    listbuilder.toList
  }

  def getOptionEvent[X](n: Node[X]): Option[Event[X]] = {
    n match {
      case en @ ConcreteMergeEvent(_,_) => Some(en)
      case en @ ConcreteConstantEvent(_,_) => Some(en)
      case en @ ConcreteFilterEvent(_,_) => Some(en)
      case en @ ConcreteMapEvent(_,_) => Some(en)
      case en @ ConcreteChangesEvent(_) => Some(en)
      case en @ ConcreteSnapshotEvent(_,_) => Some(en)
      case en @ ConcreteInputEvent( ) => Some(en)
      case _ => None
    }
  }

  implicit def eventToEventImpl[X](e: Event[X]): EventImpl[X] = {
    e match {
      case en @ ConcreteMergeEvent(_,_) => en
      case en @ ConcreteConstantEvent(_,_) => en
      case en @ ConcreteFilterEvent(_,_) => en
      case en @ ConcreteMapEvent(_,_) => en
      case en @ ConcreteChangesEvent(_) => en
      case en @ ConcreteSnapshotEvent(_,_) => en
      case en @ ConcreteInputEvent( ) => en
      case _ => throw new Exception("Event without Implementation")
    }
  }

  override def out[A:Typ](name: String, e: Event[A])(implicit n: ModuleName): OutputEvent[A] = {
    new ConcreteOutputEvent(name, e)
  }

  case class ConcreteOutputEvent[A:Typ](name: String, p: Event[A])(implicit n: ModuleName) extends AOutputEvent[A](name,p) {

    lazy val parentvalue: Rep[A] = readVar(parent.getValue)
    lazy val parentfired: Rep[Boolean] = readVar(parent.getFired)

    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 (mn.str) { () =>
        if(parentfired){
          doApplyOut(name, outfun, parentvalue)
        }
        unitToRepUnit( () )
      }

    }

    override def useOutput(): Unit = eventfun( () )

  }

  import Buttons._
  override def ButtonEvent(b: Button)(implicit n: ModuleName): Event[Int] = {
    val input = ConcreteInputEvent[Int]()
    registerButton(b, input, false)
    input
  }

  override def ButtonUpDownEvent(b: Button)(implicit n: ModuleName): Event[Int] = {
    val input = ConcreteInputEvent[Int]()
    registerButton(b, input, true)
    input
  }

  override def AInputEvent( )(implicit n: ModuleName) = ConcreteInputEvent[Int]( ) // only conceptual

  override def SystemTimerEvent( )(implicit n: ModuleName) = {
    val timer = ConcreteInputEvent[Int]( )
    registerTimer(systemTimer, timer)
    timer
  }

  override def ExternalEvent[A:Typ](oe: OutputEvent[A])(implicit mn: ModuleName) = {
    val input = ConcreteInputEvent[A]( ) // oe possibly null (!)
    addToOutInList(oe, input)
    input
  }

  case class ConcreteInputEvent[A]()(implicit tA:Typ[A], mn: ModuleName) extends InputEvent[A] with EventImpl[A] {
    override val impl = new ImplWrapper

    implicit val ptrbytetyp = ptrTyp[Byte]
    lazy val eventfun: Rep[((Ptr[Byte], Int)) => Unit] = {
      namedfun2 (mn.str) { (data: Rep[Ptr[Byte]], len: Rep[Int]) =>
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

    override def produceInput(): Unit = eventfun
    override def useInput(data: Rep[Ptr[Byte]], len: Rep[Int]): Unit = eventfun(data,len)
  }

  case class ConcreteConstantEvent[A,B](parent: EventImpl[A], c : Rep[B])(implicit tB:Typ[B], mn: ModuleName)
    extends ConstantEvent[A,B](parent,c) with EventImpl[B] {

    override val impl = new ImplWrapper()
    lazy val parentvalue: Rep[In] = readVar(parent.getValue)
    lazy val parentfired: Rep[Boolean] = readVar(parent.getFired)
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 (mn.str) { () =>
        if(parentfired) {
          var_assign(fired, unit(true))
          var_assign[Out](value, constFun(parentvalue))
        } else {
          var_assign(fired, unit(false))
        }
      }
    }

    override def produceFunction() = eventfun
    override def useFunction() = eventfun( () )

  }

  case class ConcreteMapEvent[A,B](parent: EventImpl[A], f: Rep[A] => Rep[B])(implicit tB:Typ[B], mn: ModuleName)
    extends MapEvent[A,B](parent, f) with EventImpl[B] {

    override val impl = new ImplWrapper()
    lazy val parentvalue: Rep[In] = readVar(parent.getValue)
    lazy val parentfired: Rep[Boolean] = readVar(parent.getFired)
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 (mn.str) { () =>
        if(parentfired) {
          var_assign(fired, unit(true))
          var_assign[Out](value, mapFun(parentvalue))
        } else {
          var_assign(fired, unit(false))
        }
      }
    }
    override def produceFunction() = eventfun
    override def useFunction() = eventfun( () )
  }

  case class ConcreteFilterEvent[A](parent: EventImpl[A], f: Rep[A] => Rep[Boolean])(implicit tA: Typ[A], mn: ModuleName)
    extends FilterEvent[A](parent, f) with EventImpl[A] {

    override val impl = new ImplWrapper()
    lazy val parentvalue: Rep[In] = readVar(parent.getValue)
    lazy val parentfired: Rep[Boolean] = readVar(parent.getFired)
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 (mn.str) { () =>
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
    override def produceFunction() = eventfun
    override def useFunction() = eventfun( () )

  }

  case class ConcreteMergeEvent[A](parents: (EventImpl[A],EventImpl[A]), f: (Rep[A],Rep[A])=>Rep[A] )(implicit tA:Typ[A], mn: ModuleName)
    extends MergeEvent[A](parents,f) with EventImpl[A] {

    override val impl = new ImplWrapper()
    lazy val parentleftvalue: Rep[In] = readVar(parentLeft.getValue)
    lazy val parentleftfired: Rep[Boolean] = readVar(parentLeft.getFired)
    lazy val parentrightvalue: Rep[In] = readVar(parentRight.getValue)
    lazy val parentrightfired: Rep[Boolean] = readVar(parentRight.getFired)
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 (mn.str) { () =>
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
    override def produceFunction() = eventfun
    override def useFunction() = eventfun( () )

  }

  case class ConcreteChangesEvent[A](parent: Behavior[A])(implicit tA: Typ[A], mn: ModuleName)
    extends ChangesEvent[A](parent) with EventImpl[A] {

    override val impl = new ImplWrapper()
    lazy val parentvalue: Rep[In] = readVar(parent.getValue)
    lazy val parentfired: Rep[Boolean] = readVar(parent.getFired)
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 (mn.str) { () =>
        if(parentfired) {
          var_assign(fired, unit(true))
          var_assign[Out](value, parentvalue)
        }
        else{
          var_assign(fired, unit(false))
        }
      }
    }
    override def produceFunction() = eventfun
    override def useFunction() = eventfun( () )

  }

  case class ConcreteSnapshotEvent[A:Typ,B:Typ](parentBeh: Behavior[A], parentEvent: Event[B])(implicit mn: ModuleName)
    extends SnapshotEvent[A,B](parentBeh, parentEvent) with EventImpl[A] {

    override val impl = new ImplWrapper()
    lazy val parentvalue: Rep[Out] = readVar(parentBeh.getValue)
    lazy val parentEventFired: Rep[Boolean] = readVar(parentEvent.getFired)
    lazy val eventfun: Rep[(Unit)=>Unit] = {
      namedfun0 (mn.str) { () =>
        if(parentEventFired) {
          var_assign(fired, unit(true))
          var_assign[Out](value, parentvalue)
        } else {
          var_assign(fired, unit(false))
        }
      }
    }
    override def produceFunction() = eventfun
    override def useFunction() = eventfun( () )

  }

  trait EventImpl[A] extends Event[A] with NodeImpl[A] {

    protected case class ImplWrapper(implicit val typA: Typ[A])
    protected val impl: ImplWrapper
    import impl.typA

    override def constant[B](c: Rep[B])(implicit tB: Typ[B], n: ModuleName): Event[B] = ConcreteConstantEvent[A,B](this, c)(tB,n)
    override def map[B](f: Rep[A] => Rep[B])(implicit tB:Typ[B], n: ModuleName): Event[B] = ConcreteMapEvent[A,B](this, f)(tB,n)
    override def filter(f: Rep[A] => Rep[Boolean])(implicit n: ModuleName): Event[A] = ConcreteFilterEvent[A](this, f)(typOut,n)
    override def merge(e: Event[A], f: (Rep[A],Rep[A])=>Rep[A])(implicit n: ModuleName) = ConcreteMergeEvent[A]( (this, e), f)(typOut, n)

    override def startsWith(i: Rep[A])(implicit n: ModuleName): Behavior[A] = ConcreteStartsWithBehavior(this, i)(typOut,n)
    override def foldp[B](f: (Rep[A], Rep[B]) => Rep[B], init: Rep[B])(implicit tB: Typ[B],n: ModuleName): Behavior[B] = {
      implicit val tOut = typOut
      ConcreteFoldpBehavior[A,B](this, f, init)(typOut, tB, n)
    }
    override def foldp2[B,C]
    (e: Event[B],
     f1:((Rep[A],Rep[C]) => Rep[C]),f2:((Rep[B],Rep[C]) => Rep[C]), f3:((Rep[A],Rep[B],Rep[C]) => Rep[C]),
     init: Rep[C]
    )(implicit tB: Typ[B], tC: Typ[C], n: ModuleName): Behavior[C] = {

      implicit val tOut = typOut
      ConcreteFoldp2Behavior[A,B,C](this, e, f1,f2,f3, init)(typOut, tB, tC, n)
    }

    addNodeToNodemap(id,this)
    override val childNodeIDs = scala.collection.mutable.HashSet[NodeID]()
    override def addChild(id: NodeID): Unit = childNodeIDs.add(id)

    lazy val fired = vardeclmod_new[Boolean](moduleName.str)
    def getFired = fired
    lazy val value = vardeclmod_new[A](moduleName.str)
    def getValue = value

    override def generateNode(): Unit = {
      if (isInputEvent(this)) {
        fired
        value
        getInputEvent(this) match {
          case Some(i) => i.produceInput
          case None => throw new Exception("Not cool. You should check using isInputEvent!")
        }
      }
      else {
        fired
        value
        implicit val tOut = this.typOut
        this.produceFunction()
      }

    }

    override def getInitializer(): Rep[Unit] = unitToRepUnit( () )
  }

}
