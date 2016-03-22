package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.{TupledFunctionsExt, ScalaOpsPkgExt}

import scala.lms.common._
import java.lang.{Integer => JInteger}

trait FRPDSL
    extends ScalaOpsPkgExt with TupledFunctionsExt with UncheckedOps with LiftPrimitives with LiftString with LiftVariables with LiftBoolean
    with EventOps with BehaviorOps {

  def printEvent[A](e: Event[A]): String

  def generator: () => Rep[Unit]
}

trait FRPDSLImpl extends FRPDSL with EventOpsImpl with BehaviorOpsImpl {

  override def printEvent[A](e: Event[A]) = {
    def printParents[B](p: Event[B]): String = {
      val x = printEvent(p)
      x.mkString(",")
    }

    e match {
      case i @ InputEvent(_) => "InputEvent@"+ JInteger.toHexString(System.identityHashCode(i))
      case c @ ConstantEvent(_,_) => "ConstantEvent@"+ JInteger.toHexString(System.identityHashCode(c)) + "(" + printParents(c.parent) + ")"
      case m @ MapEvent(_,_) => "MapEvent@" + JInteger.toHexString(System.identityHashCode(m)) + "(" + printParents(m.parent) + ")"
      case f @ FilterEvent(_,_) => "FilterEvent@" + JInteger.toHexString(System.identityHashCode(f)) + "(" + printParents(f.parent) + ")"
      case m @ MergeEvent(_,_) => "MergeEvent@" + JInteger.toHexString(System.identityHashCode(m)) +
                                      "(" + printParents(m.parentLeft) + "," + printParents(m.parentRight) + ")"
      case _ => "other"
    }
  }

  def isDisjointFor(target: NodeID, left: Set[NodeID], right: Set[NodeID]): Boolean = {
    var b: Boolean = true
    for(l <- left if l==target) {
      if(right.contains(l)) b = false
    }
    b
  }

  def getSplitNode(left: List[NodeID], right: List[NodeID]): NodeID = {
    for(l <- left) {
      if(right.contains(l)) return l
    }
    throw new IllegalStateException("Getting index of splitting node failed.")
  }

  override def generator: () => Rep[Unit] = {
    var program: () => Rep[Unit] = () => unitToRepUnit( () )

    // generate per level
    System.err.println("max level : "+ getMaxLevel)
    for( i <- 0 to getMaxLevel){
      val nodes = getNodesOnLevel(getNodeMap, i)
      nodes.foreach { case (_,x) => program = x.generateNode(program) }
    }

    //get all input events
    val inputMap = getInputEventNodes

    // generate top functions
    for( ie <- inputMap) {
      System.err.println("Generate dependencies of inputnode " + ie.id)
      program = generateTopFunction(ie, program)
    }

    //TODO: change var_new to vardecl_new
    //program = generateBehaviorInit(program)

    program
  }

  // SM_DATA can only contain declarations, so we need an initializer for all behaviors
  def generateBehaviorInit(f: () => Rep[Unit]): () => Rep[Unit] = {
    System.err.println()
    System.err.println("Generating beh init fun for behaviors:")
    getBehaviorNodes.foreach(x => x match { case (id,_) => System.err.println(id) })

    () => {
      f()
      val inits = fun { () =>
        getBehaviorNodes.values.foreach(_.getInitializer())
      }

      doApplyDecl(inits)
      unitToRepUnit( () )
    }
  }

  def generateTopFunction[X](n: InputEvent[X], f: () => Rep[Unit]): () => Rep[Unit] = {
    System.err.println("top" + n.id)

    val descendantIDs = getDecendantNodeIDs(n).filter(id => id != n.id)
    val descendantNodes = getNodesWithIDs(descendantIDs)

    // get topological ordering
    val listbuilder = scala.collection.mutable.ListBuffer.empty[NodeImpl[_]]
    for( i <- 0 to getMaxLevel)
      listbuilder ++= getNodesOnLevel(descendantNodes,i).values.toList
    val eventsTO = listbuilder.toList
    eventsTO.foreach(x => System.err.println(x.id))

    () => {
      f()
      val top = inputfun("module1") { (data: Rep[Ptr[Byte]], len: Rep[Int]) =>
        n.eventfun(data,len)
        eventsTO.foreach( x => {(x.getFunction())( () ) } ) // apply the functions in this context
      }
      doApplyDecl(top)
      unitToRepUnit( () )
    }
  }

}