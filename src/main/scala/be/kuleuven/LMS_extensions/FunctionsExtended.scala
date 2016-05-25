package be.kuleuven.LMS_extensions

import scala.lms.common._
import scala.reflect.SourceContext

trait FunctionsExt extends Functions {

  def doApplyDecl[A:Typ,B:Typ](fun: Rep[A => B])(implicit pos: SourceContext): Rep[B]
  def doApplyOut[A:Typ,B:Typ,C](funName: String, fun: Rep[A=>B], arg: Rep[C])(implicit pos: SourceContext): Rep[B]

  def doLambdaTimer[A:Typ,B:Typ](fun: Rep[A] => Rep[B])(implicit pos: SourceContext): Rep[A => B]
  def doLambdaMain[A:Typ,B:Typ](fun: Rep[A] => Rep[B])(implicit pos: SourceContext): Rep[A => B]
  def doLambdaInput[A:Typ,B:Typ](moduleName: String, funName: String)(fun: Rep[A] => Rep[B])(implicit pos: SourceContext): Rep[A => B]
  def doLambdaOutput[A:Typ,B:Typ](moduleName: String, funName: String)(fun: Rep[A] => Rep[B])(implicit pos: SourceContext): Rep[A => B]
  def doLambdaEntry[A:Typ,B:Typ](moduleName: String, funName: String)(fun: Rep[A] => Rep[B])(implicit pos: SourceContext): Rep[A => B]

  def doNamedLambda[A:Typ,B:Typ](moduleName: String)(fun: Rep[A] => Rep[B])(implicit pos: SourceContext): Rep[A => B]
  def namedfun1[A:Typ,B:Typ](moduleName: String)(f: Rep[A] => Rep[B]): Rep[A=>B] = doNamedLambda(moduleName)(f)

  def doStaticLambda[A:Typ,B:Typ](fun: Rep[A] => Rep[B])(implicit pos: SourceContext): Rep[A => B]
  def staticfun[A:Typ,B:Typ](f: Rep[A] => Rep[B]): Rep[A=>B] = doStaticLambda(f)
}

trait FunctionsExpExt extends FunctionsExp with FunctionsExt {

  case class StaticLambda[A:Typ,B:Typ](f: Exp[A] => Exp[B], x: Exp[A], y: Block[B]) extends Def[A => B] { val mA = manifest[A]; val mB = manifest[B] }

  case class NamedLambda[A:Typ,B:Typ](moduleName: String, f: Exp[A] => Exp[B], x: Exp[A], y: Block[B]) extends Def[A => B] { val mA = manifest[A]; val mB = manifest[B] }
  case class NamedLambdaInput[A:Typ,B:Typ](moduleName: String,funName: String, f: Exp[A] => Exp[B], x: Exp[A], y: Block[B]) extends Def[A => B] { val mA = manifest[A]; val mB = manifest[B] }
  case class NamedLambdaMain[A:Typ,B:Typ](f: Exp[A] => Exp[B], x: Exp[A], y: Block[B]) extends Def[A => B] { val mA = manifest[A]; val mB = manifest[B] }
  case class NamedLambdaTimer[A:Typ,B:Typ](f: Exp[A] => Exp[B], x: Exp[A], y: Block[B]) extends Def[A => B] { val mA = manifest[A]; val mB = manifest[B] }
  case class NamedLambdaOutput[A:Typ,B:Typ](moduleName: String,funName: String, f: Exp[A] => Exp[B], x: Exp[A], y: Block[B]) extends Def[A => B] { val mA = manifest[A]; val mB = manifest[B] }
  case class NamedLambdaEntry[A:Typ,B:Typ](moduleName: String, funName: String, f: Exp[A] => Exp[B], x: Exp[A], y: Block[B]) extends Def[A => B] { val mA = manifest[A]; val mB = manifest[B] }
  case class ApplyDecl[A:Typ,B:Typ](f: Exp[A => B]) extends Def[B] { val mA = manifest[A]; val mB = manifest[B] }
  case class ApplyOut[A:Typ,B:Typ,C](funName: String, f: Exp[A => B], arg: Exp[C]) extends Def[B] { val mA = manifest[A]; val mB = manifest[B] }

