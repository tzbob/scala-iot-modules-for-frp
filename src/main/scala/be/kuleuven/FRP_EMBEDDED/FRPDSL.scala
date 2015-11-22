package be.kuleuven.FRP_EMBEDDED

import scala.lms.common._
import java.lang.{Integer => JInteger}

trait FRPDSL
    extends ScalaOpsPkg with TupledFunctions with UncheckedOps with LiftPrimitives with LiftString with LiftVariables with LiftBoolean
    with EventOps with BehaviorOps {

  def printEvent[A](e: Event[A]): String

  def generateEventFunctions[A](e: Event[A]): Unit
  def generator[A](e: Event[A]): Unit

  // keep track of top level functions
  // TODO: can be removed eventually, user won't need to define them
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

  override def generator[X](e: Event[X]): Unit = {
    /*def generate[C,D](ev: EventNode[C,D], s:String): Rep[C] => Rep[D] = {
      toplevel(s+ev.id)(ev.updateFunc)(ev.typIn,ev.typOut)
    }*/

    /*def myComposeFunction[A,B,C,D](first:Rep[B] => Rep[A], second:Rep[C] => Rep[B]): Rep[C] => Rep[A]  = {
      x:Rep[C] => val y = second(x);first(y)
    }*/

    // TODO: notion: all explicit types can be ommitted since all Any -> no actual type checking. Fix?
    def generateRec[EndType,B](e:Event[B], f:Rep[B]=>Rep[EndType], typEnd:Typ[EndType]): Unit = {
      e match {
        case en @ MapEvent(_,_) =>
          val g: (Rep[en.In] => Rep[en.Out]) = toplevel("mapfun"+en.id)(en.updateFunc)(en.typIn,en.typOut)
          val x: (Rep[en.In] => Rep[EndType]) = f.compose(g)
          generateRec[EndType,en.In](en.parent,x,typEnd)

        case en @ InputEvent(_) =>
          val g: (Rep[en.In] => Rep[en.Out]) = toplevel("inputfun"+en.id)(en.updateFunc)(en.typIn,en.typOut)
          val x: (Rep[en.In] => Rep[EndType]) = f.compose(g)
          toplevel("top")(x)(en.typIn,typEnd)

        case _ => ()
      }
    }

    e match {
      case en @ MapEvent(_,_) =>
        val f: (Rep[en.In]=>Rep[en.Out]) = toplevel("mapfun"+en.id)(en.updateFunc)(en.typIn,en.typOut)
        generateRec(en.parent, f, en.typOut)

      case _ => ()
    }

  }


  case class TopLevel[A,B](name: String, mA: Typ[A], mB:Typ[B], f: Rep[A] => Rep[B])
  val rec = new scala.collection.mutable.HashMap[String,TopLevel[_,_]]
  override def toplevel[A:Typ,B:Typ](name: String)(f: Rep[A] => Rep[B]): Rep[A] => Rep[B] = {
    val g = (x: Rep[A]) => unchecked[B](name,"(",x,")")
    rec.getOrElseUpdate(name, TopLevel(name, typ[A], typ[B], f))
    g
  }
}