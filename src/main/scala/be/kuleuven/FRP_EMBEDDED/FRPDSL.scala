package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import scala.lms.common._

trait FRPDSL extends ScalaOpsPkg with TupledFunctions with UncheckedOps with LiftPrimitives with LiftString with LiftVariables
    with EventOps with BehaviorOps {

  // keep track of top level functions
  case class TopLevel[A,B](name: String, mA: Typ[A], mB:Typ[B], f: Rep[A] => Rep[B])
  val rec = new scala.collection.mutable.HashMap[String,TopLevel[_,_]]
  def toplevel[A:Typ,B:Typ](name: String)(f: Rep[A] => Rep[B]): Rep[A] => Rep[B] = {
    val g = (x: Rep[A]) => unchecked[B](name,"(",x,")")
    rec.getOrElseUpdate(name, TopLevel(name, typ[A], typ[B], f))
    g
  }
}