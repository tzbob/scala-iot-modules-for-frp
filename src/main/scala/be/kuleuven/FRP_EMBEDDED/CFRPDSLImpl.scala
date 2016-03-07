package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import scala.lms.common._


/*
 * Implementation of the FRP DSL to generate C code
 */
trait CFRPDSLImpl extends FRPDSLImpl
    with ScalaOpsPkgExpExt with TupledFunctionsRecursiveExpExt with UncheckedOpsExp { self =>

  val codegen = new CCodeGenPkgExtended with CGenTupledFunctionsExt with CGenUncheckedOps { val IR: self.type = self }

  def emitProgram(): Unit = {
    val stream = new PrintWriter(System.out)

    //get all end nodes
    val outputevents = getOutputNodes.values.toList
    val program = generator(outputevents:_*)

    codegen.emitProgram(program, stream)
  }

}