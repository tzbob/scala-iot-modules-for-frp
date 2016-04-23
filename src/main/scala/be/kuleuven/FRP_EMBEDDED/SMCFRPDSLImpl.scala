package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import be.kuleuven.LMS_extensions.{SMCCodeGenPkgExtended, TupledFunctionsRecursiveExpExt, ScalaOpsPkgExpExt}

import scala.lms.common.UncheckedOpsExp

trait SMCFRPDSLImpl extends FRPDSLImpl with ScalaOpsPkgExpExt { self =>

  val codegen = new SMCCodeGenPkgExtended { val IR: self.type = self }

  def emitProgram(program: ()=>Rep[Unit]): Unit = {
    val stream = new PrintWriter(System.out)
    codegen.emitProgram(program, stream)
  }

}

trait SMCFRPDSLApplicationRunner extends FRPDSLApplicationRunner with SMCFRPDSLImpl {

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
