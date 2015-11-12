package be.kuleuven.FRP_EMBEDDED

import scala.lms.common._
import java.lang.{Integer => JInteger}

trait FRPDSL
    extends ScalaOpsPkg with TupledFunctions with UncheckedOps with LiftPrimitives with LiftString with LiftVariables with LiftBoolean
    with EventOps with BehaviorOps {

  def printEvent[A](e: Event[A]): String

  def generateEventFunctions[A](e: Event[A]): Unit

  // keep track of top level functions
  case class TopLevel[A,B](name: String, mA: Typ[A], mB:Typ[B], f: Rep[A] => Rep[B])
  val rec = new scala.collection.mutable.HashMap[String,TopLevel[_,_]]
  def toplevel[A:Typ,B:Typ](name: String)(f: Rep[A] => Rep[B]): Rep[A] => Rep[B] = {
    val g = (x: Rep[A]) => unchecked[B](name,"(",x,")")
    rec.getOrElseUpdate(name, TopLevel(name, typ[A], typ[B], f))
    g
  }
}

trait FRPDSLImpl extends FRPDSL with EventOpsImpl with BehaviorOpsImpl {

  override def printEvent[A](e: Event[A]) = {
    def printParents[B](l: List[Event[B]]): String = {
      val x = for(p <- l) yield printEvent(p)
      x.mkString(",")
    }

    e match {
      case i @ InputEvent(_) => "InputEvent@"+ JInteger.toHexString(System.identityHashCode(i))
      case c @ ConstantEvent(_,_) => "ConstantEvent@"+ JInteger.toHexString(System.identityHashCode(c)) + "(" + printParents(c.parentEvents) + ")"
      case m @ MapEvent(_,_) => "MapEvent@" + JInteger.toHexString(System.identityHashCode(m)) + "(" + printParents(m.parentEvents) + ")"
      case f @ FilterEvent(_,_) => "FilterEvent@" + JInteger.toHexString(System.identityHashCode(f)) + "(" + printParents(f.parentEvents) + ")"
      case m @ MergeEvent(_) => "MergeEvent@" + JInteger.toHexString(System.identityHashCode(m)) + "(" + printParents(m.parentEvents) + ")"
      case _ => "other"
    }
  }

  override def generateEventFunctions[A](e: Event[A]): Unit = {

    e match {
      case i @ InputEvent(_)      => toplevel("inputfun")(i.updateFunc)(i.typIn,i.typOut)
      case c @ ConstantEvent(_,_) => toplevel("constantfun")(c.updateFunc)(c.typIn,c.typOut)
      case m @ MapEvent(_,_)      => toplevel("mapfun")(m.updateFunc)(m.typIn,m.typOut)
      case f @ FilterEvent(_,_)   => toplevel("filterfun")(f.updateFunc)(f.typIn,f.typOut)
      case m @ MergeEvent(_)      => toplevel("mergefun")(m.updateFunc)(m.typIn,m.typOut)
      case _                      => ()
    }
  }
}