package be.kuleuven.FRP_EMBEDDED

trait FRPDSLImpl extends FRPDSL_Impl with EventOpsImpl with BehaviorOpsImpl {

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
    getEventNodes
      .filter(e => e.moduleName == module.name)
      .foreach(e => var_assign(e.getFired(), false))
  }

}
