package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExpExt

trait EventOpsOptImpl extends EventOps_Impl with NodeOpsImpl with ScalaOpsPkgExpExt {
  behaviorImpl: BehaviorOpsOptImpl =>

  implicit def eventToEventImpl[X](e: Event[X]): EventOptImpl[X] = {
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

  case class ConcreteOutputEvent[A:Typ](name: String, p: Event[A])(implicit mn: ModuleName) extends AOutputEvent[A](name, p) {

    lazy val eventfun = {
      namedfun2 (mn.str) { (pv: Rep[A], pf: Rep[Boolean]) =>
        if(pf){
          doApplyOut(name, outfun, pv)
        }
        unitToRepUnit( () )
      }

    }

    override def useOutput(): Unit = {
      val parentvalue = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired = getSymMap.getOrElse(parent.id, null)._2
      eventfun(readVar(parentvalue), readVar(parentfired))
    }

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

  override def AInputEvent( )(implicit n: ModuleName) = ConcreteInputEvent[Int]( )  // only conceptual

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

  case class ConcreteInputEvent[A]()(implicit tA:Typ[A], mn: ModuleName)
    extends InputEvent[A] with EventOptImpl[A] {

    override val impl = new ImplWrapper
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

    override def produceFunction() =
      throw new IllegalStateException("Input node should not be used anymore for eventfun. Handled in top level function")

    override def useFunction() = {
      throw new IllegalStateException("UseNode should not be used in Input")
    }

    override def produceInput(): Unit = eventfun
    override def useInput(data: Rep[Ptr[Byte]], len: Rep[Int]): Unit = {
      allocLocalEventVars()
      val value: Var[A] = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[A]]
      val fired: Var[Boolean] = getSymMap.getOrElse(id, null)._2
      eventfun(data, len, ptr_new(value), ptr_new(fired))
    }
  }

  case class ConcreteConstantEvent[A,B](parent: Event[A], c : Rep[B])(implicit tB:Typ[B], mn: ModuleName)
    extends ConstantEvent[A,B](parent,c) with EventOptImpl[B] {

    override val impl = new ImplWrapper
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

    override def produceFunction() = eventfun
    override def useFunction() = {
      allocLocalEventVars()
      val parentvalue: Var[A] = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired: Var[Boolean] = getSymMap.getOrElse(parent.id, null)._2
      val value = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[B]]
      val fired = getSymMap.getOrElse(id, null)._2
      eventfun(parentvalue, parentfired, ptr_new(value), ptr_new(fired))
    }
  }

