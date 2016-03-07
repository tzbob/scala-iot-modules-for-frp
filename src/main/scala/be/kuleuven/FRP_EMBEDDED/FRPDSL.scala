package be.kuleuven.FRP_EMBEDDED

import scala.lms.common._
import java.lang.{Integer => JInteger}

trait FRPDSL
    extends ScalaOpsPkgExt with TupledFunctionsExt with UncheckedOps with LiftPrimitives with LiftString with LiftVariables with LiftBoolean
    with EventOps with BehaviorOps {

  def printEvent[A](e: Event[A]): String

  def generator[A](e: Event[A]*): () => Rep[Unit]
  def generator[A](b: Behavior[A]): Unit
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

  def isDisjointFor(target: EventID, left: Set[EventID], right: Set[EventID]): Boolean = {
    var b: Boolean = true
    for(l <- left if l==target) {
      if(right.contains(l)) b = false
    }
    b
  }

  def getSplitNode(left: List[EventID], right: List[EventID]): EventID = {
    for(l <- left) {
      if(right.contains(l)) return l
    }
    throw new IllegalStateException("Getting index of splitting node failed.")
  }

  def hasDirectPath(e: Event[_], splitID: EventID): Boolean = {
    if(e.id == splitID) true
    else {
      e match {
        case en @ FilterEvent(_,_) => false
        case en @ ConstantEvent(_,_) => hasDirectPath(en.parent, splitID)
        case en @ MapEvent(_,_) => hasDirectPath(en.parent, splitID)
        case en @ MergeEvent(_,_) =>
          val l = if(en.leftAncestors.contains(splitID)){
            hasDirectPath(en.parentLeft, splitID)
          } else { false }
          val r = if(en.rightAncestors.contains(splitID)){
            hasDirectPath(en.parentRight, splitID)
          } else { false }
          (l || r)

        case en @ InputEvent(_) =>
          throw new IllegalStateException("Searching for filter failed because of Input Event type")
        case _ =>
          throw new IllegalStateException("Searching for filter failed because of Unknown Event type")
      }
    }
  }

  override def generator[X](b: Behavior[X]): Unit = {

  }

  def buildGraphTopDown[X](e: Event[X]): Unit = {
    e match {
      case en @ MergeEvent(_,_) =>
        en.parentLeft.addChild(e.id)
        buildGraphTopDown(en.parentLeft)
        en.parentRight.addChild(e.id)
        buildGraphTopDown(en.parentRight)
      case en @ ConstantEvent(_,_) =>
        en.parent.addChild(e.id)
        buildGraphTopDown(en.parent)
      case en @ FilterEvent(_,_) =>
        en.parent.addChild(e.id)
        buildGraphTopDown(en.parent)
      case en @ MapEvent(_,_) =>
        en.parent.addChild(e.id)
        buildGraphTopDown(en.parent)
      case en @ InputEvent(_) =>
        // no parents
      case _ => throw new IllegalStateException("Unsupported Event type")

    }
  }

  def generateEventNode[X](e: Event[X], f: () => Rep[Unit]): () => Rep[Unit] = {
    () => {
      f()
      getEventFired(e)
      getEventValue(e)
      implicit val tOut = e.typOut
      getEventFunction(e)
      unitToRepUnit( () )
    }
  }

  override def generator[X](es: Event[X]*): () => Rep[Unit] = {
    var program: () => Rep[Unit] = () => unitToRepUnit( () )

    for(e <- es) {
      buildGraphTopDown(e)
    }

    // generate per level
    System.err.println("max level :"+ getMaxLevel)
    for( i <- 0 to getMaxLevel){
      val nodes = getNodesOnLevel(getNodeMap, i)
      nodes.foreach { case (_,x) => program = generateEventNode(x, program) }
    }

    //get all input events
    val inputMap = getInputNodes

    // generate top functions
    for( (i,j) <- inputMap) {
      System.err.println("Generate dependencies of inputnode " + i)
      program = generateTopFunction(j, program)
    }
    program
  }

  def getDecendantNodeIDs(node: Event[_]): List[EventID] = {
    val listbuilder = scala.collection.mutable.ListBuffer.empty[EventID]

    listbuilder += node.id
    for(childid <- node.childEventIDs) {
      val childevent = getNodeMap.get(childid) match {
        case Some(e) => e
        case None => throw new IllegalStateException("Unknown event ID") }
      listbuilder ++= getDecendantNodeIDs(childevent)
    }
    listbuilder.toList
  }

  def getNodesWithIDs(ids: List[EventID]): Map[EventID, Event[_]] = {
    getNodeMap.filter( x => x match {
      case (id, e) => ids.contains(id)
    })
  }

  def generateTopFunction[X](e: Event[X], f: () => Rep[Unit]): () => Rep[Unit] = {
    System.err.println("top" + e.id)

    val descendantIDs = getDecendantNodeIDs(e)
    val descendantNodes = getNodesWithIDs(descendantIDs)

    // get topological ordering
    val listbuilder = scala.collection.mutable.ListBuffer.empty[Event[_]]
    for( i <- 0 to getMaxLevel)
      listbuilder ++= getNodesOnLevel(descendantNodes,i).values.toList
    val eventsTO = listbuilder.toList
    eventsTO.foreach(x => System.err.println(x.id))

    () => {
      f()
      val top = fun { () =>
        eventsTO.foreach( x => {(getEventFunction(x))( () ) } )
      }
      doApplyDecl(top)
      unitToRepUnit( () )
    }
  }

}