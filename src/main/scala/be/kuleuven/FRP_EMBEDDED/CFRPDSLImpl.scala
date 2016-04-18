package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import be.kuleuven.LMS_extensions._

import scala.lms.common._

/*
 * Implementation of the FRP DSL to generate C code
 */
trait CFRPDSLImpl extends FRPDSLImpl
    with ScalaOpsPkgExpExt { self =>

  val codegen = new CCodeGenPkgExtended { val IR: self.type = self }

  def buildFRPGraph(): Unit = {
    getNodeMap.foreach(
      x => x match {
        case (_, n) => n.buildGraphTopDown()
      }
    )

    val inputevents = getInputEventNodes
    System.err.println("InputEvents:")
    inputevents.foreach(System.err.println )

    //TODO: remove, or call it a leaf node
    //get all end nodes
    val leafNodes = getOutputNodes.values.toList
    System.err.println("LeafNodes:")
    leafNodes.foreach(System.err.println )
  }

  def buildProgram(): () => Rep[Unit] = {
    generator
  }

  def emitProgram(program: ()=>Rep[Unit]): Unit = {
    val stream = new PrintWriter(System.out)
    codegen.emitProgram(program, stream)
  }

}