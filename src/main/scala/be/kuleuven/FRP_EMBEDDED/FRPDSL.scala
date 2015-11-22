package be.kuleuven.FRP_EMBEDDED

import scala.lms.common._
import java.lang.{Integer => JInteger}

trait FRPDSL
    extends ScalaOpsPkg with TupledFunctions with UncheckedOps with LiftPrimitives with LiftString with LiftVariables with LiftBoolean
    with EventOps with BehaviorOps {

  def printEvent[A](e: Event[A]): String

  def generateEventFunctions[A](e: Event[A]): Unit

  // keep track of top level functions
  def toplevel[A:Typ,B:Typ](name: String)(f: Rep[A] => Rep[B]): Rep[A] => Rep[B]
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

    def generateEventFunction[B](ev: Event[B]): Unit = {
      ev match {
        case en @ InputEvent(_)      => toplevel("inputfun"+en.id)(en.updateFunc)(en.typIn,en.typOut)
                                        for(p <- en.parentEvents)
                                          generateEventFunction(p)

        case en @ ConstantEvent(_,_) => toplevel("constantfun"+en.id)(en.updateFunc)(en.typIn,en.typOut)
                                        for(p <- en.parentEvents)
                                          generateEventFunction(p)

        case en @ MapEvent(_,_)      => toplevel("mapfun"+en.id)(en.updateFunc)(en.typIn,en.typOut)
                                        for(p <- en.parentEvents)
                                          generateEventFunction(p)

        case en @ FilterEvent(_,_)   => toplevel("filterfun"+en.id)(en.updateFunc)(en.typIn,en.typOut)
                                        for(p <- en.parentEvents)
                                          generateEventFunction(p)

        case en @ MergeEvent(_)      => toplevel("mergefun"+en.id)(en.updateFunc)(en.typIn,en.typOut)
                                        for(p <- en.parentEvents)
                                          generateEventFunction(p)
        case _                      => ()
      }
    }

    generateEventFunction(e)
  }


  case class TopLevel[A,B](name: String, mA: Typ[A], mB:Typ[B], f: Rep[A] => Rep[B])
  val rec = new scala.collection.mutable.HashMap[String,TopLevel[_,_]]
  override def toplevel[A:Typ,B:Typ](name: String)(f: Rep[A] => Rep[B]): Rep[A] => Rep[B] = {
    val g = (x: Rep[A]) => unchecked[B](name,"(",x,")")
    rec.getOrElseUpdate(name, TopLevel(name, typ[A], typ[B], f))
    g
  }
}