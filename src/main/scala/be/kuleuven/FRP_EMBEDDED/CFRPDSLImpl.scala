package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import be.kuleuven.LMS_extensions.{CCodeGenPkgExtended, ScalaOpsPkgExpExt}

/*
 * Implementation of the FRP DSL to generate C code
 */

trait CFRPDSL_Impl extends FRPDSL_Impl with ScalaOpsPkgExpExt { self =>
  val codegen = new CCodeGenPkgExtended { val IR: self.type = self }

  def emitProgram(program: ()=>Rep[Unit]): Unit = {
    val stream = new PrintWriter(System.out)
    codegen.emitProgram(program, stream)
  }
}

trait CFRPDSLImpl extends CFRPDSL_Impl with FRPDSLImpl
trait CFRPDSLOptImpl extends CFRPDSL_Impl with FRPDSLOptImpl

trait CFRPDSLApplicationRunner_Impl extends CFRPDSL_Impl with FRPDSLApplication {

  def compile(): Unit = {
    System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
    System.err.println("Creating flow graph...")
    val modList = createApplication()
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

// C + FRPDSL
trait CFRPDSLApplicationRunner extends CFRPDSLApplicationRunner_Impl
  with FRPDSLApplicationRunner with CFRPDSLImpl
// C + FRPDSL OPT
trait CFRPDSLOptApplicationRunner extends CFRPDSLApplicationRunner_Impl
  with FRPDSLOptApplicationRunner with CFRPDSLOptImpl

trait RawCFRPDSLApplicationRunner extends FRPDSLApplicationRunner with CFRPDSLImpl