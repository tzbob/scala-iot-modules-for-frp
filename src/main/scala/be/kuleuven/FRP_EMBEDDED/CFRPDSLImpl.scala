package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import be.kuleuven.LMS_extensions._

import scala.lms.common._

/*
 * Implementation of the FRP DSL to generate C code
 */
trait CFRPDSLImpl extends FRPDSLImpl
    with ScalaOpsPkgExpExt with TupledFunctionsRecursiveExpExt with UncheckedOpsExp { self =>

  val codegen = new CCodeGenPkgExtended with CGenTupledFunctionsExt with CGenUncheckedOps with CGenPointers { val IR: self.type = self }

  def buildFRPGraph(): Unit = {
    getNodeMap.foreach(
      x => x match {
        case (_, n) => n.buildGraphTopDown()
      }
    )

    val inputevents = getInputEventNodes.values.toList
    System.err.println("InputEvents:")
    inputevents.foreach(System.err.println )

    //get all end nodes
    val outputNodes = getOutputNodes.values.toList
    System.err.println("OutputNodes:")
    outputNodes.foreach(System.err.println )
  }

  def emitProgram(): Unit = {
    val stream = new PrintWriter(System.out)

    //get all end nodes
    val program = generator

    codegen.emitProgram(program, stream)
  }

}