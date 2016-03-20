package be.kuleuven.FRP_EMBEDDED


import scala.lms.common._
import scala.reflect.SourceContext

trait Pointers extends Variables {
  type Ptr[+T] //FIXME: should be invariant

  //implicit def chainReadVar[T,U](x: Var[T])(implicit f: Rep[T] => U): U = f(readVar(x))
  def ptr_new[T:Typ](init: Rep[T])(implicit pos: SourceContext): Ptr[T]
  //def ptr_new[T:Typ](init: Ptr[T])(implicit pos: SourceContext): Ptr[T]
  //def ptr_assign[T:Typ](lhs: Ptr[T], rhs: Ptr[T])(implicit pos: SourceContext): Rep[Unit]
  def ptr_assignToVal[T:Typ](lhs: Ptr[T], rhs: Rep[T])(implicit pos: SourceContext): Rep[Unit]

}

// ReadVar is factored out so that it does not have higher priority than VariableImplicits when mixed in
// (which result in ambiguous conversions)
trait ReadPtrImplicit {
  this: Pointers =>

  implicit def ptr_readVal[T:Typ](p: Ptr[T])(implicit pos: SourceContext) : Rep[T]
}

trait ReadPtrImplicitExp extends EffectExp {
  this: PointersExp =>

  implicit def ptr_readVal[T:Typ](p: Ptr[T])(implicit pos: SourceContext) : Exp[T] = ReadPtr(p)
}

trait PointersExp extends Pointers with VariablesExp with ExpressionsExt with ReadPtrImplicitExp {
  // REMARK:
  // defining Var[T] as Sym[T] is dangerous. If someone forgets to define a more-specific implicit conversion from
  // Var[T] to Ops, e.g. implicit def varToRepStrOps(s: Var[String]) = new RepStrOpsCls(varToRep(s))
  // then the existing implicit from Rep to Ops will be used, and the ReadVar operation will be lost.
  // Defining Vars as separate from Exps will always cause a compile-time error if the implicit is missing.

  //case class Variable[+T](val e: Exp[Variable[T]]) // FIXME: in Expressions because used by codegen...

  type Ptr[+T] = Pointer[T] //FIXME: should be invariant


  implicit def ptrTyp[T:Typ]: Typ[Ptr[T]] = {
    implicit val ManifestTyp(m) = typ[T]
    manifestTyp
  }

  case class ReadPtr[T:Typ](v: Ptr[T]) extends Def[T]
  case class NewPtr[T:Typ](init: Exp[T]) extends Def[Pointer[T]] {
    def m = manifest[T]
  }
  case class AssignToVal[T:Typ](lhs: Ptr[T], rhs: Exp[T]) extends Def[Unit] {
    def m = manifest[T]
  }

  override def ptr_new[T:Typ](init: Exp[T])(implicit pos: SourceContext): Ptr[T] = {
    //reflectEffect(NewVar(init)).asInstanceOf[Var[T]]
    Pointer(reflectMutable(NewPtr(init)))
  }

  override def ptr_assignToVal[T:Typ](lhs: Ptr[T], rhs: Exp[T])(implicit pos: SourceContext): Exp[Unit] = {
    reflectWrite(lhs.e)(AssignToVal(lhs, rhs))
    Const()
  }