  override def doApplyDecl[A:Typ,B:Typ](f: Exp[A => B])(implicit pos: SourceContext): Exp[B] = {
    //val x1 = unbox(x) // no need for anymore
    f match {
      case Def(Lambda(_,_,y)) =>
        val ye = summarizeEffects(y)
        reflectEffect(ApplyDecl(f), ye)
      case Def(NamedLambda(_,_,_,y)) =>
        val ye = summarizeEffects(y)
        reflectEffect(ApplyDecl(f), ye)
      case Def(NamedLambdaMain(_,_,y)) =>
        val ye = summarizeEffects(y)
        reflectEffect(ApplyDecl(f), ye)
      case Def(NamedLambdaTimer(_,_,y)) =>
        val ye = summarizeEffects(y)
        reflectEffect(ApplyDecl(f), ye)
      case Def(NamedLambdaInput(_,_,_,_,y)) =>
        val ye = summarizeEffects(y)
        reflectEffect(ApplyDecl(f), ye)
      case Def(NamedLambdaOutput(_,_,_,_,y)) =>
        val ye = summarizeEffects(y)
        reflectEffect(ApplyDecl(f), ye)
      case Def(NamedLambdaEntry(_,_,_,_,y)) =>
        val ye = summarizeEffects(y)
        reflectEffect(ApplyDecl(f), ye)
      case _ =>
        reflectEffect(ApplyDecl(f))
    }
  }

  def doStaticLambdaDef[A:Typ,B:Typ](f: Exp[A] => Exp[B]) : Def[A => B] = {
    val x = unboxedFresh[A]
    val y = reifyEffects(f(x)) // unfold completely at the definition site.

    StaticLambda(f, x, y)
  }

  override def doStaticLambda[A:Typ,B:Typ](f: Exp[A] => Exp[B])(implicit pos: SourceContext): Exp[A => B] =
    doStaticLambdaDef(f)

  override def doApplyOut[A:Typ,B:Typ,C](funName: String, f: Exp[A => B], arg: Exp[C])(implicit pos: SourceContext): Exp[B] = {
    //val x1 = unbox(arg) // no need for anymore
    f match {
      case Def(NamedLambdaOutput(_,_,_,_,y)) =>
        val ye = summarizeEffects(y)
        reflectEffect(ApplyOut(funName, f, arg), ye)
      case _ =>
        reflectEffect(ApplyOut(funName, f, arg))
    }
  }

  def doNamedLambdaMainDef[A:Typ,B:Typ](fun: Exp[A] => Exp[B]): Def[A=>B] = {
    val x = unboxedFresh[A]
    val y = reifyEffects(fun(x)) // unfold completely at the definition site.

    NamedLambdaMain(fun, x, y)
  }

  override def doLambdaMain[A:Typ,B:Typ](fun: Exp[A] => Exp[B])(implicit pos: SourceContext): Exp[A => B] =
    doNamedLambdaMainDef(fun)

  def doNamedLambdaTimerDef[A:Typ,B:Typ](fun: Exp[A] => Exp[B]): Def[A=>B] = {
    val x = unboxedFresh[A]
    val y = reifyEffects(fun(x)) // unfold completely at the definition site.

    NamedLambdaTimer(fun, x, y)
  }

  override def doLambdaTimer[A:Typ,B:Typ](fun: Exp[A] => Exp[B])(implicit pos: SourceContext): Exp[A => B] =
    doNamedLambdaTimerDef(fun)

  def doNamedLambdaInputDef[A:Typ,B:Typ](moduleName: String, funName: String)(f: Exp[A] => Exp[B]) : Def[A => B] = {
    val x = unboxedFresh[A]
    val y = reifyEffects(f(x)) // unfold completely at the definition site.

    NamedLambdaInput(moduleName, funName, f, x, y)
  }

  override def doLambdaInput[A:Typ,B:Typ](moduleName: String, funName: String)(f: Exp[A] => Exp[B])(implicit pos: SourceContext): Exp[A => B] =
    doNamedLambdaInputDef(moduleName,funName)(f)

  def doNamedLambdaOutputDef[A:Typ,B:Typ](moduleName: String, funName: String)(f: Exp[A] => Exp[B]) : Def[A => B] = {
    val x = unboxedFresh[A]
    val y = reifyEffects(f(x)) // unfold completely at the definition site.

    NamedLambdaOutput(moduleName, funName, f, x, y)
  }

