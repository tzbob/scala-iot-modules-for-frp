package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExpExt

import scala.collection.immutable.HashSet

trait BehaviorOpsOptImpl extends BehaviorOps with NodeOpsOptImpl with ScalaOpsPkgExpExt {
  eventImpl: EventOpsOptImpl =>

  def getBehaviorNodes: Map[NodeID,Node[_]] = {
    getNodeMap.filter(
      x => x match {
        case (id, _) => getBehaviorIDs().contains(id)
      }
    )
  }

  def getOptionBehavior[X](n: Node[X]): Option[Behavior[X]] = {
    n match {
      case bn @ ConstantBehavior(_) => Some(bn)
      case bn @ Map2Behavior(_,_) => Some(bn)
      case bn @ FoldpBehavior(_,_,_) => Some(bn)
      case bn @ Foldp2Behavior(_,_,_,_,_,_) => Some(bn)
      case bn @ StartsWithBehavior(_,_) => Some(bn)
      case _ => None
    }
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
    override def generateNode() = {
      value
    }
    override def produceFunction =
      throw new IllegalStateException("Not defined on ConstantBehavior") //TODO: implement
    override def useFunction = {
      throw new IllegalStateException("Not defined on ConstantBehavior") //TODO: implement
    }
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
    override def produceFunction = behaviorfun
    override def useFunction = {
      behaviorfun( () )
    }
    override def buildGraphTopDown() = {
      parentLeft.addChild(id)
      parentLeft.buildGraphTopDown()
      parentRight.addChild(id)
      parentRight.buildGraphTopDown()
    }

    override def generateNode() = {
      value
      behaviorfun
    }

    System.err.println("Create Map2Behavior(ID:" + id + "): " + inputNodeIDs)
  }

  case class FoldpBehavior[A,B](parent: Event[A], f: (Rep[A],Rep[B])=>Rep[B], init: Rep[B])(implicit val tA: Typ[A], val tB: Typ[B], mn: ModuleName) extends BehaviorNode[B] {
    override val typOut = tB
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

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
    override def produceFunction = behaviorfun
    override def useFunction = {
      val parentvalue = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired = getSymMap.getOrElse(parent.id, null)._2
      behaviorfun(parentvalue, parentfired)
    }
    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    override def generateNode() = {
      value
      behaviorfun
    }

    System.err.println("Create FoldpBehavior(ID:" + id + "): " + inputNodeIDs)
  }

  case class Foldp2Behavior[A,B,C]
  (parentLeft: Event[A], parentRight: Event[B],
   f1:((Rep[A],Rep[C]) => Rep[C]),f2:((Rep[B],Rep[C]) => Rep[C]), f3:((Rep[A],Rep[B],Rep[C]) => Rep[C]),
   init: Rep[C]
  )(implicit val tA: Typ[A], val tB: Typ[B], val tC: Typ[C], mn: ModuleName) extends BehaviorNode[C] {

    override val typOut = tC
    override val level = scala.math.max(parentLeft.level, parentRight.level) + 1
    override val inputNodeIDs: Set[NodeID] = parentLeft.inputNodeIDs ++ parentRight.inputNodeIDs

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
    override def produceFunction = behaviorfun
    override def useFunction = {
      val parentleftvalue = getSymMap.getOrElse(parentLeft.id, (parentLeft.createValue,0))._1.asInstanceOf[Var[A]]
      val parentleftfired = getSymMap.getOrElse(parentLeft.id, (0,var_new[Boolean](false)))._2
      val parentrightvalue = getSymMap.getOrElse(parentRight.id, (parentRight.createValue,0))._1.asInstanceOf[Var[B]]
      val parentrightfired = getSymMap.getOrElse(parentRight.id, (0,var_new[Boolean](false)))._2
      behaviorfun(parentleftvalue, parentleftfired, parentrightvalue, parentrightfired)
    }
    override def buildGraphTopDown() = {
      parentLeft.addChild(id)
      parentLeft.buildGraphTopDown()
      parentRight.addChild(id)
      parentRight.buildGraphTopDown()
    }

    override def generateNode() = {
      value
      behaviorfun
    }

    System.err.println("Create Foldp2Behavior(ID:" + id + "): " + inputNodeIDs)
  }

  case class StartsWithBehavior[A](parent: Event[A], init: Rep[A])(implicit val tA: Typ[A], mn: ModuleName) extends BehaviorNode[A] {
    override val typOut = tA
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

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
    override def produceFunction = behaviorfun
    override def useFunction = {
      val parentvalue = getSymMap.getOrElse(parent.id, null)._1.asInstanceOf[Var[A]]
      val parentfired = getSymMap.getOrElse(parent.id, null)._2
      behaviorfun(parentvalue, parentfired)
    }
    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    override def generateNode() = {
      value
      behaviorfun
      unitToRepUnit( () )
    }

    System.err.println("Create StartsWithBehavior(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class BehaviorNode[A](implicit mn: ModuleName) extends BehaviorOptImpl[A] with NodeOptImpl[A] {
    addNodeToNodemap(id,this)
    addBehaviorID(id)

    override val moduleName = mn

    override val childNodeIDs = scala.collection.mutable.HashSet[NodeID]()
    override def addChild(id: NodeID): Unit = {
      childNodeIDs.add(id)
    }

  }

  trait BehaviorOptImpl[A] extends Behavior[A] {

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
