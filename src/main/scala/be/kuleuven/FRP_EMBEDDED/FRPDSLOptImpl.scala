package be.kuleuven.FRP_EMBEDDED

trait FRPDSLOptImpl extends FRPDSL_Impl with EventOpsOptImpl with BehaviorOpsOptImpl {


  override def printGraph: Unit = {
    val inputevents = getInputEventNodes
    System.err.println("InputEvents:")
    inputevents.foreach(System.err.println )

    //get all end nodes
    val leafNodes = getOutputNodes.values.toList
    System.err.println("LeafNodes:")
    leafNodes.foreach(System.err.println )
  }

  override def generateGlobalFRPInits(module: Module[_]): Unit = {
    // nothing to do since not global anymore
  }

}
