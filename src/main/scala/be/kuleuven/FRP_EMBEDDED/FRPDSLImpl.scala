package be.kuleuven.FRP_EMBEDDED

trait FRPDSLImpl extends FRPDSL_Impl with EventOpsImpl with BehaviorOpsImpl {

  override def buildFRPGraph(): Unit = {
    getNodeMap.foreach(
      x => x match {
        case (_, n) => n.buildGraphTopDown()
      }
    )

    val inputevents = getInputEventNodes
    System.err.println("InputEvents:")
    inputevents.foreach(System.err.println )

    //get all end nodes
    val leafNodes = getOutputNodes.values.toList
    System.err.println("LeafNodes:")
    leafNodes.foreach(System.err.println )
  }

  override def generateModule(module: Module[_]): Unit = {

    // generate per level
    System.err.println("max level : " + getMaxLevel)
    for (i <- 0 to getMaxLevel) {
      val nodes = getNodesOnLevel(getNodeMap.values.toList, i)
      val modnodes = nodes.filter(n => n.moduleName == module.name)
      modnodes.foreach { node => node.generateNode() }
    }

    //get all input events
    val inputs = getInputEventNodes
    val modinputs = inputs.filter(n => n.moduleName == module.name)

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

      getEventNodes
        .filter(e => e.moduleName == module.name)
        .foreach(e => var_assign(e.getFired(), false))
      unitToRepUnit(())
    }

    // generate top functions
    for( ie <- modinputs) {
      System.err.println("Generate dependencies of inputnode " + ie.id)
      generateTopFunction(ie, initModule, module)
    }

  }

  private def generateTopFunction[X](input: InputEvent[X], initModule: => Rep[(Unit)=>Unit], m: Module[_]): Unit = {

    System.err.println("top" + input.id)

    val descendantIDs = getDecendantNodeIDs(input).filter(id => id != input.id)
    val descendantNodes = getNodesWithIDs(descendantIDs)

    // get topological ordering
    val listbuilder = scala.collection.mutable.ListBuffer.empty[NodeImpl[_]]
    for( i <- 0 to getMaxLevel)
      listbuilder ++= getNodesOnLevel(descendantNodes.values.toList,i)
    val eventsTO = listbuilder.toList
    eventsTO.foreach(x => System.err.println(x.id))

    //TODO: maybe get rid of concrete output
    m.output match {
      case coe @ ConcreteOutputEvent(_) => System.err.println("Output for: " + coe.parent.id)
      case _ => System.err.println("No outputs for this module")
    }
    val behaviorsInModule = getBehaviorNodes.values.filter( node => node.moduleName == input.moduleName)

    val top = inputfun(input.moduleName.str, "top"+input.id) { (data: Rep[Ptr[Byte]], len: Rep[Int]) =>
      if(behaviorsInModule.size > 0) initModule()
      input.eventfun(data,len)
      eventsTO.foreach( x => {(x.getFunction())( () ) } ) // apply the functions in this context

      m.output match {
        case coe @ ConcreteOutputEvent(_) => coe.eventfun( () )
        case _ => // we didn't had an output, it was None
      }

      unitToRepUnit( () )
    }
    doApplyDecl(top)

  }

}
