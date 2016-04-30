package be.kuleuven.FRP_EMBEDDED

trait NodeOpsOptImpl extends NodeOps {

  private val symMap: scala.collection.mutable.Map[NodeID,(Var[_],Var[Boolean])] = scala.collection.mutable.HashMap()

  def printSymbolMap(nodeID: NodeID): Unit = {
    System.err.println("ID's in symMap for " + nodeID + ":")
    for ( (id,v) <- getSymMap) {
      System.err.println(id)
    }
  }

  def addSymToSymMap(id: NodeID, v: Var[_], f: Var[Boolean]) {
    symMap += ((id, (v, f) ))
  }

  def resetSymMap(): Unit = {
    symMap.clear
  }

  def getSymMap(): Map[NodeID,(Var[_],Var[Boolean])] = {
    symMap.toMap
  }

  trait NodeOptImpl[A] extends Node[A] {

    override def toString: String = {
      "Node with id: " + this.id
    }
  }
}