  /*override def aliasSyms(e: Any): List[Sym[Any]] = e match {
    case NewVar(a) => Nil
    case ReadVar(Variable(a)) => Nil
    case Assign(Variable(a),b) => Nil
    case VarPlusEquals(Variable(a),b) => Nil
    case VarMinusEquals(Variable(a),b) => Nil
    case VarTimesEquals(Variable(a),b) => Nil
    case VarDivideEquals(Variable(a),b) => Nil
    case _ => super.aliasSyms(e)
  }

  override def containSyms(e: Any): List[Sym[Any]] = e match {
    case NewVar(a) => syms(a)
    case ReadVar(Variable(a)) => Nil
    case Assign(Variable(a),b) => syms(b)
    case VarPlusEquals(Variable(a),b) => syms(b)
    case VarMinusEquals(Variable(a),b) => syms(b)
    case VarTimesEquals(Variable(a),b) => syms(b)
    case VarDivideEquals(Variable(a),b) => syms(b)
    case _ => super.containSyms(e)
  }

  override def extractSyms(e: Any): List[Sym[Any]] = e match {
    case NewVar(a) => Nil
    case ReadVar(Variable(a)) => syms(a)
    case Assign(Variable(a),b) => Nil
    case VarPlusEquals(Variable(a),b) => syms(a)
    case VarMinusEquals(Variable(a),b) => syms(a)
    case VarTimesEquals(Variable(a),b) => syms(a)
    case VarDivideEquals(Variable(a),b) => syms(a)
    case _ => super.extractSyms(e)
  }

  override def copySyms(e: Any): List[Sym[Any]] = e match {
    case NewVar(a) => Nil
    case ReadVar(Variable(a)) => Nil
    case Assign(Variable(a),b) => Nil
    case VarPlusEquals(Variable(a),b) => Nil
    case VarMinusEquals(Variable(a),b) => Nil
    case VarTimesEquals(Variable(a),b) => Nil
    case VarDivideEquals(Variable(a),b) => Nil
    case _ => super.copySyms(e)
  }



  override def mirror[A:Typ](e: Def[A], f: Transformer)(implicit pos: SourceContext): Exp[A] = (e match {
    case ReadVar(Variable(a)) => readVar(Variable(f(a)))
    case Reflect(e@NewVar(a), u, es) => reflectMirrored(Reflect(NewVar(f(a))(e.m), mapOver(f,u), f(es)))(mtype(manifest[A]), pos)
    case Reflect(ReadVar(Variable(a)), u, es) => reflectMirrored(Reflect(ReadVar(Variable(f(a))), mapOver(f,u), f(es)))(mtype(manifest[A]), pos)
    case Reflect(e@Assign(Variable(a),b), u, es) => reflectMirrored(Reflect(Assign(Variable(f(a)), f(b))(e.m), mapOver(f,u), f(es)))(mtype(manifest[A]), pos)
    case Reflect(e@VarPlusEquals(Variable(a),b), u, es) => reflectMirrored(Reflect(VarPlusEquals(Variable(f(a)), f(b))(e.m), mapOver(f,u), f(es)))(mtype(manifest[A]), pos)
    case Reflect(e@VarMinusEquals(Variable(a),b), u, es) => reflectMirrored(Reflect(VarMinusEquals(Variable(f(a)), f(b))(e.m), mapOver(f,u), f(es)))(mtype(manifest[A]), pos)
    case Reflect(e@VarTimesEquals(Variable(a),b), u, es) => reflectMirrored(Reflect(VarTimesEquals(Variable(f(a)), f(b))(e.m), mapOver(f,u), f(es)))(mtype(manifest[A]), pos)
    case Reflect(e@VarDivideEquals(Variable(a),b), u, es) => reflectMirrored(Reflect(VarDivideEquals(Variable(f(a)), f(b))(e.m), mapOver(f,u), f(es)))(mtype(manifest[A]), pos)
    case _ => super.mirror(e,f)
  }).asInstanceOf[Exp[A]]
  */
}

trait CLikeGenPointers extends SMCLikeCodeGen {
  val IR: PointersExp
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case ReadPtr(Pointer(p)) => emitValDef(sym, "*"+quote(p))
    case NewPtr(init) => emitPtrDef(sym.asInstanceOf[Sym[Ptr[Any]]], "&"+quote(init))
    case AssignToVal(Pointer(p), b) => stream.println("*" + quote(p) + " = " + quote(b) + ";")
    case _ => super.emitNode(sym, rhs)
  }
}

trait CGenPointers extends CGenEffect with CLikeGenPointers
