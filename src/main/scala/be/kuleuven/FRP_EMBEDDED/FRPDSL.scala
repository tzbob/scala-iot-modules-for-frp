package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.{TupledFunctionsExt, ScalaOpsPkgExt}

import scala.lms.common._
import java.lang.{Integer => JInteger}

trait FRPDSL
    extends ScalaOpsPkgExt with LiftPrimitives with LiftString with LiftVariables with LiftBoolean
    with EventOps with BehaviorOps {


  def generator: () => Rep[Unit]
}

trait FRPDSLImpl extends FRPDSL with EventOpsImpl with BehaviorOpsImpl {

  protected val moduleNameList = scala.collection.mutable.ListBuffer[ModuleName]()

  override def generator: () => Rep[Unit] = {
    var program: () => Rep[Unit] = () => unitToRepUnit( () )


    for( mn <- moduleNameList.toList) {
      // generate per level
      System.err.println("max level : " + getMaxLevel)
      for (i <- 0 to getMaxLevel) {
        val nodes = getNodesOnLevel(getNodeMap.values.toList, i)
        val modnodes = nodes.filter(n => n.moduleName == mn)
        modnodes.foreach { node => program = node.generateNode(program) }
      }

      //get all input events
      val inputs = getInputEventNodes
      val modinputs = inputs.filter(n => n.moduleName == mn)

      // function to reset all event fired values
      val behaviorsInModule = getBehaviorNodes.values.filter( node => node.moduleName == mn)

      lazy val initialised = vardeclmod_new[Int](mn.name)
      lazy val initModule: Rep[(Unit) => Unit] = namedfun0(mn.name) { () =>
        if (readVar(initialised) == 0) {
          for (i <- 0 to getMaxLevel) {
            getNodesOnLevel(behaviorsInModule.toList, i)
              .foreach(_.getInitializer())
          }
          var_assign(initialised, 1)
        }

        getEventNodes
          .filter(e => e.moduleName == mn)
          .foreach(e => var_assign(getEventFired(e), false))
        unitToRepUnit(())
      }

      val progNow = program
      program =
        () => {
          progNow()
          initialised
          initModule
          unitToRepUnit(())
        }

      // generate top functions
      for( ie <- modinputs) {
        System.err.println("Generate dependencies of inputnode " + ie.id)
        program = generateTopFunction(ie, program, initModule)
      }
    }

    program
  }

  def generateTopFunction[X](input: InputEvent[X], f: () => Rep[Unit], initModule: => Rep[(Unit)=>Unit]): () => Rep[Unit] = {

    System.err.println("top" + input.id)

    val descendantIDs = getDecendantNodeIDs(input).filter(id => id != input.id)
    val descendantNodes = getNodesWithIDs(descendantIDs)

    // get topological ordering
    val listbuilder = scala.collection.mutable.ListBuffer.empty[NodeImpl[_]]
    for( i <- 0 to getMaxLevel)
      listbuilder ++= getNodesOnLevel(descendantNodes.values.toList,i)
    val eventsTO = listbuilder.toList
    eventsTO.foreach(x => System.err.println(x.id))

    for( (mn, l) <- getOutMap) {
      System.err.println(mn.name)
    }

    val outputs = getOutMap.get(input.moduleName) match {
      case Some(outList) =>
        outList.filter(x => x.inputNodeIDs.contains(input.id))
      case None =>
        Nil
    }

    outputs.foreach(x => System.err.println("Output for: " + x.parent.id))
    val behaviorsInModule = getBehaviorNodes.values.filter( node => node.moduleName == input.moduleName)

    () => {
      f()

      val top = inputfun(input.moduleName.name, "top"+input.id) { (data: Rep[Ptr[Byte]], len: Rep[Int]) =>
        if(behaviorsInModule.size > 0) initModule()
        input.eventfun(data,len)
        eventsTO.foreach( x => {(x.getFunction())( () ) } ) // apply the functions in this context

        //outputs.foreach( x => doApplyOut("dummy", x.outfun, x.parentvalue)) // This gives you effect errors!
        outputs.foreach( x => x.eventfun( () ) )
      }
      doApplyDecl(top)
      unitToRepUnit( () )
    }
  }

}