  override def doLambdaOutput[A:Typ,B:Typ](moduleName: String, funName: String)(f: Exp[A] => Exp[B])(implicit pos: SourceContext): Exp[A => B] =
    doNamedLambdaOutputDef(moduleName,funName)(f)

  def doNamedLambdaEntryDef[A:Typ,B:Typ](moduleName: String, funName: String)(f: Exp[A] => Exp[B]) : Def[A => B] = {
    val x = unboxedFresh[A]
    val y = reifyEffects(f(x)) // unfold completely at the definition site.

    NamedLambdaEntry(moduleName, funName, f, x, y)
  }

  override def doLambdaEntry[A:Typ,B:Typ](moduleName: String, funName: String)(f: Exp[A] => Exp[B])(implicit pos: SourceContext): Exp[A => B] =
    doNamedLambdaEntryDef(moduleName,funName)(f)

  def doNamedLambdaDef[A:Typ,B:Typ](name: String)(f: Exp[A] => Exp[B]) : Def[A => B] = {
    val x = unboxedFresh[A]
    val y = reifyEffects(f(x)) // unfold completely at the definition site.

    NamedLambda(name, f, x, y)
  }

  override def doNamedLambda[A:Typ,B:Typ](name: String)(f: Exp[A] => Exp[B])(implicit pos: SourceContext): Exp[A => B] =
    doNamedLambdaDef(name)(f)

  override def mirror[A:Typ](e: Def[A], f: Transformer)(implicit pos: SourceContext): Exp[A] = (e match {
    case e@StaticLambda(g,x:Exp[Any],y:Block[b]) => toAtom(StaticLambda(f(g),f(x),f(y))(e.mA,e.mB))(mtype(manifest[A]),pos)
    case e@NamedLambdaMain(g,x:Exp[Any],y:Block[b]) => toAtom(NamedLambdaMain(f(g),f(x),f(y))(e.mA,e.mB))(mtype(manifest[A]),pos)
    case e@NamedLambdaTimer(g,x:Exp[Any],y:Block[b]) => toAtom(NamedLambdaTimer(f(g),f(x),f(y))(e.mA,e.mB))(mtype(manifest[A]),pos)
    case e@NamedLambdaInput(mn, fn, g,x:Exp[Any],y:Block[b]) => toAtom(NamedLambdaInput(mn, fn, f(g),f(x),f(y))(e.mA,e.mB))(mtype(manifest[A]),pos)
    case e@NamedLambdaOutput(mn, fn, g,x:Exp[Any],y:Block[b]) => toAtom(NamedLambdaOutput(mn, fn, f(g),f(x),f(y))(e.mA,e.mB))(mtype(manifest[A]),pos)
    case e@NamedLambdaEntry(mn, fn, g,x:Exp[Any],y:Block[b]) => toAtom(NamedLambdaEntry(mn, fn, f(g),f(x),f(y))(e.mA,e.mB))(mtype(manifest[A]),pos)
    case e@NamedLambda(n, g,x:Exp[Any],y:Block[b]) => toAtom(NamedLambda(n, f(g),f(x),f(y))(e.mA,e.mB))(mtype(manifest[A]),pos)
    case _ => super.mirror(e,f)
  }).asInstanceOf[Exp[A]] // why??

  override def syms(e: Any): List[Sym[Any]] = e match {
    case StaticLambda(f, x, y) => syms(y)
    case NamedLambdaMain(f, x, y) => syms(y)
    case NamedLambdaTimer(f, x, y) => syms(y)
    case NamedLambdaInput(_, _, f, x, y) => syms(y)
    case NamedLambdaOutput(_, _, f, x, y) => syms(y)
    case NamedLambdaEntry(_, _, f, x, y) => syms(y)
    case NamedLambda(_, f, x, y) => syms(y)
    case _ => super.syms(e)
  }

