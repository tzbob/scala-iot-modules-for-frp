package be.kuleuven.FRP_EMBEDDED

import scala.lms.common._
import scala.reflect.SourceContext

trait VariablesExt extends Variables {
  def vardecl_new[T:Typ]()(implicit pos: SourceContext): Var[T]

}

trait VariablesExpExt extends VariablesExp {

  case class NewVarDecl[T:Typ]() extends Def[Variable[T]] {
    def m = manifest[T]
  }

  def vardecl_new[T:Typ]()(implicit pos: SourceContext): Var[T] = {
    Variable(reflectMutable(NewVarDecl[T]()))
  }

  override def aliasSyms(e: Any): List[Sym[Any]] = e match {
    case NewVarDecl() => Nil
    case _ => super.aliasSyms(e)
  }

  override def containSyms(e: Any): List[Sym[Any]] = e match {
    case NewVarDecl() => Nil
    case _ => super.containSyms(e)
  }

  override def extractSyms(e: Any): List[Sym[Any]] = e match {
    case NewVarDecl() => Nil
    case _ => super.extractSyms(e)
  }

  override def copySyms(e: Any): List[Sym[Any]] = e match {
    case NewVarDecl() => Nil
    case _ => super.copySyms(e)
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