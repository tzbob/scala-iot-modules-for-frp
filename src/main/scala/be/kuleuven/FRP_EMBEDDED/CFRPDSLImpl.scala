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

  def emitProgram(program: ()=>Rep[Unit]): Unit = {
    val stream = new PrintWriter(System.out)
    codegen.emitProgram(program, stream)
  }

}

trait CFRPDSLApplicationRunner extends FRPDSLApplicationRunner with CFRPDSLImpl {

  System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
  System.err.println("Creating flow graph...")
  val modList = createApplication
  System.err.println("\n")
  buildFRPGraph()
  System.err.println("\n")
  val program = buildProgram(modList)
  System.err.println("\n")
  emitProgram(program)
  System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
  System.err.println("\n\n")
}