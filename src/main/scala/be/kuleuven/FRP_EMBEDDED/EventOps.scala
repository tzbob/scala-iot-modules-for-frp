package be.kuleuven.FRP_EMBEDDED

import scala.lms.common.Base

trait EventOps extends Base {
  behavior: BehaviorOps =>

  trait Event[A] {
    type In
    type Out
    val typIn: Typ[In]
    val typOut: Typ[Out]

    def constant[B:Typ] (c: Rep[B]): Event[B]
    def map[B:Typ] (f: Rep[A] => Rep[B]): Event[B]
    def filter (f: Rep[A] => Rep[Boolean]): Event[A]
    def merge (e: Event[A]*): Event[A]

    def startsWith(i: Rep[A]): Behavior[A]
    def foldp[B]( fun:((A,B) => B), init:B): Behavior[B]
  }

  def TimerEvent(i: Rep[Int])(implicit tI:Typ[Int]): Event[Int]

}

trait EventOpsImpl extends EventOps {
  behaviorImpl: BehaviorOpsImpl =>

  override def TimerEvent(i: Rep[Int])(implicit tI:Typ[Int]) = InputEvent[Int](i)  // only conceptual

  abstract class EventNode[A,B] extends EventImpl[B] {
    val updateFunc: Rep[A] => Rep[B]
    val parentEvents: List[Event[A]]
    override type In = A
    override type Out = B

    // val rank // Use for topological order --> glitch prevention

    /* NOT NEEDED:
     * pulse needs childEvents, but we don't need them since function-composition at staging time bottom-up
     *
     * val childEvents: List[EventNode[B,A]] = _ // immutable so build from bottom to top! NEEDED?
     * def pulse(x: A): Unit
     */
  }

  case class InputEvent[A] (i: Rep[A]) (implicit tA:Typ[A]) extends EventNode[A,A] {
    override val parentEvents: List[EventNode[A, A]] = Nil //TODO: implement
    override val updateFunc: Rep[A] => Rep[A] = _ => i
    override val typIn: Typ[A] = tA
    override val typOut: Typ[A] = tA
  }
  case class ConstantEvent[A,B](parent: Event[A], c : Rep[B])(implicit tB:Typ[B]) extends EventNode[A,B] {
    override val parentEvents: List[Event[A]] = List(parent)
    override val updateFunc: Rep[A]=>Rep[B] = _ => c
    override val typIn: Typ[A] = parent.typOut.asInstanceOf[Typ[A]]
    override val typOut: Typ[B] = tB
  }
  case class MapEvent[A,B](parent: Event[A], f: Rep[A] => Rep[B])(implicit tB:Typ[B]) extends EventNode[A,B] {
    override val parentEvents: List[Event[A]] = List(parent)
    override val updateFunc: Rep[A]=>Rep[B] = f
    override val typIn: Typ[A] = parent.typOut.asInstanceOf[Typ[A]]
    override val typOut: Typ[B] = tB
  }
  case class FilterEvent[A](parent: Event[A], f: Rep[A] => Rep[Boolean]) extends EventNode[A,A] {
    override val parentEvents: List[Event[A]] = List(parent)
    override val updateFunc: Rep[A]=>Rep[A] = ??? //TODO: how to use Rep version of ifthenelse
    override val typIn: Typ[A] = parent.typOut.asInstanceOf[Typ[A]]
    override val typOut: Typ[A] = parent.typOut.asInstanceOf[Typ[A]]
  }
  case class MergeEvent[A](parents: List[Event[A]]) extends EventNode[A,A] {
    override val parentEvents: List[Event[A]] = parents
    override val updateFunc: Rep[A] => Rep[A] = null //TODO: implement
    override val typIn: Typ[A] = parents(0).typOut.asInstanceOf[Typ[A]] //TODO: fix if different typed Events can be merged
    override val typOut: Typ[A] = parents(0).typOut.asInstanceOf[Typ[A]]
  }

  trait EventImpl[A] extends Event[A] {
    override def constant[B:Typ](c: Rep[B]): Event[B] = ConstantEvent[A,B](this, c)
    override def map[B:Typ](f: Rep[A] => Rep[B]): Event[B] = MapEvent[A,B](this, f)
    override def filter(f: Rep[A] => Rep[Boolean]): Event[A] = FilterEvent[A](this, f)
    override def merge(e: Event[A]*) = MergeEvent[A](this :: e.toList)

    override def startsWith(i: Rep[A]): Behavior[A] = ??? // TODO: implement
    override def foldp[B](fun: (A, B) => B, init: B): Behavior[B] = ??? // TODO: implement
  }
}
