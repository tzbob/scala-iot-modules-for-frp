package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExt

trait NodeOps extends ScalaOpsPkgExt {

  private[FRP_EMBEDDED] type NodeID = Int
  class ModuleName private[FRP_EMBEDDED] (val str: String) { // packet private constructor
    override def toString(): String = str
  }

  trait Node[A] {

    // all private
    /*private[FRP_EMBEDDED]*/ val id: NodeID = Node.nextid //TODO: not packet private because of unit tests
    /*private[FRP_EMBEDDED]*/ val level: Int // for topological order
    /*private[FRP_EMBEDDED]*/ val childNodeIDs: scala.collection.mutable.Set[NodeID]
    /*private[FRP_EMBEDDED]*/ def buildGraphTopDown(): Unit
    /*private[FRP_EMBEDDED]*/ type Out

    private[FRP_EMBEDDED] val inputNodeIDs: Set[NodeID]
    private[FRP_EMBEDDED] val moduleName: ModuleName
    private[FRP_EMBEDDED] def addChild(id: NodeID): Unit

  }

  object Node {
    private var id: Int = 0
    private def nextid = {id += 1;id}
  }

}
