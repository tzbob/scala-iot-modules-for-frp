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

  case class ConcreteConstantBehavior[A](init: Rep[A])(implicit tA: Typ[A], mn: ModuleName)
    extends ConstantBehavior[A](init) with BehaviorOptImpl[A] {

    lazy val value = vardeclmod_new[A](mn.str)
    override def getValue = value
    lazy val valueInit = var_assign[A](value, init)
    override def getInitializer() = valueInit
    override def generateNode() = {
      value
    }

    override def produceFunction() =
      throw new IllegalStateException("Not defined on ConstantBehavior") //TODO: implement
    override def useFunction() = {
      throw new IllegalStateException("Not defined on ConstantBehavior") //TODO: implement
    }

  }

  case class ConcreteMap2Behavior[A:Typ,B:Typ,C](parents: (Behavior[A],Behavior[B]), f: (Rep[A],Rep[B])=>Rep[C])(implicit tC: Typ[C], mn: ModuleName)
    extends Map2Behavior[A,B,C](parents, f) with BehaviorOptImpl[C]{

    lazy val parentleftvalue: Var[A] = parentLeft.getValue
    lazy val parentrightvalue: Var[B] = parentRight.getValue
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
    override def produceFunction() = behaviorfun
    override def useFunction() = behaviorfun( () )
    override def generateNode() = {
      value
      behaviorfun
    }

  }

  case class ConcreteFoldpBehavior[A,B](parent: Event[A], f: (Rep[A],Rep[B])=>Rep[B], init: Rep[B])(implicit tA: Typ[A], tB: Typ[B], mn: ModuleName)
    extends FoldpBehavior[A,B](parent,f,init) with BehaviorOptImpl[B] {

    lazy val value = vardeclmod_new[B](mn.str)
    override def getValue = value
    lazy val valueInit = var_assign[B](value, init)
    override def getInitializer() = valueInit

    lazy val behaviorfun = {
      namedfun2 (mn.str) { (pv: Rep[A], pf: Rep[Boolean]) =>
        if(pf) {
          var_assign[B](value, f(pv,readVar(value)))
        }
        unitToRepUnit( () )
      }
    }

    override def produceFunction() = behaviorfun
    override def useFunction() = {
      val parentvalue = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired = getSymMap.getOrElse(parent.id, null)._2
      behaviorfun(parentvalue, parentfired)
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
      namedfun4 (mn.str) { (plv: Rep[A], plf: Rep[Boolean], prv: Rep[B], prf: Rep[Boolean]) =>
        if(plf && prf) {
          var_assign[C](value, f3(plv, prv, readVar(value)))
        }
        else if(plf) {
          var_assign[C](value, f1(plv, readVar(value)))
        }
        else if(prf){
          var_assign[C](value, f2(prv, readVar(value)))
        }
        else{
          // nothing to do
        }
        unitToRepUnit( () )
      }
    }
    override def produceFunction() = behaviorfun
    override def useFunction() = {
      val parentleftvalue = getSymMap.getOrElse(parentLeft.id, (parentLeft.createValue,0))._1.asInstanceOf[Var[A]]
      val parentleftfired = getSymMap.getOrElse(parentLeft.id, (0,var_new[Boolean](false)))._2
      val parentrightvalue = getSymMap.getOrElse(parentRight.id, (parentRight.createValue,0))._1.asInstanceOf[Var[B]]
      val parentrightfired = getSymMap.getOrElse(parentRight.id, (0,var_new[Boolean](false)))._2
      behaviorfun(parentleftvalue, parentleftfired, parentrightvalue, parentrightfired)
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
      namedfun2 (mn.str) { (pv: Rep[A], pf: Rep[Boolean]) =>
        if(pf) {
          var_assign[A](value, pv)
        }
        unitToRepUnit( () )
      }
    }

    override def produceFunction() = behaviorfun
    override def useFunction() = {
      val parentvalue = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired = getSymMap.getOrElse(parent.id, null)._2
      behaviorfun(parentvalue, parentfired)
    }
    override def generateNode() = {
      value
      behaviorfun
      unitToRepUnit( () )
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
    override def genSnapshot[B](e: Event[(A) => B])(implicit n: ModuleName): Event[B] = ???

    // INTERNALS
    addNodeToNodemap(id,this)
    addBehaviorID(id)

    override val childNodeIDs = scala.collection.mutable.HashSet[NodeID]()
    override def addChild(id: NodeID): Unit = {
      childNodeIDs.add(id)
    }
  }
}
