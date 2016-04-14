package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.{TupledFunctionsExt, ScalaOpsPkgExt}

import scala.lms.common._
import java.lang.{Integer => JInteger}

trait FRPDSL
    extends ScalaOpsPkgExt with LiftPrimitives with LiftString with LiftVariables with LiftBoolean
    with EventOps with BehaviorOps {

  protected val moduleMap: scala.collection.mutable.Map[String,()=>Unit] = scala.collection.mutable.HashMap()
  def generator: () => Rep[Unit]
}

trait FRPDSLImpl extends FRPDSL with EventOpsImpl with BehaviorOpsImpl {

  override def generator: () => Rep[Unit] = {
    var program: () => Rep[Unit] = () => unitToRepUnit( () )

    // generate per level
    System.err.println("max level : "+ getMaxLevel)
    for( i <- 0 to getMaxLevel){
      val nodes = getNodesOnLevel(getNodeMap.values.toList, i)
      nodes.foreach { node => program = node.generateNode(program) }
    }

    //get all input events
    val inputMap = getInputEventNodes

    // generate top functions
    for( ie <- inputMap) {
      System.err.println("Generate dependencies of inputnode " + ie.id)
      program = generateTopFunction(ie, program)
    }

    //TODO: this migrated to the input function - can be deleted
    //program = generateBehaviorInit(program)

    program
  }

  // SM_DATA can only contain declarations, so we need an initializer for all behaviors
  def generateBehaviorInit(f: () => Rep[Unit]): () => Rep[Unit] = {
    System.err.println()
    System.err.println("Generating init functions for behaviors:")

    for( (moduleName, _ ) <- moduleMap) {
      System.err.println("Behaviors in module: " + moduleName)
      getBehaviorNodes
        .values
        .filter( node => node.moduleName == moduleName)
        .foreach( node => System.err.println(node.id) )
    }

    () => {
      f()
      for( (moduleName, _ ) <- moduleMap) {
        val behaviorsInModule = getBehaviorNodes.values.filter( node => node.moduleName == moduleName)

        val inits = entryfun0 (moduleName, "init_"+moduleName) { () =>
          for( i <- 0 to getMaxLevel){
            getNodesOnLevel(behaviorsInModule.toList, i)
            .foreach( _.getInitializer() )
          }
        }
        doApplyDecl(inits)
      }

      unitToRepUnit( () )
    }
  }

  def generateTopFunction[X](input: InputEvent[X], f: () => Rep[Unit]): () => Rep[Unit] = {
    System.err.println("top" + input.id)

    val descendantIDs = getDecendantNodeIDs(input).filter(id => id != input.id)
    val descendantNodes = getNodesWithIDs(descendantIDs)

    // get topological ordering
    val listbuilder = scala.collection.mutable.ListBuffer.empty[NodeImpl[_]]
    for( i <- 0 to getMaxLevel)
      listbuilder ++= getNodesOnLevel(descendantNodes.values.toList,i)
    val eventsTO = listbuilder.toList
    eventsTO.foreach(x => System.err.println(x.id))

    val outputs = getOutList.filter( x => x.inputNodeIDs.contains(input.id))
    outputs.foreach(x => System.err.println("Output for: " + x.parent.id))


    val behaviorsInModule = getBehaviorNodes.values.filter( node => node.moduleName == input.moduleName)

    () => {
      f()

      val initialised = vardeclmod_new[Int](input.moduleName)
      val initModule: Rep[(Unit)=>Unit] = namedfun0 (input.moduleName) { () =>
        if(readVar(initialised) == 0){
          for( i <- 0 to getMaxLevel){
            getNodesOnLevel(behaviorsInModule.toList, i)
              .foreach( _.getInitializer() )
          }
          var_assign(initialised, 1)
        }
        unitToRepUnit( () )
      }
      val top = inputfun(input.moduleName, "top"+input.id) { (data: Rep[Ptr[Byte]], len: Rep[Int]) =>
        if(behaviorsInModule.size > 0) initModule()
        input.eventfun(data,len)
        eventsTO.foreach( x => {(x.getFunction())( () ) } ) // apply the functions in this context

        outputs.foreach( x => doApplyOut(x.outputName, x.outfun, x.parentvalue))
      }
      doApplyDecl(top)
      unitToRepUnit( () )
    }
  }

}