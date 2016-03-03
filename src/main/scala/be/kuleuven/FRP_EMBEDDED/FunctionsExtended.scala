package be.kuleuven.FRP_EMBEDDED

import scala.lms.common._
import scala.reflect.SourceContext

trait FunctionsExt extends Functions {

  //TODO: rename to mainFun for example
  def doApplyDecl[A:Typ,B:Typ](fun: Rep[A => B])(implicit pos: SourceContext): Rep[B]
}

trait FunctionsExpExt extends FunctionsExp with FunctionsExt {

  case class ApplyDecl[A:Typ,B:Typ](f: Exp[A => B]) extends Def[B] { val mA = manifest[A]; val mB = manifest[B] }

  override def doApplyDecl[A:Typ,B:Typ](f: Exp[A => B])(implicit pos: SourceContext): Exp[B] = {
    //val x1 = unbox(x) // no need for anymore
    f match {
      case Def(Lambda(_,_,y)) =>
        val ye = summarizeEffects(y)
        reflectEffect(ApplyDecl(f), ye)
      case _ =>
        reflectEffect(ApplyDecl(f))
    }
  }
}

//trait TupledFunctionsExt extends TupledFunctions with FunctionsExt with TupleOps
//trait TupledFunctionsExpExt extends TupledFunctionsExp with TupledFunctionsExt with FunctionsExpExt with TupleOpsExp
trait TupledFunctionsExpExt extends TupledFunctionsExp with FunctionsExpExt
trait TupledFunctionsRecursiveExpExt extends TupledFunctionsRecursiveExp with TupledFunctionsExpExt

trait CGenFunctionsExt extends CGenFunctions {

  val IR: FunctionsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case e@Lambda(fun, x, y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType+" "+quote(sym)+" ("+remap(x.tp)+" "+quote(x)+") {")

      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case Apply(fun, arg) =>
      emitValDef(sym, quote(fun) + "(" + quote(arg) + ")")
    case ApplyDecl(fun) =>
    //do nothing - only for effect - used for main fun or top level functions
    case _ => super.emitNode(sym, rhs)
  }
}

trait CGenTupledFunctionsExt extends CGenFunctionsExt with GenericGenUnboxedTupleAccess {

  val IR: TupledFunctionsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case Lambda(fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType+" "+quote(sym)+" ("+xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",")+") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case Apply(fun, UnboxedTuple(args)) =>
      emitValDef(sym, quote(fun) + args.map(quote).mkString("(", ",", ")"))
    case ApplyDecl(fun) =>
    //do nothing
    case _ => super.emitNode(sym,rhs)
  }
}