  override def boundSyms(e: Any): List[Sym[Any]] = e match {
    case StaticLambda(f, x, y) => syms(x) ::: effectSyms(y)
    case NamedLambdaMain(f, x, y) => syms(x) ::: effectSyms(y)
    case NamedLambdaTimer(f, x, y) => syms(x) ::: effectSyms(y)
    case NamedLambdaInput(_, _, f, x, y) => syms(x) ::: effectSyms(y)
    case NamedLambdaOutput(_, _, f, x, y) => syms(x) ::: effectSyms(y)
    case NamedLambdaEntry(_, _, f, x, y) => syms(x) ::: effectSyms(y)
    case NamedLambda(_, f, x, y) => syms(x) ::: effectSyms(y)
    case _ => super.boundSyms(e)
  }

  override def symsFreq(e: Any): List[(Sym[Any], Double)] = e match {
    case StaticLambda(f, x, y) => freqHot(y)
    case NamedLambdaMain(f, x, y) => freqHot(y)
    case NamedLambdaTimer(f, x, y) => freqHot(y)
    case NamedLambdaInput(_, _, f, x, y) => freqHot(y)
    case NamedLambdaOutput(_, _, f, x, y) => freqHot(y)
    case NamedLambdaEntry(_, _, f, x, y) => freqHot(y)
    case NamedLambda(_, f, x, y) => freqHot(y)
    case _ => super.symsFreq(e)
  }
}

trait TupledFunctionsExt extends TupledFunctions with FunctionsExt with TupleOpsExt {

  def staticfun0[B:Typ](f: () => Rep[B]): Rep[Unit=>B] =
    doStaticLambda((t: Rep[Unit]) => f())

  def namedfun0[B:Typ](name: String)(f: () => Rep[B]): Rep[Unit=>B] =
    doNamedLambda(name)((t: Rep[Unit]) => f())
  def namedfun2[A1:Typ,A2:Typ,B:Typ](name: String)(f: (Rep[A1], Rep[A2]) => Rep[B]): Rep[((A1,A2))=>B] =
    doNamedLambda(name)((t: Rep[(A1,A2)]) => f(tuple2_get1(t), tuple2_get2(t)))
  def namedfun3[A1:Typ,A2:Typ,A3:Typ,B:Typ](name: String)(f: (Rep[A1], Rep[A2],Rep[A3]) => Rep[B]): Rep[((A1,A2,A3))=>B] =
    doNamedLambda(name)((t: Rep[(A1,A2,A3)]) => f(tuple3_get1(t), tuple3_get2(t), tuple3_get3(t)))
  def namedfun4[A1:Typ,A2:Typ,A3:Typ,A4:Typ,B:Typ](name: String)(f: (Rep[A1], Rep[A2],Rep[A3],Rep[A4]) => Rep[B]): Rep[((A1,A2,A3,A4))=>B] =
    doNamedLambda(name)((t: Rep[(A1,A2,A3,A4)]) => f(tuple4_get1(t), tuple4_get2(t), tuple4_get3(t), tuple4_get4(t)))
  def namedfun5[A1:Typ,A2:Typ,A3:Typ,A4:Typ,A5:Typ,B:Typ](name: String)(f: (Rep[A1], Rep[A2],Rep[A3],Rep[A4],Rep[A5]) => Rep[B]): Rep[((A1,A2,A3,A4,A5))=>B] =
    doNamedLambda(name)((t: Rep[(A1,A2,A3,A4,A5)]) => f(tuple5_get1(t), tuple5_get2(t), tuple5_get3(t), tuple5_get4(t), tuple5_get5(t)))
  def namedfun6[A1:Typ,A2:Typ,A3:Typ,A4:Typ,A5:Typ,A6:Typ,B:Typ](name: String)(f: (Rep[A1], Rep[A2],Rep[A3],Rep[A4],Rep[A5],Rep[A6]) => Rep[B]): Rep[((A1,A2,A3,A4,A5,A6))=>B] =
    doNamedLambda(name)((t: Rep[(A1,A2,A3,A4,A5,A6)]) => f(tuple6_get1(t), tuple6_get2(t), tuple6_get3(t), tuple6_get4(t), tuple6_get5(t), tuple6_get6(t)))

