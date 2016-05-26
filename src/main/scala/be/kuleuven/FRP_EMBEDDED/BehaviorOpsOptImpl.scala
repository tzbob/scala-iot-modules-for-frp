package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExpExt

import scala.collection.immutable.HashSet

trait BehaviorOpsOptImpl extends BehaviorOps_Impl with NodeOpsImpl with ScalaOpsPkgExpExt {
  eventImpl: EventOpsOptImpl =>

  def getOptionBehavior[X](n: Node[X]): Option[Behavior[X]] = {
    n match {
      case bn @ ConcreteConstantBehavior(_) => Some(bn)
      case bn @ ConcreteMap2Behavior(_,_) => Some(bn)
      case bn @ ConcreteFoldpBehavior(_,_,_) => Some(bn)
      case bn @ ConcreteFoldp2Behavior(_,_,_,_,_,_) => Some(bn)
      case bn @ ConcreteStartsWithBehavior(_,_) => Some(bn)
      case _ => None
    }
  }

  override def constantB[A:Typ](c: Rep[A])(implicit n: ModuleName): Behavior[A] = new ConcreteConstantBehavior[A](c)
  override def printLCD(l: List[(Behavior[Int], String, Int, Int)])(implicit n: ModuleName): Behavior[Nothing] = {
    ConcretePrintLCDBehavior(l)
  }

  case class ConcreteConstantBehavior[A](init: Rep[A])(implicit tA: Typ[A], mn: ModuleName)
    extends ConstantBehavior[A](init) with BehaviorOptImpl[A] {

    lazy val value = vardeclmod_new[A](mn.str)
    override def getValue = value
    lazy val valueInit = var_assign[A](value, init)
    override def getInitializer() = valueInit

    lazy val behaviorfun = {
      namedfun1 (mn.str) { (f: Rep[Ptr[Boolean]]) =>
        ptr_assignToVal(f, true)
        unitToRepUnit( () )
      }
    }

    override def generateNode() = {
      value
    }

    override def produceFunction() = behaviorfun
    override def useFunction() = {
      allocLocalBehVar()
      val fired: Var[Boolean] = getSymMap.getOrElse(id, null)._2
      behaviorfun(ptr_new(fired))
    }

  }

  case class ConcreteMap2Behavior[A:Typ,B:Typ,C](parents: (Behavior[A],Behavior[B]), fun: (Rep[A],Rep[B])=>Rep[C])(implicit tC: Typ[C], mn: ModuleName)
    extends Map2Behavior[A,B,C](parents, fun) with BehaviorOptImpl[C]{

    lazy val parentleftvalue: Var[A] = parentLeft.getValue
    lazy val parentrightvalue: Var[B] = parentRight.getValue
    lazy val value = vardeclmod_new[C](mn.str)
    override def getValue = value
    lazy val valueInit = var_assign[C](value, fun(parentleftvalue, parentrightvalue))
    override def getInitializer() = valueInit
    lazy val behaviorfun = {
      namedfun3 (mn.str) { (lf: Rep[Boolean], rf: Rep[Boolean], f: Rep[Ptr[Boolean]]) =>
        if(lf || rf) {
          ptr_assignToVal(f, true)
          var_assign[C](value, fun(parentleftvalue, parentrightvalue))
        }
        else {
          ptr_assignToVal(f, false)
        }
        unitToRepUnit( () )
      }
    }
    override def produceFunction() = behaviorfun
    override def useFunction() = {
      allocLocalBehVar()
      val parentleftfired: Var[Boolean] = getSymMap.getOrElse(parentLeft.id, (0,var_new[Boolean](false)))._2
      val parentrightfired: Var[Boolean] = getSymMap.getOrElse(parentRight.id, (0,var_new[Boolean](false)))._2
      val fired: Var[Boolean] = getSymMap.getOrElse(id, null)._2
      behaviorfun(parentleftfired, parentrightfired, ptr_new(fired) )
    }
    override def generateNode() = {
      value
      behaviorfun
    }

  }

  case class ConcreteFoldpBehavior[A,B](parent: Event[A], fun: (Rep[A],Rep[B])=>Rep[B], init: Rep[B])(implicit tA: Typ[A], tB: Typ[B], mn: ModuleName)
    extends FoldpBehavior[A,B](parent,fun,init) with BehaviorOptImpl[B] {

    lazy val value = vardeclmod_new[B](mn.str)
    override def getValue = value
    lazy val valueInit = var_assign[B](value, init)
    override def getInitializer() = valueInit

    lazy val behaviorfun = {
      namedfun3 (mn.str) { (pv: Rep[A], pf: Rep[Boolean], f: Rep[Ptr[Boolean]]) =>
        if(pf) {
          ptr_assignToVal(f, true)
          var_assign[B](value, fun(pv,readVar(value)))
        }
        else {
          ptr_assignToVal(f, false)
        }
        unitToRepUnit( () )
      }
    }

    override def produceFunction() = behaviorfun
    override def useFunction() = {
      allocLocalBehVar()
      val parentvalue = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired = getSymMap.getOrElse(parent.id, null)._2
      val fired: Var[Boolean] = getSymMap.getOrElse(id, null)._2
      behaviorfun(parentvalue, parentfired, ptr_new(fired))
    }
    override def generateNode() = {
      value
      behaviorfun
    }

  }

