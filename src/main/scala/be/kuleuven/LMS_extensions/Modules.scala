package be.kuleuven.LMS_extensions

import scala.lms.common.{CGenEffect, EffectExp, Base}

trait Modules extends Base {

  def declare_module(modName: String): Rep[Unit]
  def globalInitFun(): Rep[Unit]
  def deployFun(modNames: List[String], outInList: List[(String,String,String,String)]): Rep[Unit]
  def mainFun(): Rep[Unit]
  def headers(): Rep[Unit]

}

trait ModulesExp extends Modules with ExpressionsExt with EffectExp {

  case class ModuleDecl(name: String) extends Def[Unit]
  case class GlobalInit() extends Def[Unit]
  case class Deploy(modNames: List[String], outInList: List[(String,String,String,String)]) extends Def[Unit]
  case class Main() extends Def[Unit]
  case class Headers() extends Def[Unit]

  override def declare_module(n: String): Rep[Unit] = {
    reflectEffect(new ModuleDecl(n))
    Const()
  }

  override def globalInitFun(): Rep[Unit] = {
    reflectEffect(new GlobalInit())
    Const()
  }

  override def deployFun(modNames: List[String], outInList: List[(String,String,String,String)]): Rep[Unit] = {
    reflectEffect(new Deploy(modNames,outInList))
    Const()
  }

  override def mainFun(): Rep[Unit] = {
    reflectEffect(new Main())
    Const()
  }

  override def headers(): Rep[Unit] = {
    reflectEffect(new Headers())
    Const()
  }
}


trait CGenModules extends CGenEffect with SMCLikeCodeGen {
  val IR: ModulesExp
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case ModuleDecl(n) => // no modules in standard C
    case GlobalInit() => // nothing
    case Deploy(l, oil) => // nothing
    case Main() => /*stream.println(
      "\nint main()"+
        "\n"+
        "{\n"+
        "  puts(\"main started\");\n"+
        "  \n\n" +
        "  //ADD CODE HERE\n"+
        "  \n\n" +
        "}"
    )*/
    case Headers() =>
      stream.println(
        "#include <stdio.h>\n" +
        "#include <stdlib.h>\n" +
        "#include <string.h>\n" +
        "#include <stdint.h>\n" +
        "#include <math.h>\n" +
        "#include <stdbool.h>\n"
      )
    case _ => super.emitNode(sym, rhs)
  }
}
trait SMCGenModules extends CGenEffect with SMCLikeCodeGen {
  val IR: ModulesExp
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case ModuleDecl(n) => stream.println("DECLARE_SM(" + n + ", 0x1234);")
    case GlobalInit() => stream.println(
      "\nstatic void init()"+
      "\n"+
      "{\n"+
      "  WDTCTL = WDTHOLD | WDTPW;\n"+
      "  uart_init();\n"+
      "}"
    )
    case Deploy(l, oil) => {
      val strB = new StringBuilder
      strB.append("\nstatic void deploy()")
      strB.append("\n")
      strB.append("{\n")
      for( n <- l ) {
        strB.append("  sancus_enable(&" + n + ");\n")
        strB.append("  sm_register_existing(&" + n +");\n")
      }
      for( (modOut, nameOut, modIn, nameIn) <- oil) {
        strB.append("  REACTIVE_CONNECT(" + modOut + ", " + nameOut + ", " + modIn + ", " + nameIn +");\n")
      }
      strB.append("}\n")
      stream.println(strB.toString())
    }
    case Main() => stream.println(
      "\nint main()"+
        "\n"+
        "{\n"+
        "  init();\n"+
        "  puts(\"main started\");\n"+
        "  deploy();\n"+
        "  \n\n" +
        "  //ADD CODE HERE\n"+
        "  \n\n" +
        "}"
    )
    case Headers() =>
      stream.println(
        "#include <sancus/sm_support.h>\n" +
        "#include <msp430.h>\n" +
        "\n" +
        "#include \"reactive.h\"\n" +
        "#include \"uart.h\"\n" +
        "#include \"string.h\"\n"+
        "#include <stdbool.h>\n"
      )
    case _ => super.emitNode(sym, rhs)
  }
}