package be.kuleuven.FRP_EMBEDDED


import scala.lms.common._
import scala.reflect.SourceContext

trait Pointers extends Variables with ReadPtrImplicit {
  type Ptr[+T] //FIXME: should be invariant

  //implicit def chainReadVar[T,U](x: Var[T])(implicit f: Rep[T] => U): U = f(readVar(x))
  def ptr_new[T:Typ](init: Rep[T])(implicit pos: SourceContext): Ptr[T]
  //def ptr_new[T:Typ](init: Ptr[T])(implicit pos: SourceContext): Ptr[T]
  //def ptr_assign[T:Typ](lhs: Ptr[T], rhs: Ptr[T])(implicit pos: SourceContext): Rep[Unit]
  def ptr_assignToVal[T:Typ](lhs: Ptr[T], rhs: Rep[T])(implicit pos: SourceContext): Rep[Unit]
  def repptr_ptr[T:Typ](init: Rep[Ptr[T]])(implicit pos: SourceContext): Ptr[T]
}

// ReadVar is factored out so that it does not have higher priority than VariableImplicits when mixed in
// (which result in ambiguous conversions)
trait ReadPtrImplicit {
  this: Pointers =>

  implicit def ptr_readVal[T:Typ](p: Ptr[T])(implicit pos: SourceContext) : Rep[T]
  implicit def repptr_readVal[T:Typ](p: Rep[Ptr[T]])(implicit pos: SourceContext) : Rep[T]
  implicit def repptr_readVal[T:Typ](p: Rep[Ptr[T]], index: Int) : Rep[T]
}

trait ReadPtrImplicitExp extends EffectExp {
  this: PointersExp =>

  implicit def ptr_readVal[T:Typ](p: Ptr[T])(implicit pos: SourceContext) : Exp[T] = ReadPtr(p)
  implicit def repptr_readVal[T:Typ](p: Rep[Ptr[T]])(implicit pos: SourceContext) : Exp[T] = ReadRepPtr(p)
  implicit def repptr_readVal[T:Typ](p: Rep[Ptr[T]], index: Int) : Exp[T] = ReadRepPtrIndexed(p,index)
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
  case class ReadRepPtr[T:Typ](v: Rep[Ptr[T]]) extends Def[T]
  case class ReadRepPtrIndexed[T:Typ](v: Rep[Ptr[T]], index: Int) extends Def[T]
  case class NewPtr[T:Typ](init: Exp[T]) extends Def[Pointer[T]] {
    def m = manifest[T]
  }

  case class NewPtrFromPtr[T:Typ](init: Exp[Ptr[T]]) extends Def[Pointer[T]] {
    def m = manifest[T]
  }

  case class AssignToVal[T:Typ](lhs: Ptr[T], rhs: Exp[T]) extends Def[Unit] {
    def m = manifest[T]
  }

  override def ptr_new[T:Typ](init: Exp[T])(implicit pos: SourceContext): Ptr[T] = {
    //reflectEffect(NewVar(init)).asInstanceOf[Var[T]]
    Pointer(reflectMutable(NewPtr(init)))
  }

  def repptr_ptr[T:Typ](init: Rep[Ptr[T]])(implicit pos: SourceContext): Ptr[T] = {
    Pointer(reflectMutable(NewPtrFromPtr(init)))
  }

  override def ptr_assignToVal[T:Typ](lhs: Ptr[T], rhs: Exp[T])(implicit pos: SourceContext): Exp[Unit] = {
    reflectWrite(lhs.e)(AssignToVal(lhs, rhs))
    Const()
  }

  override def aliasSyms(e: Any): List[Sym[Any]] = e match {
    case _ => super.aliasSyms(e)
  }

  override def containSyms(e: Any): List[Sym[Any]] = e match {
    case _ => super.containSyms(e)
  }

  override def extractSyms(e: Any): List[Sym[Any]] = e match {
    case _ => super.extractSyms(e)
  }

  override def copySyms(e: Any): List[Sym[Any]] = e match {
    case _ => super.copySyms(e)
  }

  override def mirror[A:Typ](e: Def[A], f: Transformer)(implicit pos: SourceContext): Exp[A] = e match {
    case _ => super.mirror(e,f)
  }
}

trait CLikeGenPointers extends SMCLikeCodeGen {
  val IR: PointersExp
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case ReadPtr(Pointer(p)) => emitValDef(sym, "*"+quote(p))
    case ReadRepPtr(p) => emitValDef(sym, "*"+quote(p))
    case ReadRepPtrIndexed(p,i) => emitValDef(sym, quote(p)+"["+i+"]")
    case NewPtr(init) => emitPtrDef(sym.asInstanceOf[Sym[Ptr[Any]]], "&"+quote(init))
    case NewPtrFromPtr(init) => emitPtrDef(sym.asInstanceOf[Sym[Ptr[Any]]], quote(init))
    case AssignToVal(Pointer(p), b) => stream.println("*" + quote(p) + " = " + quote(b) + ";")
    case _ => super.emitNode(sym, rhs)
  }
}

trait CGenPointers extends CGenEffect with CLikeGenPointers
