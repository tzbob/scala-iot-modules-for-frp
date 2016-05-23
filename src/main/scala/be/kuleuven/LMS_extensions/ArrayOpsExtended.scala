package be.kuleuven.LMS_extensions

import scala.lms.common.{ArrayOps, ArrayOpsExp, CGenArrayOps, CLikeGenArrayOps}

trait ArrayOpsExt extends ArrayOps {

}

trait ArrayOpsExpExt extends ArrayOpsExp with ExpressionsExt {

}

trait CLikeGenArrayOpsExt extends CLikeGenArrayOps {
  val IR: ArrayOpsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = {
    rhs match {
      case ArrayLength(x) => throw new UnsupportedOperationException("Not supported in C.")
      case ArrayApply(x,n) => emitValDef(sym, src"$x[$n]")
      case ArrayUpdate(x,n,y) => throw new UnsupportedOperationException("Not supported in C.")
      case ArraySlice(x,s,e) => throw new UnsupportedOperationException("Not supported in C.")
      case _ => super.emitNode(sym, rhs)
    }
  }
}

trait CGenArrayOpsExt extends CGenArrayOps with SMCLikeCodeGen {
  val IR: ArrayOpsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = {
    rhs match {
      case a@ArrayNew(i) =>
        stream.println(remap(a.m) + " " + quote(sym) + "[" + quote(i) + "];")
      case ArrayLength(x) => throw new UnsupportedOperationException("Not supported in SMC.")
      case ArrayApply(x,n) => emitValDef(sym, quote(x) + "[" + quote(n) + "]")
      case ArrayUpdate(x,n,y) => stream.println(quote(x) + "[" + quote(n) + "] = " + quote(y) + ";")
      case _ => super.emitNode(sym, rhs)
    }
  }
}
