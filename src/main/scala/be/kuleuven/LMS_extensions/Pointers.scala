package be.kuleuven.LMS_extensions

import scala.lms.common._
import scala.reflect.SourceContext

trait Pointers extends Variables with ReadPtrImplicit {
  type Ptr[+T] //FIXME: should be invariant

  def ptr_new[T:Typ](init: Rep[T])(implicit pos: SourceContext): Ptr[T]
  def ptr_assignToVal[T:Typ](lhs: Ptr[T], rhs: Rep[T])(implicit pos: SourceContext): Rep[Unit]
  def repptr_ptr[T:Typ](init: Rep[Ptr[T]])(implicit pos: SourceContext): Ptr[T]

  def reparray_repptr[T:Typ](init: Rep[Array[T]])(implicit pos: SourceContext): Ptr[T]
}

trait ReadPtrImplicit {
  this: Pointers =>

  implicit def ptr_readVal[T:Typ](p: Ptr[T])(implicit pos: SourceContext) : Rep[T]
  implicit def repptr_readVal[T:Typ](p: Rep[Ptr[T]])(implicit pos: SourceContext) : Rep[T]
  implicit def repptr_readVal[T:Typ](p: Rep[Ptr[T]], index: Rep[Int]) : Rep[T]
}

trait ReadPtrImplicitExp extends EffectExp {
  this: PointersExp =>

  implicit def ptr_readVal[T:Typ](p: Ptr[T])(implicit pos: SourceContext) : Exp[T] = ReadPtr(p)
  implicit def repptr_readVal[T:Typ](p: Rep[Ptr[T]])(implicit pos: SourceContext) : Exp[T] = ReadRepPtr(p)
  implicit def repptr_readVal[T:Typ](p: Rep[Ptr[T]], index: Rep[Int]) : Exp[T] = toAtom(ReadRepPtrIndexed(p,index))
}

trait PointersExp extends Pointers with VariablesExp with ExpressionsExt with ReadPtrImplicitExp {
  type Ptr[+T] = Pointer[T] //FIXME: should be invariant

  implicit def ptrTyp[T:Typ]: Typ[Ptr[T]] = {
    implicit val ManifestTyp(m) = typ[T]
    manifestTyp
  }

  case class ReadPtr[T:Typ](v: Ptr[T]) extends Def[T]
  case class ReadRepPtr[T:Typ](v: Rep[Ptr[T]]) extends Def[T]
  case class ReadRepPtrIndexed[T:Typ](v: Rep[Ptr[T]], index: Rep[Int]) extends Def[T]
  case class NewPtr[T:Typ](init: Exp[T]) extends Def[Pointer[T]] {
    def m = manifest[T]
  }

  case class NewPtrFromPtr[T:Typ](init: Exp[Ptr[T]]) extends Def[Pointer[T]] {
    def m = manifest[T]
  }

  case class NewPtrFromArray[T:Typ](init: Exp[Array[T]]) extends Def[Pointer[T]] {
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

  def reparray_repptr[T:Typ](init: Rep[Array[T]])(implicit pos: SourceContext): Ptr[T] = {
    Pointer(reflectMutable(NewPtrFromArray(init)))
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
    case ReadRepPtrIndexed(p,i) => emitValDef(sym, quote(p)+"["+ quote(i) +"]")
    case NewPtr(init) => emitPtrDef(sym.asInstanceOf[Sym[Ptr[Any]]], "&"+quote(init))
    case NewPtrFromPtr(init) => emitPtrDef(sym.asInstanceOf[Sym[Ptr[Any]]], quote(init))
    case NewPtrFromArray(init) => emitPtrDef(sym.asInstanceOf[Sym[Ptr[Any]]], quote(init))
    case AssignToVal(Pointer(p), b) => stream.println("*" + quote(p) + " = " + quote(b) + ";")
    case _ => super.emitNode(sym, rhs)
  }
}

trait CGenPointers extends CGenEffect with CLikeGenPointers
