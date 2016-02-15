package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import scala.lms.common.{ScalaOpsPkgExp, CCodeGenPkg}
import scala.lms.internal.{Expressions, GenericCodegen}

trait GenericCodeGenExtended extends GenericCodegen {

  val IR: Expressions
  import IR._

  def emitSource0[R : Typ](f: () => Exp[R], className: String, stream: PrintWriter): List[(Sym[Any], Any)] = {
    val body = reifyBlock(f())
    emitSource(Nil, body, className, stream)
  }
}

trait CCodeGenPkgExtended extends CCodeGenPkg with GenericCodeGenExtended { val IR: ScalaOpsPkgExp  }
