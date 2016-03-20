package be.kuleuven.FRP_EMBEDDED

import scala.lms.common.{CGenArrayOps, CLikeGenArrayOps, ArrayOpsExp, ArrayOps}

trait ArrayOpsExt extends ArrayOps {

}

trait ArrayOpsExpExt extends ArrayOpsExp with ExpressionsExt {

}

trait CLikeGenArrayOpsExt extends CLikeGenArrayOps {
  val IR: ArrayOpsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = {
    rhs match {
      case ArrayLength(x) => emitValDef(sym, src"sizeof($x)/sizeof(*$x)") // WARN: statically allocated elements only
      case ArrayApply(x,n) => emitValDef(sym, src"$x[$n]")
      case ArrayUpdate(x,n,y) => stream.println(src"$x.update($n,$y);")
      case ArraySlice(x,s,e) => val tp=remap(x.tp.typeArguments(0)); emitValDef(sym, src"({ size_t sz=sizeof("+tp+")*($e-$s); "+tp+"* r = ("+tp+"*)malloc(sz); memcpy(r,(("+tp+"*)$x)+$s,sz); r; })")
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
      case ArrayLength(x) => throw new UnsupportedOperationException("Standard C does not remember the length.")
      case ArrayApply(x,n) => emitValDef(sym, quote(x) + "[" + quote(n) + "]")
      case ArrayUpdate(x,n,y) => stream.println(quote(x) + "[" + quote(n) + "] = " + quote(y) + ";")
      case _ => super.emitNode(sym, rhs)
    }
  }
}
