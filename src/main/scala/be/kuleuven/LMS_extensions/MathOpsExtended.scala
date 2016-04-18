package be.kuleuven.LMS_extensions

import scala.lms.common.{CLikeGenMathOps, CGenMathOps, MathOpsExp, MathOps}

trait MathOpsExt extends MathOps
trait MathOpsExpExt extends MathOpsExp with ExpressionsExt

trait CLikeGenMathOpsExt extends CLikeGenMathOps with SMCCodegen {
  val IR: MathOpsExpExt
  import IR._

  override def emitNode(sym: Sym[Any], rhs: Def[Any]) = rhs match {
    case MathAbs(x) => emitValDef(sym, src"abs($x)")
    case _ => super.emitNode(sym, rhs)
  }
}

trait CGenMathOpsExt extends CGenMathOps with CLikeGenMathOpsExt { val IR: MathOpsExpExt }