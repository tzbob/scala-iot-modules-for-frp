package be.kuleuven.FRP_EMBEDDED

import scala.lms.common.Base

trait EventOps extends Base {
  behavior: BehaviorOps =>

  trait Event[A] {
    type In
    type Out = A
    val typIn: Typ[In]
    val typOut: Typ[Out]

    def constant[B:Typ] (c: Rep[B]): Event[B]
    def map[B:Typ] (f: Rep[A] => Rep[B]): Event[B]
    def filter (f: Rep[A] => Rep[Boolean]): Event[A]
    def merge (e: Event[A], f:(Rep[A],Rep[A])=>Rep[A]): Event[A]

    def startsWith(i: Rep[A]): Behavior[A]
    def foldp[B]( fun:((A,B) => B), init:B): Behavior[B]
  }

  def TimerEvent(i: Rep[Int])(implicit tI:Typ[Int]): Event[Int]

}

trait EventOpsImpl extends EventOps {
  behaviorImpl: BehaviorOpsImpl =>

  override def TimerEvent(i: Rep[Int])(implicit tI:Typ[Int]) = InputEvent[Int](i)  // only conceptual

  abstract class EventNode[A,B] extends EventImpl[B] {
    val id = EventNode.nextid
    override type In = A
    val updateFunc: Rep[In] => Rep[Out]
    val parentEvents: List[Event[In]]

    // val rank // Use for topological order --> glitch prevention

    /* NOT NEEDED:
     * pulse needs childEvents, but we don't need them since function-composition at staging time bottom-up
     *
     * val childEvents: List[EventNode[B,A]] = _ // immutable so build from bottom to top! NEEDED?
     * def pulse(x: A): Unit
     */
  }
  object EventNode {
    private var id = 0
    private def nextid = {id += 1;id}
  }

  case class InputEvent[A] (i: Rep[A]) (implicit tA:Typ[A]) extends EventNode[Unit,A] {
    override val parentEvents: List[Event[Unit]] = Nil //TODO: implement
    override val updateFunc: Rep[In] => Rep[Out] = unit => i // TODO: fix Unit
    override val typIn: Typ[In] = typ[Unit]
    override val typOut: Typ[Out] = tA
  }
  case class ConstantEvent[A,B](parent: Event[A], c : Rep[B])(implicit tB:Typ[B]) extends EventNode[A,B] {
    override val parentEvents: List[Event[In]] = List(parent)
    override val updateFunc: Rep[In]=>Rep[Out] = _ => c
    override val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = tB
  }
  case class MapEvent[A,B](parent: Event[A], f: Rep[A] => Rep[B])(implicit tB:Typ[B]) extends EventNode[A,B] {
    override val parentEvents: List[Event[In]] = List(parent)
    override val updateFunc: Rep[In]=>Rep[Out] = f
    override val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = tB
  }
  case class FilterEvent[A](parent: Event[A], f: Rep[A] => Rep[Boolean]) extends EventNode[A,A] {
    override val parentEvents: List[Event[In]] = List(parent)
    override val updateFunc: Rep[In]=>Rep[Out] = null //TODO: how to use Rep version of ifthenelse
    override val typIn: Typ[In] = parent.typOut
    override val typOut: Typ[Out] = parent.typOut
  }
  case class MergeEvent[A](parents: List[Event[A]], f:(Rep[A],Rep[A])=>Rep[A] ) extends EventNode[A,A] {
    override val parentEvents: List[Event[In]] = parents
    override val updateFunc: Rep[In] => Rep[Out] = null //TODO: implement
    override val typIn: Typ[In] = parents(0).typOut //TODO: fix if different typed Events can be merged
    override val typOut: Typ[Out] = parents(0).typOut
  }

  trait EventImpl[A] extends Event[A] {
    override def constant[B:Typ](c: Rep[B]): Event[B] = ConstantEvent[A,B](this, c)
    override def map[B:Typ](f: Rep[A] => Rep[B]): Event[B] = MapEvent[A,B](this, f)
    override def filter(f: Rep[A] => Rep[Boolean]): Event[A] = FilterEvent[A](this, f)
    override def merge(e: Event[A], f: (Rep[A],Rep[A])=>Rep[A]) = MergeEvent[A](this :: e :: Nil, f)

    override def startsWith(i: Rep[A]): Behavior[A] = ??? // TODO: implement
    override def foldp[B](fun: (A, B) => B, init: B): Behavior[B] = ??? // TODO: implement
  }
}
