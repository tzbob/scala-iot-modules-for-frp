package be.kuleuven.LMS_extensions

import scala.lms.common.{CGenTupleOps, TupleGenBase, TupleOpsExp, TupleOps}
import scala.reflect.SourceContext

trait TupleOpsExt extends TupleOps {
  implicit def tuple6_typ[A:Typ,B:Typ,C:Typ,D:Typ,E:Typ,F:Typ]: Typ[(A,B,C,D,E,F)]

  implicit def make_tuple6[A:Typ,B:Typ,C:Typ,D:Typ,E:Typ,F:Typ](t: (Rep[A], Rep[B], Rep[C], Rep[D], Rep[E], Rep[F]))(implicit pos: SourceContext) : Rep[(A,B,C,D,E,F)]

  implicit def t6[A:Typ,B:Typ,C:Typ,D:Typ,E:Typ,F:Typ](t: Rep[(A,B,C,D,E,F)])(implicit pos: SourceContext) =
    ((tuple6_get1(t),tuple6_get2(t),tuple6_get3(t),tuple6_get4(t),tuple6_get5(t),tuple6_get6(t)))

  def tuple6_get1[A:Typ](t: Rep[(A,_,_,_,_,_)])(implicit pos: SourceContext) : Rep[A]
  def tuple6_get2[B:Typ](t: Rep[(_,B,_,_,_,_)])(implicit pos: SourceContext) : Rep[B]
  def tuple6_get3[C:Typ](t: Rep[(_,_,C,_,_,_)])(implicit pos: SourceContext) : Rep[C]
  def tuple6_get4[D:Typ](t: Rep[(_,_,_,D,_,_)])(implicit pos: SourceContext) : Rep[D]
  def tuple6_get5[E:Typ](t: Rep[(_,_,_,_,E,_)])(implicit pos: SourceContext) : Rep[E]
  def tuple6_get6[F:Typ](t: Rep[(_,_,_,_,_,F)])(implicit pos: SourceContext) : Rep[F]
}

trait TupleOpsExpExt extends TupleOpsExt with TupleOpsExp {
  implicit def tuple6_typ[A:Typ,B:Typ,C:Typ,D:Typ,E:Typ,F:Typ]: Typ[(A,B,C,D,E,F)] = {
    implicit val ManifestTyp(mA) = typ[A]
    implicit val ManifestTyp(mB) = typ[B]
    implicit val ManifestTyp(mC) = typ[C]
    implicit val ManifestTyp(mD) = typ[D]
    implicit val ManifestTyp(mE) = typ[E]
    implicit val ManifestTyp(mF) = typ[F]
    manifestTyp
  }

  implicit def make_tuple6[A:Typ,B:Typ,C:Typ,D:Typ,E:Typ,F:Typ](t: (Exp[A],Exp[B],Exp[C],Exp[D],Exp[E],Exp[F]))(implicit pos: SourceContext) : Exp[(A,B,C,D,E,F)] = struct(classTag[(A,B,C,D,E,F)], "_1" -> t._1, "_2" -> t._2, "_3" -> t._3, "_4" -> t._4, "_5" -> t._5, "_6" -> t._6)

  def tuple6_get1[A:Typ](t: Exp[(A,_,_,_,_,_)])(implicit pos: SourceContext) = field[A](t, "_1")
  def tuple6_get2[B:Typ](t: Exp[(_,B,_,_,_,_)])(implicit pos: SourceContext) = field[B](t, "_2")
  def tuple6_get3[C:Typ](t: Exp[(_,_,C,_,_,_)])(implicit pos: SourceContext) = field[C](t, "_3")
  def tuple6_get4[D:Typ](t: Exp[(_,_,_,D,_,_)])(implicit pos: SourceContext) = field[D](t, "_4")
  def tuple6_get5[E:Typ](t: Exp[(_,_,_,_,E,_)])(implicit pos: SourceContext) = field[E](t, "_5")
  def tuple6_get6[F:Typ](t: Exp[(_,_,_,_,_,F)])(implicit pos: SourceContext) = field[F](t, "_6")

}

trait TupleGenBaseExt extends TupleGenBase {
  val IR: TupleOpsExpExt
  import IR._

  override def remap[A](m: Typ[A]) = m.erasure.getSimpleName match {
    case "Tuple6" => IR.structName(m)
    case _ => super.remap(m)
  }
}

trait CGenTupleOpsExt extends CGenTupleOps with TupleGenBaseExt
