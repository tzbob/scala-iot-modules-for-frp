package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExt

private[FRP_EMBEDDED] trait NodeOps extends ScalaOpsPkgExt {

  private[FRP_EMBEDDED] type NodeID = Int
  class ModuleName private[FRP_EMBEDDED] (val str: String) { // packet private constructor
    override def toString: String = str
  }

  def printSymbolMap(nodeID: NodeID): Unit
  def addSymToSymMap(id: NodeID, v: Var[_], f: Var[Boolean])
  def resetSymMap(): Unit
  def getSymMap: Map[NodeID,(Var[_],Var[Boolean])]

  def addNodeToNodemap(id: NodeID, node: Node[_]): Unit
  def getNodeMap: Map[NodeID,Node[_]]

  def addBehaviorID(id: NodeID): Unit
  def getBehaviorIDs: Set[NodeID]

  def getOutputNodes: Map[NodeID,Node[_]]
  def getMaxLevel: Int
  def getNodesOnLevel(nodes: List[Node[_]], level: Int): List[Node[_]]
  def getDecendantNodeIDs(node: Node[_]): List[NodeID]
  def getNodesWithIDs(ids: List[NodeID]): Map[NodeID, Node[_]]

  trait Node[A] {

    // all private
    //TODO: not packet private because of unit tests
    /*private[FRP_EMBEDDED]*/ val id: NodeID = Node.nextid
    /*private[FRP_EMBEDDED]*/ val level: Int // for topological order
    /*private[FRP_EMBEDDED]*/ val childNodeIDs: scala.collection.mutable.Set[NodeID]
    /*private[FRP_EMBEDDED]*/ def buildGraphTopDown(): Unit
    private[FRP_EMBEDDED] type Out

    private[FRP_EMBEDDED] val inputNodeIDs: Set[NodeID]
    private[FRP_EMBEDDED] val moduleName: ModuleName
    private[FRP_EMBEDDED] def addChild(id: NodeID): Unit

    private[FRP_EMBEDDED] def generateNode(): Unit
    private[FRP_EMBEDDED] def getInitializer(): Rep[Unit]
    private[FRP_EMBEDDED] def produceFunction(): Unit
    private[FRP_EMBEDDED] def useFunction(): Unit

  }

  object Node {
    private var id: Int = 0
    private def nextid = {id += 1;id}
    def informNextId: NodeID = {
      id + 1
    }
  }

}