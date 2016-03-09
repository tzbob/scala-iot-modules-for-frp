package be.kuleuven.FRP_EMBEDDED

import scala.lms.common.Base

trait NodeOps extends Base {

  type NodeID = Int

  trait Node[A] {

    // all private
    val id: NodeID = Node.nextid
    val level: Int // for topological order
    val inputNodeIDs: Set[NodeID]
    //val ancestorNodeIDs: List[NodeID] //TODO: remove, not needed anymore since no more split node needed
    val childNodeIDs: scala.collection.mutable.Set[NodeID]
    def addChild(id: NodeID): Unit
    def buildGraphTopDown(): Unit

  }

  object Node {
    private var id: Int = 0
    private def nextid = {id += 1;id}
  }

}

trait NodeOpsImpl extends NodeOps {
  //TODO: make private and supply getter to immutable map
  protected val nodeMap: scala.collection.mutable.Map[NodeID,NodeImpl[_]] = scala.collection.mutable.HashMap()

  def getNodeMap: Map[NodeID,NodeImpl[_]] = {
    nodeMap.toMap
  }

  def getOutputNodes: Map[NodeID,NodeImpl[_]] = {
    getNodeMap.filter(
      x => x match {
        case (_, n) => if(n.childNodeIDs.size == 0) true else false
        case _ => throw new IllegalStateException("Unsupported Node type")
      }
    )
  }

  def getMaxLevel: Int = {
    var maxlevel: Int = 0
    getNodeMap.foreach(
      x => x match {
        case (_, e) => maxlevel = scala.math.max(maxlevel, e.level)
        case _ => throw new IllegalStateException("Unsupported Node type")
      }
    )
    maxlevel
  }

  def getNodesOnLevel(nodes: Map[NodeID,NodeImpl[_]], level: Int): Map[NodeID,NodeImpl[_]] = {
    nodes.filter(
      x => x match {
        case (_, e) => if(e.level == level) true else false
        case _ => throw new IllegalStateException("Unsupported Node type")
      }
    )
  }

  def getDecendantNodeIDs(node: NodeImpl[_]): List[NodeID] = {
    val listbuilder = scala.collection.mutable.ListBuffer.empty[NodeID]

    listbuilder += node.id
    for(childid <- node.childNodeIDs) {
      val childnode = getNodeMap.get(childid) match {
        case Some(cn) => cn
        case None => throw new IllegalStateException("Unknown event ID") }
      listbuilder ++= getDecendantNodeIDs(childnode)
    }
    listbuilder.toList
  }

  def getNodesWithIDs(ids: List[NodeID]): Map[NodeID, NodeImpl[_]] = {
    getNodeMap.filter( x => x match {
      case (id, e) => ids.contains(id)
    })
  }

  trait NodeImpl[A] extends Node[A] {
    def generateNode(f: () => Rep[Unit]): () => Rep[Unit]
    def getFunction(): Rep[(Unit)=>Unit]
  }

}