  case class ConcreteMapEvent[A,B](parent: Event[A], f: Rep[A] => Rep[B])(implicit tB:Typ[B], mn: ModuleName)
    extends MapEvent[A,B](parent,f) with EventOptImpl[B] {

    override val impl = new ImplWrapper
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

    override def produceFunction() = eventfun
    override def useFunction() = {
      allocLocalEventVars()
      val parentvalue: Var[A] = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired: Var[Boolean] = getSymMap.getOrElse(parent.id, null)._2
      val value = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[B]]
      val fired = getSymMap.getOrElse(id, null)._2
      eventfun(parentvalue, parentfired, ptr_new(value), ptr_new(fired))
    }
  }

  case class ConcreteFilterEvent[A](parent: Event[A], f: Rep[A] => Rep[Boolean])(implicit tA: Typ[A], mn: ModuleName)
    extends FilterEvent[A](parent,f) with EventOptImpl[A] {

    override val impl = new ImplWrapper
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

    override def produceFunction() = eventfun
    override def useFunction() = {
      allocLocalEventVars()
      val parentvalue: Var[A] = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired: Var[Boolean] = getSymMap.getOrElse(parent.id, null)._2
      val value = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[A]]
      val fired = getSymMap.getOrElse(id, null)._2
      eventfun(parentvalue, parentfired, ptr_new(value), ptr_new(fired))
    }
  }

  case class ConcreteMergeEvent[A](parents: (Event[A],Event[A]), f: (Rep[A],Rep[A])=>Rep[A] )(implicit tA:Typ[A], mn: ModuleName)
    extends MergeEvent[A](parents,f) with EventOptImpl[A] {

    override val impl = new ImplWrapper
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

    override def produceFunction() = eventfun
    override def useFunction() = {
      allocLocalEventVars()
      val parentleftvalue: Var[A] = getSymMap.getOrElse(parentLeft.id, (parentLeft.createValue,0))._1.asInstanceOf[Var[A]]
      val parentleftfired: Var[Boolean] = getSymMap.getOrElse(parentLeft.id, (0,var_new[Boolean](false)))._2
      val parentrightvalue: Var[A] = getSymMap.getOrElse(parentRight.id, (parentRight.createValue,0))._1.asInstanceOf[Var[A]]
      val parentrightfired: Var[Boolean] = getSymMap.getOrElse(parentRight.id, (0,var_new[Boolean](false)))._2
      val value = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[A]]
      val fired = getSymMap.getOrElse(id, null)._2
      eventfun(parentleftvalue, parentleftfired, parentrightvalue, parentrightfired, ptr_new(value), ptr_new(fired))
    }
  }

  case class ConcreteChangesEvent[A](parent: Behavior[A])(implicit tA: Typ[A], mn: ModuleName)
    extends ChangesEvent[A](parent) with EventOptImpl[A] {

    override val impl = new ImplWrapper
    lazy val parentvalue: Rep[In] = readVar(parent.getValue)
    lazy val eventfun = {
      namedfun3 (mn.str) { (pf: Rep[Boolean], v: Rep[Ptr[A]], f: Rep[Ptr[Boolean]]) =>
        if(pf){
          ptr_assignToVal(f, true)
        }
        else {
          ptr_assignToVal(f, false)
        }
        ptr_assignToVal(v, parentvalue)
      }
    }

    override def produceFunction() = eventfun
    override def useFunction() = {
      allocLocalEventVars()
      val parentFired: Var[Boolean] = getSymMap.getOrElse(parent.id, null)._2
      val value: Var[A] = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[A]]
      val fired: Var[Boolean] = getSymMap.getOrElse(id, null)._2
      eventfun(parentFired, ptr_new(value), ptr_new(fired))
    }

  }

  case class ConcreteSnapshotEvent[A:Typ,B:Typ](parentBeh: Behavior[A], parentEvent: Event[B])(implicit mn: ModuleName)
    extends SnapshotEvent[A,B](parentBeh, parentEvent) with EventOptImpl[A] {

    override val impl = new ImplWrapper
    lazy val parentvalue: Rep[Out] = readVar(parentBeh.getValue)
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

    override def produceFunction() = eventfun
    override def useFunction() = {
      allocLocalEventVars()
      val parentEventFired: Var[Boolean] = getSymMap.getOrElse(parentEvent.id, null)._2
      val value: Var[A] = getSymMap.getOrElse(id, null)._1.asInstanceOf[Var[A]]
      val fired: Var[Boolean] = getSymMap.getOrElse(id, null)._2
      eventfun(parentEventFired, ptr_new(value), ptr_new(fired))
    }
  }

  trait EventOptImpl[A] extends Event[A] with NodeImpl[A] {

    protected case class ImplWrapper(implicit val typA: Typ[A])
    protected val impl: ImplWrapper
    import impl.typA

    override def constant[B:Typ](c: Rep[B])(implicit n: ModuleName): Event[B] = ConcreteConstantEvent[A,B](this, c)
    override def map[B:Typ](f: Rep[A] => Rep[B])(implicit n: ModuleName): Event[B] = ConcreteMapEvent[A,B](this, f)
    override def filter(f: Rep[A] => Rep[Boolean])(implicit n: ModuleName): Event[A] = ConcreteFilterEvent[A](this, f)(typOut,n)
    override def merge(e: Event[A], f: (Rep[A],Rep[A])=>Rep[A])(implicit n: ModuleName) = ConcreteMergeEvent[A]( (this, e), f)(typOut, n)

    override def startsWith(i: Rep[A])(implicit n: ModuleName): Behavior[A] = ConcreteStartsWithBehavior(this, i)(typOut,n)
    override def foldp[B](f: (Rep[A], Rep[B]) => Rep[B], init: Rep[B])(implicit tB: Typ[B],n: ModuleName): Behavior[B] = {
      implicit val tOut = typOut
      ConcreteFoldpBehavior[A,B](this, f, init)(typOut, tB, n)
    }
    override def foldp2[B,C]
    (e: Event[B])
    (
     f1:((Rep[A],Rep[C]) => Rep[C]),f2:((Rep[B],Rep[C]) => Rep[C]), f3:((Rep[A],Rep[B],Rep[C]) => Rep[C]),
     init: Rep[C]
    )(implicit tB: Typ[B], tC: Typ[C], n: ModuleName): Behavior[C] = {

      implicit val tOut = typOut
      ConcreteFoldp2Behavior[A,B,C](this, e, f1,f2,f3, init)(typOut, tB, tC, n)

    }

    addNodeToNodemap(id,this)
    override val childNodeIDs = scala.collection.mutable.HashSet[NodeID]()
    override def addChild(id: NodeID): Unit = {
      childNodeIDs.add(id)
    }

    override def generateNode() = {
      if (isInputEvent(this)) {
        getInputEvent(this) match {
          case Some(i) => i.produceInput()
          case None => throw new Exception("Not cool. You should check using isInputEvent!")
        }
      }
      else {
        implicit val tOut = this.typOut
        this.produceFunction()
      }
    }

    def createValue = vardecl_new[A]
    def createFired = var_new[Boolean](false)

    def allocLocalEventVars(): Unit = {
      val f = createFired
      val v = createValue
      addSymToSymMap(id, v, f)
    }

    override def getInitializer(): Rep[Unit] = unitToRepUnit( () )

  }
}
