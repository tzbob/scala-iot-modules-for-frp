package be.kuleuven.FRP_EMBEDDED

trait FRPDSL extends EventOps with BehaviorOps {

  abstract class Module[A] {
    val name: ModuleName
    val output: OutputEvent[A]
  }

  def generateModule(module: Module[_]): Unit
}

trait FRPDSL_Impl extends FRPDSL with EventOps_Impl with BehaviorOps_Impl {
  def printGraph: Unit

  def buildFRPGraph(): Unit = {
    getNodeMap.foreach(
      x => x match {
        case (_, n) => n.buildGraphTopDown()
      }
    )

    printGraph
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

  def generateGlobalFRPInits(module: Module[_]): Unit
  def generateTopFunctions(module: Module[_], initModule: Rep[(Unit) => Unit]): Unit

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

  def generateExtras(modlist: List[Module[_]]): Unit = {
    //unchecked[Unit]("(lets couple the modules)")

    for( mod <- modlist) {
      declare_module(mod.name.str)
    }
    //globalInitFun()

    //val modNames = modlist.map{ m => m.name.toString()}
    //deployFun(modNames, getOutInList)

    //mainFun()
  }
}
