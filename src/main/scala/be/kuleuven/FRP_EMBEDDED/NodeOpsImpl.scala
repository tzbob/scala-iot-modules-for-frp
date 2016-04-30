package be.kuleuven.FRP_EMBEDDED

trait NodeOpsImpl extends NodeOps {

  trait NodeImpl[A] extends Node[A] {

    override def toString: String = {
      "Node with id: " + this.id
    }
  }

}
