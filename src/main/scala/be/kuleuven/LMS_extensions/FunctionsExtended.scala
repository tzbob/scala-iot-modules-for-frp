package be.kuleuven.LMS_extensions

import scala.lms.common._
import scala.reflect.SourceContext

trait FunctionsExt extends Functions {

  //TODO: rename to mainFun for example
  def doApplyDecl[A:Typ,B:Typ](fun: Rep[A => B])(implicit pos: SourceContext): Rep[B]

  def doLambdaInput[A:Typ,B:Typ](name: String)(fun: Rep[A] => Rep[B])(implicit pos: SourceContext): Rep[A => B]
  def inputfunInner[A:Typ,B:Typ](name: String)(f: Rep[A] => Rep[B]): Rep[A=>B] = doLambdaInput(name)(f)
}

trait FunctionsExpExt extends FunctionsExp with FunctionsExt {

  case class LambdaInput[A:Typ,B:Typ](name: String, f: Exp[A] => Exp[B], x: Exp[A], y: Block[B]) extends Def[A => B] { val mA = manifest[A]; val mB = manifest[B] }
  case class ApplyDecl[A:Typ,B:Typ](f: Exp[A => B]) extends Def[B] { val mA = manifest[A]; val mB = manifest[B] }

  override def doApplyDecl[A:Typ,B:Typ](f: Exp[A => B])(implicit pos: SourceContext): Exp[B] = {
    //val x1 = unbox(x) // no need for anymore
    f match {
      case Def(Lambda(_,_,y)) =>
        val ye = summarizeEffects(y)
        reflectEffect(ApplyDecl(f), ye)
      case Def(LambdaInput(_,_,_,y)) =>
        val ye = summarizeEffects(y)
        reflectEffect(ApplyDecl(f), ye)
      case _ =>
        reflectEffect(ApplyDecl(f))
    }
  }

  def doLambdaInputDef[A:Typ,B:Typ](name: String)(f: Exp[A] => Exp[B]) : Def[A => B] = {
    val x = unboxedFresh[A]
    val y = reifyEffects(f(x)) // unfold completely at the definition site.

    LambdaInput(name, f, x, y)
  }

  override def doLambdaInput[A:Typ,B:Typ](name: String)(f: Exp[A] => Exp[B])(implicit pos: SourceContext): Exp[A => B] =
    doLambdaInputDef(name)(f)

  override def mirror[A:Typ](e: Def[A], f: Transformer)(implicit pos: SourceContext): Exp[A] = (e match {
    case e@LambdaInput(n, g,x:Exp[Any],y:Block[b]) => toAtom(LambdaInput(n, f(g),f(x),f(y))(e.mA,e.mB))(mtype(manifest[A]),pos)
    case _ => super.mirror(e,f)
  }).asInstanceOf[Exp[A]] // why??

  override def syms(e: Any): List[Sym[Any]] = e match {
    case LambdaInput(_, f, x, y) => syms(y)
    case _ => super.syms(e)
  }

  override def boundSyms(e: Any): List[Sym[Any]] = e match {
    case LambdaInput(_, f, x, y) => syms(x) ::: effectSyms(y)
    case _ => super.boundSyms(e)
  }

  override def symsFreq(e: Any): List[(Sym[Any], Double)] = e match {
    case LambdaInput(_, f, x, y) => freqHot(y)
    case _ => super.symsFreq(e)
  }
}

trait TupledFunctionsExt extends TupledFunctions with FunctionsExt {

  def inputfun[A1:Typ,A2:Typ,B:Typ](name: String)(f: (Rep[A1], Rep[A2]) => Rep[B]): Rep[((A1,A2))=>B] =
    inputfunInner(name)(   (t: Rep[(A1,A2)]) => f(tuple2_get1(t), tuple2_get2(t))   )

}

trait TupledFunctionsExpExt extends TupledFunctionsExp with TupledFunctionsExt with FunctionsExpExt {
  override def boundSyms(e: Any): List[Sym[Any]] = e match {
    case LambdaInput(_, f, UnboxedTuple(xs), y) => xs.flatMap(syms) ::: effectSyms(y)
    case _ => super.boundSyms(e)
  }

  override def mirror[A:Typ](e: Def[A], f: Transformer)(implicit pos: SourceContext): Exp[A] = (e match {
    case e@LambdaInput(n, g,UnboxedTuple(xs),y:Block[b]) => toAtom(LambdaInput(n, f(g),UnboxedTuple(f(xs))(e.mA),f(y))(e.mA,e.mB))(mtype(manifest[A]),implicitly[SourceContext])
    case _ => super.mirror(e,f)
  }).asInstanceOf[Exp[A]]
}
//trait TupledFunctionsExpExt extends TupledFunctionsExp with FunctionsExpExt
trait TupledFunctionsRecursiveExpExt extends TupledFunctionsRecursiveExp with TupledFunctionsExpExt

trait CGenFunctionsExt extends CGenFunctions {

  val IR: FunctionsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case LambdaInput(name, fun, x, y) =>
      stream.println("SM_INPUT("+ name + "," +quote(sym)+","+quote(x)+") {")
      emitBlock(y)
      stream.println("};")
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
    case LambdaInput(name, fun, UnboxedTuple(xs), y) =>
      stream.println("SM_INPUT("+ name + "," + quote(sym) + "," +xs.map(s=>quote(s)).mkString(",")+") {")
      emitBlock(y)
      stream.println("};")
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