  def mainfun(f: () => Rep[Int])(implicit typInt: Typ[Int]): Rep[Unit=>Int] = {
    doLambdaMain((t: Rep[Unit]) => f())
  }
  def timercallback(f: () => Rep[Unit]): Rep[Unit=>Unit] = {
    doLambdaTimer((t: Rep[Unit]) => f())
  }
  def inputfun[A1:Typ,A2:Typ,B:Typ](moduleName: String, funName: String)(f: (Rep[A1], Rep[A2]) => Rep[B]): Rep[((A1,A2))=>B] =
    doLambdaInput(moduleName, funName)(   (t: Rep[(A1,A2)]) => f(tuple2_get1(t), tuple2_get2(t))   )
  def outputfun[A1:Typ,A2:Typ,B:Typ](moduleName: String, funName: String)(f: (Rep[A1], Rep[A2]) => Rep[B]): Rep[((A1,A2))=>B] =
    doLambdaOutput(moduleName, funName)(   (t: Rep[(A1,A2)]) => f(tuple2_get1(t), tuple2_get2(t))   )
  def entryfun0[B:Typ](moduleName: String, funName: String)(f: () => Rep[B]): Rep[Unit=>B] =
    doLambdaEntry(moduleName, funName)((t: Rep[Unit]) => f())


  class LambdaOps6[A1:Typ,A2:Typ,A3:Typ,A4:Typ,A5:Typ,A6:Typ,B:Typ](f: Rep[((A1,A2,A3,A4,A5,A6)) => B]) {
    def apply(x1: Rep[A1], x2: Rep[A2], x3: Rep[A3], x4: Rep[A4], x5: Rep[A5], x6: Rep[A6]) = doApply(f,(x1, x2, x3, x4, x5,x6))
    def apply(x: Rep[(A1,A2,A3,A4,A5,A6)]): Rep[B] = doApply(f,x)
  }
  //implicit def toLambdaOpsAny[B:Typ](fun: Rep[Any => B]) =
  //  toLambdaOps(fun)
  implicit def toLambdaOps6[A1:Typ,A2:Typ,A3:Typ,A4:Typ,A5:Typ,A6:Typ,B:Typ](fun: Rep[((A1,A2,A3,A4,A5,A6)) => B]) =
    new LambdaOps6(fun)
}

trait TupledFunctionsExpExt extends TupledFunctionsExp with TupledFunctionsExt with FunctionsExpExt {
  override def boundSyms(e: Any): List[Sym[Any]] = e match {
    case StaticLambda(f, UnboxedTuple(xs), y) => xs.flatMap(syms) ::: effectSyms(y)
    case NamedLambdaMain(f, UnboxedTuple(xs), y) => xs.flatMap(syms) ::: effectSyms(y)
    case NamedLambdaTimer(f, UnboxedTuple(xs), y) => xs.flatMap(syms) ::: effectSyms(y)
    case NamedLambdaInput(_,_, f, UnboxedTuple(xs), y) => xs.flatMap(syms) ::: effectSyms(y)
    case NamedLambdaOutput(_,_, f, UnboxedTuple(xs), y) => xs.flatMap(syms) ::: effectSyms(y)
    case NamedLambdaEntry(_,_, f, UnboxedTuple(xs), y) => xs.flatMap(syms) ::: effectSyms(y)
    case NamedLambda(_, f, UnboxedTuple(xs), y) => xs.flatMap(syms) ::: effectSyms(y)
    case _ => super.boundSyms(e)
  }

