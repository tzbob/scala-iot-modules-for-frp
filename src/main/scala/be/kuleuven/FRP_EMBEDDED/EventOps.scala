package be.kuleuven.FRP_EMBEDDED

import scala.lms.common.{Base, BaseExp, LiftAll}

trait EventOps extends Base {
  behavior: BehaviorOps =>

  trait Event[A] {
    def constant[B] (c: Rep[B]): Event[B]
    def map[B] (f: Rep[A] => Rep[B]): Event[B]
    def filter (f: Rep[A] => Rep[Boolean]): Event[A]
    def merge (e: Event[A]*): Event[A]

    def startsWith(i: Rep[A]): Behavior[A]
    def foldp[B]( fun:((A,B) => B), init:B): Behavior[B]
  }

  def TimerEvent(i: Rep[Int]): Event[Int]
  def printEvent[A](e: Event[A]): String
}

trait EventOpsImpl extends EventOps {
  behaviorImpl: BehaviorOpsImpl =>

  override def printEvent[A](e: Event[A]) = {
    def printParents[B](l: List[Event[B]]): String = {
      val x = for(p <- l) yield printEvent(p)
      x.mkString(",")
    }

    e match {
      case i @ InputEvent(_) => "InputEvent@"+ Integer.toHexString(System.identityHashCode(i))
      case c @ ConstantEvent(_,_) => "ConstantEvent@"+ Integer.toHexString(System.identityHashCode(c)) + "(" + printParents(c.parentEvents) + ")"
      case m @ MapEvent(_,_) => "MapEvent@" + Integer.toHexString(System.identityHashCode(m)) + "(" + printParents(m.parentEvents) + ")"
      case f @ FilterEvent(_,_) => "FilterEvent@" + Integer.toHexString(System.identityHashCode(f)) + "(" + printParents(f.parentEvents) + ")"
      case m @ MergeEvent(_) => "MergeEvent@" + Integer.toHexString(System.identityHashCode(m)) + "(" + printParents(m.parentEvents) + ")"
      case _ => "other"
    }
  }

  override def TimerEvent(i: Rep[Int]) = new InputEvent[Int](i)  // only conceptual

  abstract class EventNode[A,B] extends EventImpl[B] {
    val updateFunc: Rep[A] => Rep[B]
    val parentEvents: List[Event[A]]
    // val rank // Use for topological order --> glitch prevention

    /* NOT NEEDED:
     * pulse needs childEvents, but we don't need them since function-composition at staging time bottom-up
     *
     * val childEvents: List[EventNode[B,A]] = _ // immutable so build from bottom to top! NEEDED?
     * def pulse(x: A): Unit
     */
  }

  case class InputEvent[A] (i: Rep[A]) extends EventNode[A,A] {
    override val parentEvents: List[EventNode[A, A]] = Nil //TODO: implement
    override val updateFunc: Rep[A] => Rep[A] = _ => i
  }
  case class ConstantEvent[A,B](parent: Event[A], c : Rep[B]) extends EventNode[A,B] {
    override val parentEvents: List[Event[A]] = List(parent)
    override val updateFunc: Rep[A]=>Rep[B] = _ => c
  }
  case class MapEvent[A,B](parent: Event[A], f: Rep[A] => Rep[B]) extends EventNode[A,B] {
    override val parentEvents: List[Event[A]] = List(parent)
    override val updateFunc: Rep[A]=>Rep[B] = f
  }
  case class FilterEvent[A](parent: Event[A], f: Rep[A] => Rep[Boolean]) extends EventNode[A,A] {
    override val parentEvents: List[Event[A]] = List(parent)
    override val updateFunc: Rep[A]=>Rep[A] = ???
  }
  case class MergeEvent[A](parents: List[Event[A]]) extends EventNode[A,A] {
    override val parentEvents: List[Event[A]] = parents
    override val updateFunc: Rep[A] => Rep[A] = null //TODO: implement
  }

  trait EventImpl[A] extends Event[A] {
    override def constant[B](c: Rep[B]): Event[B] = new ConstantEvent[A,B](this, c)
    override def map[B](f: Rep[A] => Rep[B]): Event[B] = new MapEvent[A,B](this, f)
    override def filter(f: Rep[A] => Rep[Boolean]): Event[A] = new FilterEvent[A](this, f)
    override def merge(e: Event[A]*) = new MergeEvent[A](this :: e.toList)

    override def startsWith(i: Rep[A]): Behavior[A] = ???
    override def foldp[B](fun: (A, B) => B, init: B): Behavior[B] = ???
  }
}
