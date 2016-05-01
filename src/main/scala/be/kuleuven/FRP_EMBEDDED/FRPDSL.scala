package be.kuleuven.FRP_EMBEDDED

trait FRPDSL extends EventOps with BehaviorOps {

  abstract class Module[A] {
    val name: ModuleName
    val output: OutputEvent[A]
  }

  def generateModule(module: Module[_]): Unit
}

trait FRPDSL_Impl extends FRPDSL with EventOps_Impl with BehaviorOps_Impl {

  def printGraph(): Unit = {
      val inputevents = getInputEventNodes
      System.err.println("InputEvents:")
      inputevents.foreach(System.err.println )

      //get all end nodes
      val leafNodes = getOutputNodes.values.toList
      System.err.println("LeafNodes:")
      leafNodes.foreach(System.err.println )
    }

  def buildFRPGraph(): Unit = {
    getNodeMap.foreach{ case (_, n) => n.buildGraphTopDown() }
    printGraph()
  }

  def buildProgram(modList: List[Module[_]]): () => Rep[Unit] = {
    () => {
      headers()
      for (module <- modList) {
        generateModule(module)
      }
      generateExtras(modList)
    }
  }

  override def generateModule(module: Module[_]): Unit = {
    // generate per level
    System.err.println("max level : " + getMaxLevel)
    for (i <- 0 to getMaxLevel) {
      val nodes = getNodesOnLevel(getNodeMap.values.toList, i)
      val modnodes = nodes.filter(n => n.moduleName == module.name)
      modnodes.foreach { node => node.generateNode() }
    }

    // function to reset all event fired values
    val behaviorsInModule = getBehaviorNodes.values.filter( node => node.moduleName == module.name)

    val initialised = vardeclmod_new[Int](module.name.toString())
    val initModule: Rep[(Unit) => Unit] = namedfun0(module.name.toString()) { () =>
      if (readVar(initialised) == 0) {
        for (i <- 0 to getMaxLevel) {
          getNodesOnLevel(behaviorsInModule.toList, i)
            .foreach(_.getInitializer())
        }
        var_assign(initialised, 1)
      }

      generateGlobalFRPInits(module)
      unitToRepUnit(())
    }

    generateTopFunctions(module, initModule)
  }

  def generateGlobalFRPInits(module: Module[_]): Unit

  def generateTopFunctions(module: Module[_], initModule: Rep[(Unit) => Unit]): Unit = {

    //get all input events
    val inputs = getInputEventNodes
    val modinputs = inputs.filter(n => n.moduleName == module.name)

    // generate top functions
    for( ie <- modinputs) {
      System.err.println("Generate dependencies of inputnode " + ie.id)
      generateTopFunction(ie, initModule, module)
    }
    System.err.println("End of generateModule")
  }

  def generateTopFunction[X](input: InputEvent[X], initModule: => Rep[(Unit)=>Unit], m: Module[_]): Unit = {
    System.err.println("top" + input.id)

    val descendantIDs = getDecendantNodeIDs(input).filter(id => id != input.id)
    val descendantNodes = getNodesWithIDs(descendantIDs)

    // get topological ordering
    val listbuilder = scala.collection.mutable.ListBuffer.empty[Node[_]]
    for( i <- 0 to getMaxLevel)
      listbuilder ++= getNodesOnLevel(descendantNodes.values.toList,i)
    val nodesTO = listbuilder.toList
    nodesTO.foreach(x => System.err.println(x.id))

    m.output match {
      case coe @ AOutputEvent(_) => System.err.println("Output for: " + coe.parent.id)
      case _ => System.err.println("No outputs for this module")
    }
    val behaviorsInModule = getBehaviorNodes.values.filter( node => node.moduleName == input.moduleName)

    val top = inputfun(input.moduleName.str, "top"+input.id) { (data: Rep[Ptr[Byte]], len: Rep[Int]) =>
      if(behaviorsInModule.size > 0) initModule()

      resetSymMap()
      input.useInput(data, len)

      nodesTO.foreach( x => { x.useFunction() } ) // apply the functions in this context

      m.output match {
        case coe @ AOutputEvent(_) =>
          if (coe.inputNodeIDs.contains(input.id) ) coe.useOutput()
        case _ => // we didn't had an output, it was None
      }

      unitToRepUnit( () )
    }
    doApplyDecl(top)
  }

  def generateExtras(modlist: List[Module[_]]): Unit = {

    for( mod <- modlist) {
      declare_module(mod.name.str)
    }

    //globalInitFun()

    //val modNames = modlist.map{ m => m.name.toString()}
    //deployFun(modNames, getOutInList)

    //mainFun()
  }
}

trait FRPDSLImpl extends FRPDSL_Impl with EventOpsImpl with BehaviorOpsImpl {

  override def generateGlobalFRPInits(module: Module[_]): Unit = {
    getEventNodes
      .filter(e => e.moduleName == module.name)
      .foreach(e => var_assign(e.getFired, false))
  }

}

trait FRPDSLOptImpl extends FRPDSL_Impl with EventOpsOptImpl with BehaviorOpsOptImpl {

  override def generateGlobalFRPInits(module: Module[_]): Unit = {
    // nothing to do since not global anymore
  }

}
