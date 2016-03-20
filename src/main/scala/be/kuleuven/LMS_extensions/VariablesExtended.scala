package be.kuleuven.LMS_extensions

import scala.lms.common._
import scala.reflect.SourceContext

trait VariablesExt extends Variables {
  def vardecl_new[T:Typ]()(implicit pos: SourceContext): Var[T]

}

trait VariablesExpExt extends VariablesExp with VariablesExt {

  case class NewVarDecl[T:Typ]() extends Def[Variable[T]] {
    def m = manifest[T]
  }

  override def vardecl_new[T:Typ]()(implicit pos: SourceContext): Var[T] = {
    Variable(reflectMutable(NewVarDecl[T]()))
  }

}

trait ScalaGenVariablesExt extends ScalaGenVariables {
  val IR: VariablesExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case NewVarDecl() => emitVarDecl(sym)
    case _ => super.emitNode(sym, rhs)
  }
}

trait CLikeGenVariablesExt extends CLikeGenVariables {
  val IR: VariablesExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case NewVarDecl() => emitVarDecl(sym)
    case _ => super.emitNode(sym, rhs)
  }
}

trait CGenVariablesExt extends CGenEffect with CLikeGenVariablesExt