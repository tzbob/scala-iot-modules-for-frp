package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import be.kuleuven.LMS_extensions.{SMCCodeGenPkgExtended, TupledFunctionsRecursiveExpExt, ScalaOpsPkgExpExt}

import scala.lms.common.UncheckedOpsExp

trait SMCFRPDSL_Impl extends FRPDSL_Impl with ScalaOpsPkgExpExt { self =>

  val codegen = new SMCCodeGenPkgExtended { val IR: self.type = self }

  def emitProgram(program: ()=>Rep[Unit]): Unit = {
    val stream = new PrintWriter(System.out)
    codegen.emitProgram(program, stream)
  }
}

trait SMCFRPDSLImpl extends SMCFRPDSL_Impl with FRPDSLImpl
trait SMCFRPDSLOptImpl extends SMCFRPDSL_Impl with FRPDSLOptImpl

trait SMCFRPDSLApplicationRunner_Impl extends SMCFRPDSL_Impl with FRPDSLApplication {

  def compile(): Unit = {
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

}

// SMC + FRPDSL
trait SMCFRPDSLApplicationRunner extends SMCFRPDSLApplicationRunner_Impl
  with FRPDSLApplicationRunner with SMCFRPDSLImpl
// SMC + FRPDSL OPT
trait SMCFRPDSLOptApplicationRunner extends SMCFRPDSLApplicationRunner_Impl
  with FRPDSLOptApplicationRunner with SMCFRPDSLOptImpl

trait RawSMCFRPDSLApplicationRunner extends FRPDSLApplicationRunner with SMCFRPDSLImpl