  case class ConcreteFoldp2Behavior[A,B,C]
  (parentLeft: Event[A], parentRight: Event[B],
   f1:((Rep[A],Rep[C]) => Rep[C]),f2:((Rep[B],Rep[C]) => Rep[C]), f3:((Rep[A],Rep[B],Rep[C]) => Rep[C]),
   init: Rep[C]
  )(implicit tA: Typ[A], tB: Typ[B], tC: Typ[C], mn: ModuleName)
    extends Foldp2Behavior[A,B,C](parentLeft,parentRight, f1,f2,f3, init) with BehaviorOptImpl[C] {

    lazy val value = vardeclmod_new[C](mn.str)
    override def getValue = value
    lazy val valueInit = var_assign[C](value, init)
    override def getInitializer() = valueInit
    lazy val behaviorfun = {
      namedfun5 (mn.str) { (plv: Rep[A], plf: Rep[Boolean], prv: Rep[B], prf: Rep[Boolean], f: Rep[Ptr[Boolean]]) =>
        if(plf && prf) {
          ptr_assignToVal(f, true)
          var_assign[C](value, f3(plv, prv, readVar(value)))
        }
        else if(plf) {
          ptr_assignToVal(f, true)
          var_assign[C](value, f1(plv, readVar(value)))
        }
        else if(prf){
          ptr_assignToVal(f, true)
          var_assign[C](value, f2(prv, readVar(value)))
        }
        else{
          ptr_assignToVal(f, false)
        }
        unitToRepUnit( () )
      }
    }
    override def produceFunction() = behaviorfun
    override def useFunction() = {
      allocLocalBehVar()
      val parentleftvalue = getSymMap.getOrElse(parentLeft.id, (parentLeft.createValue,0))._1.asInstanceOf[Var[A]]
      val parentleftfired = getSymMap.getOrElse(parentLeft.id, (0,var_new[Boolean](false)))._2
      val parentrightvalue = getSymMap.getOrElse(parentRight.id, (parentRight.createValue,0))._1.asInstanceOf[Var[B]]
      val parentrightfired = getSymMap.getOrElse(parentRight.id, (0,var_new[Boolean](false)))._2
      val fired: Var[Boolean] = getSymMap.getOrElse(id, null)._2
      behaviorfun(parentleftvalue, parentleftfired, parentrightvalue, parentrightfired, ptr_new(fired))
    }
    override def generateNode() = {
      value
      behaviorfun
    }

  }

  case class ConcreteStartsWithBehavior[A](parent: Event[A], init: Rep[A])(implicit tA: Typ[A], mn: ModuleName)
    extends StartsWithBehavior[A](parent,init) with BehaviorOptImpl[A] {

    lazy val value = vardeclmod_new[A](mn.str)
    override def getValue = value
    lazy val valueInit = var_assign[A](value, init)
    override def getInitializer() = valueInit
    lazy val behaviorfun = {
      namedfun3 (mn.str) { (pv: Rep[A], pf: Rep[Boolean], f: Rep[Ptr[Boolean]]) =>
        if(pf) {
          ptr_assignToVal(f, true)
          var_assign[A](value, pv)
        }
        unitToRepUnit( () )
      }
    }

    override def produceFunction() = behaviorfun
    override def useFunction() = {
      allocLocalBehVar()
      val parentvalue = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired = getSymMap.getOrElse(parent.id, null)._2
      val fired: Var[Boolean] = getSymMap.getOrElse(id, null)._2
      behaviorfun(parentvalue, parentfired, ptr_new(fired))
    }
    override def generateNode() = {
      value
      behaviorfun
      unitToRepUnit( () )
    }

  }

  case class ConcretePrintLCDBehavior(l: List[(Behavior[Int], String, Int, Int)])(implicit mn: ModuleName)
    extends PrintLCDBehavior(l) with BehaviorOptImpl[Nothing] {

    override def getValue = throw new UnsupportedOperationException("No value.")
    override def getInitializer() = useFunction()

    override def produceFunction() = behaviorfun
    override def useFunction() = behaviorfun( () )
    override def generateNode(): Unit = {
      behaviorfun
    }
  }

  trait BehaviorOptImpl[A] extends Behavior[A] with NodeImpl[A] {

    override def snapshot[B:Typ](e: Event[B])(implicit n: ModuleName): Event[A] = {
      implicit val tOut = typOut
      ConcreteSnapshotEvent(this, e)
    }
    override def changes()(implicit n: ModuleName): Event[A] = ConcreteChangesEvent(this)(typOut,n)
    override def map2[B:Typ, C:Typ](b: Behavior[B], f: (Rep[A], Rep[B]) => Rep[C])(implicit n: ModuleName): Behavior[C] = {
      implicit val tOut: Typ[A] = typOut
      ConcreteMap2Behavior((this, b), f)
    }

    // INTERNALS
    addNodeToNodemap(id,this)
    addBehaviorID(id)

    def createFired = var_new[Boolean](false)

    def allocLocalBehVar(): Unit = {
      val f = createFired
      addSymToSymMap(id, null, f)
    }

    override val childNodeIDs = scala.collection.mutable.HashSet[NodeID]()
    override def addChild(id: NodeID): Unit = {
      childNodeIDs.add(id)
    }
  }
}
