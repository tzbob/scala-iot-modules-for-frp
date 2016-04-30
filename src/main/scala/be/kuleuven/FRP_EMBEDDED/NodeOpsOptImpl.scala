package be.kuleuven.FRP_EMBEDDED

trait NodeOpsOptImpl extends NodeOps {

  private val nodeMap: scala.collection.mutable.Map[NodeID,NodeOptImpl[_]] = scala.collection.mutable.HashMap()
  private val behaviorIDs: scala.collection.mutable.Set[NodeID] = scala.collection.mutable.HashSet()
  private val symMap: scala.collection.mutable.Map[NodeID,(Var[_],Var[Boolean])] = scala.collection.mutable.HashMap()

  def addSymToSymMap(id: NodeID, v: Var[_], f: Var[Boolean]) {
    symMap += ((id, (v, f) ))
  }

  def resetSymMap(): Unit = {
    symMap.clear
  }

  def getSymMap(): Map[NodeID,(Var[_],Var[Boolean])] = {
    symMap.toMap
  }

  def addNodeToNodemap(id: NodeID, node: NodeOptImpl[_]): Unit = {
    nodeMap += ((id, node))
  }

  def getNodeMap: Map[NodeID,NodeOptImpl[_]] = {
    nodeMap.toMap
  }

  def addBehaviorID(id: NodeID): Unit = { behaviorIDs += id }
  def getBehaviorIDs(): Set[NodeID] = behaviorIDs.toSet

  def getOutputNodes: Map[NodeID,NodeOptImpl[_]] = {
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

  def getNodesOnLevel(nodes: List[NodeOptImpl[_]], level: Int): List[NodeOptImpl[_]] = {
    nodes.filter(
      x => x match {
        case node => if(node.level == level) true else false
      }
    )
  }

  def getDecendantNodeIDs(node: NodeOptImpl[_]): List[NodeID] = {
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

  def getNodesWithIDs(ids: List[NodeID]): Map[NodeID, NodeOptImpl[_]] = {
    getNodeMap.filter( x => x match {
      case (id, e) => ids.contains(id)
    })
  }

  trait NodeOptImpl[A] extends Node[A] {
    def generateNode(): Unit
    def produceFunction(): Unit
    def useNode(): Unit
    def getInitializer(): Rep[Unit]

    override def toString: String = {
      "Node with id: " + this.id
    }
  }
}
