package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExpExt

import scala.collection.immutable.HashSet

trait BehaviorOps extends NodeOps {
  event: EventOps =>

  trait Behavior[A] extends Node[A] {
    private[FRP_EMBEDDED] val typOut: Typ[A]
    private[FRP_EMBEDDED] def getValue: Var[A]
    private[FRP_EMBEDDED] def getInitializer(): Rep[Unit]
    private[FRP_EMBEDDED] override type Out = A

    // map2: Combine 2 behaviors (merge-like). Whenever a behaviors value changes, the output behavior applies
    // the function f to both child behaviors, changing its value to the result of that function
    def map2[B:Typ,C:Typ] (b: Behavior[B], f: (Rep[A], Rep[B])=>Rep[C])(implicit n: ModuleName): Behavior[C]
    //def map3
    //def map4
    //...

    // Snapshot: Output event fires an event containing the current value of behavior,
    // each time input e fires an event
    def snapshot[B:Typ] (e: Event[B])(implicit n: ModuleName): Event[A]

    // changes: create an event stream that fires an event each time the value of the behavior changes,
    // carrying the new value
    def changes ()(implicit n: ModuleName): Event[A]
  }

  def constantB[A:Typ](value: Rep[A])(implicit n: ModuleName): Behavior[A]
  private[FRP_EMBEDDED] def printLCD(l: List[(Behavior[Int], String, Int, Int)])(implicit n: ModuleName): Behavior[Nothing]
}

trait BehaviorOps_Impl extends BehaviorOps with ScalaOpsPkgExpExt {
  event: EventOps =>

  def getBehaviorNodes: Map[NodeID,Node[_]] =
    getNodeMap.filter{ case (id, _) => getBehaviorIDs.contains(id) }


  abstract class ConstantBehavior[A](init: Rep[A])(implicit val tA: Typ[A], mn: ModuleName) extends Behavior[A] {

    override val moduleName = mn
    override val typOut = tA
    val level = 0
    override val inputNodeIDs: Set[NodeID] = HashSet(this.id)

    override def buildGraphTopDown() =
      // nothing to do, no parents

    System.err.println("Create ConstantBehavior(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class Map2Behavior[A:Typ,B:Typ,C]
    (parents: (Behavior[A],Behavior[B]), f: (Rep[A],Rep[B])=>Rep[C])(implicit val tC: Typ[C], mn: ModuleName)
    extends Behavior[C] {

    override val moduleName = mn
    override val typOut = tC
    val parentLeft: Behavior[A] = parents._1
    val parentRight: Behavior[B] = parents._2
    val level = scala.math.max(parentLeft.level, parentRight.level) + 1

    override val inputNodeIDs: Set[NodeID] = parentLeft.inputNodeIDs ++ parentRight.inputNodeIDs

    override def buildGraphTopDown() = {
      parentLeft.addChild(id)
      parentLeft.buildGraphTopDown()
      parentRight.addChild(id)
      parentRight.buildGraphTopDown()
    }

    System.err.println("Create Map2Behavior(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class FoldpBehavior[A,B]
    (parent: Event[A], f: (Rep[A],Rep[B])=>Rep[B], init: Rep[B])(implicit val tA: Typ[A], val tB: Typ[B], mn: ModuleName)
    extends Behavior[B] {

    override val moduleName = mn
    override val typOut = tB
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    System.err.println("Create FoldpBehavior(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class Foldp2Behavior[A,B,C]
  (parentLeft: Event[A], parentRight: Event[B],
    f1:((Rep[A],Rep[C]) => Rep[C]),f2:((Rep[B],Rep[C]) => Rep[C]), f3:((Rep[A],Rep[B],Rep[C]) => Rep[C]),
    init: Rep[C]
    )(implicit val tA: Typ[A], val tB: Typ[B], val tC: Typ[C], mn: ModuleName) extends Behavior[C] {

    override val moduleName = mn
    override val typOut = tC
    override val level = scala.math.max(parentLeft.level, parentRight.level) + 1
    override val inputNodeIDs: Set[NodeID] = parentLeft.inputNodeIDs ++ parentRight.inputNodeIDs

    override def buildGraphTopDown() = {
      parentLeft.addChild(id)
      parentLeft.buildGraphTopDown()
      parentRight.addChild(id)
      parentRight.buildGraphTopDown()
    }

    System.err.println("Create Foldp2Behavior(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class StartsWithBehavior[A](parent: Event[A], init: Rep[A])(implicit val tA: Typ[A], mn: ModuleName) extends Behavior[A] {

    override val moduleName = mn
    override val typOut = tA
    override val level = parent.level + 1
    override val inputNodeIDs: Set[NodeID] = parent.inputNodeIDs

    override def buildGraphTopDown() = {
      parent.addChild(id)
      parent.buildGraphTopDown()
    }

    System.err.println("Create StartsWithBehavior(ID:" + id + "): " + inputNodeIDs)
  }

  abstract class PrintLCDBehavior( list: List[(Behavior[Int], String, Int, Int)] )(implicit mn: ModuleName) extends Behavior[Nothing] {
    override val moduleName = mn
    override val typOut: Typ[Out] = null

    val parents = for (p <- list) yield { p._1 }
    val parentlevels = for ( p <- parents) yield { p.level }
    override val level = parentlevels.max + 1

    def getParentInputnodes(): Set[NodeID] = {
      val setB = scala.collection.mutable.ListBuffer.empty[NodeID]
      for (i <- parents) {
        for( nodeid <- i.inputNodeIDs) setB += nodeid
      }
      setB.toSet
    }

    override val inputNodeIDs: Set[NodeID] = getParentInputnodes()

    lazy val behaviorfun: Rep[(Unit)=>Unit] = {
      namedfun0 (mn.str) { () =>
        for( (b, label, row, col) <- list ) {
          val parentvalue = readVar(b.getValue)
          printToLCD(parentvalue, label, row, col)
        }
        unitToRepUnit( () )
      }
    }

    override def buildGraphTopDown() = {
      for( (b,_,_,_) <- list ) {
        b.addChild(id)
        b.buildGraphTopDown()
      }
    }

    System.err.println("Create printLCDBehavior(ID:" + id + "): " + inputNodeIDs)
  }
}