  override def mirror[A:Typ](e: Def[A], f: Transformer)(implicit pos: SourceContext): Exp[A] = (e match {
    case e@StaticLambda(g,UnboxedTuple(xs),y:Block[b]) => toAtom(StaticLambda(f(g),UnboxedTuple(f(xs))(e.mA),f(y))(e.mA,e.mB))(mtype(manifest[A]),implicitly[SourceContext])
    case e@NamedLambdaMain(g,UnboxedTuple(xs),y:Block[b]) => toAtom(NamedLambdaMain(f(g),UnboxedTuple(f(xs))(e.mA),f(y))(e.mA,e.mB))(mtype(manifest[A]),implicitly[SourceContext])
    case e@NamedLambdaTimer(g,UnboxedTuple(xs),y:Block[b]) => toAtom(NamedLambdaTimer(f(g),UnboxedTuple(f(xs))(e.mA),f(y))(e.mA,e.mB))(mtype(manifest[A]),implicitly[SourceContext])
    case e@NamedLambdaInput(mn, fn, g,UnboxedTuple(xs),y:Block[b]) => toAtom(NamedLambdaInput(mn, fn, f(g),UnboxedTuple(f(xs))(e.mA),f(y))(e.mA,e.mB))(mtype(manifest[A]),implicitly[SourceContext])
    case e@NamedLambdaOutput(mn, fn, g,UnboxedTuple(xs),y:Block[b]) => toAtom(NamedLambdaOutput(mn, fn, f(g),UnboxedTuple(f(xs))(e.mA),f(y))(e.mA,e.mB))(mtype(manifest[A]),implicitly[SourceContext])
    case e@NamedLambdaEntry(mn, fn, g,UnboxedTuple(xs),y:Block[b]) => toAtom(NamedLambdaEntry(mn, fn, f(g),UnboxedTuple(f(xs))(e.mA),f(y))(e.mA,e.mB))(mtype(manifest[A]),implicitly[SourceContext])
    case e@NamedLambda(n, g,UnboxedTuple(xs),y:Block[b]) => toAtom(NamedLambda(n, f(g),UnboxedTuple(f(xs))(e.mA),f(y))(e.mA,e.mB))(mtype(manifest[A]),implicitly[SourceContext])
    case _ => super.mirror(e,f)
  }).asInstanceOf[Exp[A]]

  private def tupledTyp[T](m: Typ[T]): Boolean = m.erasure.getName startsWith "scala.Tuple"
  private def tupledTypOf[T](m: Typ[T], arity: Int): Boolean = m.erasure.getName == "scala.Tuple" + arity

  override def unbox[A:Typ](x : Exp[A])(implicit pos: SourceContext) : Exp[A] = {
    val mA = implicitly[Typ[A]]
    x match {
      case _ if tupledTypOf(mA, 6) =>
        x match { case t : Rep[(a1,a2,a3,a4,a5,a6)] @unchecked =>
          UnboxedTuple[A](List(
            tuple6_get1(t)(mA.typeArguments(0).asInstanceOf[Typ[a1]], pos),
            tuple6_get2(t)(mA.typeArguments(1).asInstanceOf[Typ[a2]], pos),
            tuple6_get3(t)(mA.typeArguments(2).asInstanceOf[Typ[a3]], pos),
            tuple6_get4(t)(mA.typeArguments(3).asInstanceOf[Typ[a4]], pos),
            tuple6_get5(t)(mA.typeArguments(4).asInstanceOf[Typ[a5]], pos),
            tuple6_get6(t)(mA.typeArguments(5).asInstanceOf[Typ[a6]], pos)))
        }
      case _ => super.unbox(x)
    }
  }
}
//trait TupledFunctionsExpExt extends TupledFunctionsExp with FunctionsExpExt
trait TupledFunctionsRecursiveExpExt extends TupledFunctionsRecursiveExp with TupledFunctionsExpExt

trait GenericGenUnboxedTupleAccessExt extends GenericGenUnboxedTupleAccess {
  val IR: TupledFunctionsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case FieldApply(UnboxedTuple(vars), "_6") => emitValDef(sym, quote(vars(5)))
    case _ => super.emitNode(sym, rhs)
  }
}

