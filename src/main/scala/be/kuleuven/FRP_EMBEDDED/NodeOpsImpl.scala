package be.kuleuven.FRP_EMBEDDED

trait NodeOpsImpl extends NodeOps {

  private val nodeMap: scala.collection.mutable.Map[NodeID,Node[_]] = scala.collection.mutable.HashMap()
  private val behaviorIDs: scala.collection.mutable.Set[NodeID] = scala.collection.mutable.HashSet()
  private val symMap: scala.collection.mutable.Map[NodeID,(Var[_],Var[Boolean])] = scala.collection.mutable.HashMap()

  override def printSymbolMap(nodeID: NodeID): Unit = {
    System.err.println("ID's in symMap for " + nodeID + ":")
    for ( (id,v) <- getSymMap) {
      System.err.println(id)
    }
  }

  override def addSymToSymMap(id: NodeID, v: Var[_], f: Var[Boolean]) { symMap += ((id, (v, f) )) }
  override def resetSymMap(): Unit = symMap.clear
  override def getSymMap: Map[NodeID,(Var[_],Var[Boolean])] = symMap.toMap

  override def addNodeToNodemap(id: NodeID, node: Node[_]): Unit = { nodeMap += ((id, node)) }
  override def getNodeMap: Map[NodeID,Node[_]] = nodeMap.toMap

  override def addBehaviorID(id: NodeID): Unit = { behaviorIDs += id }
  override def getBehaviorIDs: Set[NodeID] = behaviorIDs.toSet

  override def getOutputNodes: Map[NodeID,Node[_]] =
    getNodeMap.filter{
        case (_, n) => if(n.childNodeIDs.isEmpty) true else false
        case _ => throw new IllegalStateException("Unsupported Node type")
    }

  override def getMaxLevel: Int = {
    var maxlevel: Int = 0
    getNodeMap.foreach{
        case (_, e) => maxlevel = scala.math.max(maxlevel, e.level)
        case _ => throw new IllegalStateException("Unsupported Node type")
    }
    maxlevel
  }

  override def getNodesOnLevel(nodes: List[Node[_]], level: Int): List[Node[_]] =
    nodes.filter{ case node => if(node.level == level) true else false }

  override def getDecendantNodeIDs(node: Node[_]): List[NodeID] = {
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

  override def getNodesWithIDs(ids: List[NodeID]): Map[NodeID, Node[_]] =
    getNodeMap.filter{ case (id, e) => ids.contains(id) }


  trait NodeImpl[A] extends Node[A] {

    override def toString: String = {
      "Node with id: " + this.id
    }
  }

}
