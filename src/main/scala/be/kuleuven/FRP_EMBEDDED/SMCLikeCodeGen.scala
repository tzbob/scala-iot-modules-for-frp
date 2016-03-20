package be.kuleuven.FRP_EMBEDDED

import scala.lms.internal.CLikeCodegen


trait SMCLikeCodeGen extends CLikeCodegen {
  val IR : ExpressionsExt
  import IR._

  def emitPtrDef(sym: Sym[Pointer[Any]], rhs: String): Unit = emitValDef(sym, rhs)

  //override def emitValDef(sym: Sym[Any], rhs: String): Unit = emitValDef(quote(sym), sym.tp, rhs)

  /*override def emitValDef(sym: String, tpe: Typ[_], rhs: String): Unit = {
    if(remap(tpe) != "void") stream.println(remap(tpe) + " " + sym + " = " + rhs + ";")
  }*/

  override def emitValDef(sym: Sym[Any], rhs: String): Unit = {
    if (!isVoidType(sym.tp))
      stream.println(remap(sym.tp) + " " + quote(sym) + " = " + rhs + ";")
    else // we might still want the RHS for its effects
      stream.println(rhs + ";")
  }

  override def remap[A](m: Typ[A]) : String = {
    if (m.erasure == classOf[Pointer[AnyVal]])
      remap(m.typeArguments.head) + "*"
    else
      super.remap(m)
  }

}