trait CGenFunctionsExt extends CGenFunctions {
  val IR: FunctionsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case StaticLambda(fun,x,y) =>
      /*val retType = remap(getBlockResult(y).tp)
      stream.println("static " + retType+" "+quote(sym)+" (" + remap(x.tp) + " " + quote(x) + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")*/
    case NamedLambdaTimer(fun, x, y) => // nothing
    case NamedLambdaMain(fun, x, y) =>
      /*val retType = remap(getBlockResult(y).tp)
      stream.println(retType + " " + "main" + "(" + remap(x.tp) + " " + quote(x) + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")*/
    case NamedLambdaInput(_, funname, fun, x, y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType + " " + quote(sym) + "(" + remap(x.tp) + " " + quote(x) + ") { //" + funname)
      //stream.println(retType + " " + funname + "(" + remap(x.tp) + " " + quote(x) + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case NamedLambdaOutput(_,funname, fun, x, y) => //TODO: remove, output with 1 arg should not exist
      val retType = remap(getBlockResult(y).tp)
      //stream.println(retType + " " + quote(sym) + "(" + remap(x.tp) + " " + quote(x) + ") {")
      stream.println(retType + " " + quote(sym) + "(" + remap(x.tp) + " " + quote(x) + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case NamedLambdaEntry(_, funname, fun, x, y) =>
      val retType = remap(getBlockResult(y).tp)
      //stream.println(retType + " " + quote(sym) + "(" + remap(x.tp) + " " + quote(x) + ") {")
      stream.println(retType + " " + funname + "(" + remap(x.tp) + " " + quote(x) + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case NamedLambda(_, fun, x, y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType + " " + quote(sym) + "(" + remap(x.tp) + " " + quote(x) + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case e@Lambda(fun, x, y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType+" "+quote(sym)+" (" + remap(x.tp) + " " + quote(x) + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case Apply(fun, arg) =>
      emitValDef(sym, quote(fun) + "(" + quote(arg) + ")")
    case ApplyDecl(fun) =>
    //do nothing - only for effect - used for main fun or top level functions
    case ApplyOut(funName, fun, arg) =>
      stream.println(quote(fun) + "((uint8_t*)&" + quote(arg) + ", sizeof(" + quote(arg) + "));")
    case _ => super.emitNode(sym, rhs)
  }
}

trait CGenTupledFunctionsExt extends CGenFunctionsExt with GenericGenUnboxedTupleAccessExt {
  val IR: TupledFunctionsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case StaticLambda(fun, UnboxedTuple(xs), y) =>
      /*val retType = remap(getBlockResult(y).tp)
      stream.println("static " + retType + " " + quote(sym) + " (" + xs.map(s=>remap(s.tp) + " " + quote(s)).mkString(",") + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")*/
    case NamedLambdaTimer(fun, UnboxedTuple(xs), y) => // nothing
    case NamedLambdaMain(fun, UnboxedTuple(xs), y) =>
      /*val retType = remap(getBlockResult(y).tp)
      stream.println(retType + " " + "main" + "(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") +") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")*/
    case NamedLambdaInput(_, funname, fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType + " " + quote(sym) + "(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") +") { //" + funname)
      //stream.println(retType + " " + funname + "(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") +") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case NamedLambdaOutput(_, funname, fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      //stream.println(retType + " " + quote(sym) + "(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") +") {")
      stream.println(retType + " " + quote(sym) + "(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") +") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case NamedLambdaEntry(_, funname, fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      //stream.println(retType + " " + quote(sym) + "(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") +") {")
      stream.println(retType + " " + funname + "(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") +") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case NamedLambda(_, fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType + " " +quote(sym) +"(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case Lambda(fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType + " " + quote(sym) + " (" + xs.map(s=>remap(s.tp) + " " + quote(s)).mkString(",") + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case Apply(fun, UnboxedTuple(args)) =>
      emitValDef(sym, quote(fun) + args.map(quote).mkString("(", ",", ")"))
    case ApplyDecl(fun) =>
    //do nothing
    case ApplyOut(funName, fun, UnboxedTuple(args)) =>
      throw new Exception("Should not happen to a ApplyOut")
    case _ => super.emitNode(sym,rhs)
  }
}

trait SMCGenFunctionsExt extends CGenFunctions {
  val IR: FunctionsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case e@StaticLambda(fun, x, y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println("static " + retType +" "+quote(sym)+" ("+remap(x.tp)+" "+quote(x)+") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("}")
    case NamedLambdaTimer(fun, x, y) => throw new Exception("Timerhandler should not have arguments.")
    case NamedLambdaMain(fun, x, y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType + " " + "main" + "(" + remap(x.tp) + " " + quote(x) + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case NamedLambdaInput(name,funname, fun, x, y) =>
      stream.println("SM_INPUT("+ name + "," + quote(sym) + "," + quote(x) +") { //" + funname)
      //stream.println("SM_INPUT("+ name + "," + funname + "," + quote(x) +") {")
      emitBlock(y)
      stream.println("}")
    case NamedLambdaOutput(name,funname, fun, x, y) => //TODO: remove, output with 1 arg should not exist
      stream.println("SM_OUTPUT("+ name + "," + quote(sym) + ");")
      //stream.println("SM_OUTPUT("+ name + "," + funname + ");")
    case NamedLambdaEntry(name, funname, fun, x, y) =>
      val retType = remap(getBlockResult(y).tp)
      //stream.println("SM_ENTRY("+ name + ") " + retType + " " + quote(sym) + "(" + remap(x.tp) + " " + quote(x) + ") {")
      stream.println("SM_ENTRY("+ name + ") " + retType + " " + funname + "(" + remap(x.tp) + " " + quote(x) + ") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("}")
    case e@NamedLambda(name, fun, x, y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println("SM_FUNC(" + name + ") " + retType +" "+quote(sym)+" ("+remap(x.tp)+" "+quote(x)+") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("}")
    case e@Lambda(fun, x, y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType +" "+quote(sym)+" ("+remap(x.tp)+" "+quote(x)+") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("}")
    case Apply(fun, arg) =>
      emitValDef(sym, quote(fun) + "(" + quote(arg) + ")")
    case ApplyDecl(fun) =>
    //do nothing - only for effect - used for main fun or top level functions
    case ApplyOut(funName, fun, arg) =>
      stream.println(quote(fun) + "((const uint8_t*)&" + quote(arg) + ", sizeof(" + quote(arg) + "));")
      //stream.println(funName + "((const uint8_t*)&" + quote(arg) + ", sizeof(" + quote(arg) + "));")
    case _ => super.emitNode(sym, rhs)
  }
}

trait SMCGenTupledFunctionsExt extends SMCGenFunctionsExt with GenericGenUnboxedTupleAccessExt {
  val IR: TupledFunctionsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case StaticLambda(fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println("static " + retType+" "+quote(sym)+" ("+xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",")+") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("}")
    case NamedLambdaMain(fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType + " " + "main" + "(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") +") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case NamedLambdaTimer(fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType + " " + "timer_handler" + "(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") +") {")
      stream.println("tsc_t time = tsc_read();")
      stream.println("static int intervals_5s = 0;")
      stream.println("int currTime = (float)time / 100000000;\n")
      stream.println("if(currTime > intervals_5s){\n")
      stream.println("intervals_5s = currTime;\n")
      emitBlock(y)
      stream.println("}\n")
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("};")
    case NamedLambdaInput(name, funname, fun, UnboxedTuple(xs), y) =>
      stream.println("SM_INPUT("+ name + "," + quote(sym) + "," +xs.map(s=>quote(s)).mkString(",")+") { //" + funname)
      //stream.println("SM_INPUT("+ name + "," + funname + "," +xs.map(s=>quote(s)).mkString(",")+") {")
      emitBlock(y)
      stream.println("}")
    case NamedLambdaOutput(name, funname, fun, UnboxedTuple(xs), y) =>
      stream.println("SM_OUTPUT("+ name + "," + quote(sym) + ");")
      //stream.println("SM_OUTPUT("+ name + "," + funname + ");")
    case NamedLambdaEntry(name, funname, fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      //stream.println("SM_ENTRY("+ name + ") " + retType + " " + quote(sym) + "(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") +") {")
      stream.println("SM_ENTRY("+ name + ") " + retType + " " + funname + "(" + xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",") +") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("}")
    case NamedLambda(name, fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println("SM_FUNC(" + name + ") " + retType+" "+quote(sym)+" ("+xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",")+") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("}")
    case Lambda(fun, UnboxedTuple(xs), y) =>
      val retType = remap(getBlockResult(y).tp)
      stream.println(retType+" "+quote(sym)+" ("+xs.map(s=>remap(s.tp)+" "+quote(s)).mkString(",")+") {")
      emitBlock(y)
      val z = getBlockResult(y)
      if (retType != "void")
        stream.println("return " + quote(z) + ";")
      stream.println("}")
    case Apply(fun, UnboxedTuple(args)) =>
      emitValDef(sym, quote(fun) + args.map(quote).mkString("(", ",", ")"))
    case ApplyDecl(fun) =>
    //do nothing
    case ApplyOut(funName, fun, UnboxedTuple(args)) =>
      throw new Exception("This should not happen to an ApplyOut")
    case _ => super.emitNode(sym,rhs)
  }
}
