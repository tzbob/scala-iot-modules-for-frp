import scala.lms.common.Base

trait FRPDSL extends EventOps with BehaviorOps


trait EventOps extends Base {

  trait Event[A] {
    def constant[B] (c: Rep[B]): Event[B]
    def map[B] (f: Rep[A => B]): Event[B]
    def filter (f: Rep[A => Boolean]): Event[A]
  }

  def print[A](e: Event[A]) = ??? // should be abstract
  object TimerEvent {
    def apply(t: Double) = ??? // should be abstract
  }
}

trait EventImpl extends EventOps {
  abstract class EventNode[A,B] extends Event[B] {
    val updateFunc: Rep[A => B]
    val parentEvents : Event = this
    val childEvents : Event = _  // immutable so build from bottom to top!
    // val rank // Used for topological order --> glitch prevention
  }

  class ConstantEvent[A,B] (c: Rep[B]) extends EventNode[A,B] {
    override val updateFunc = (_ : Rep[A] => c)
  }

  override def constant[B] (c: Rep[B]): Event[B] = new ConstantEvent[A,B](c)
  override def map[B](f: Rep[A => B]): Event[B] = ???
  override def filter(f: Rep[A => Boolean]): Event[A] = ???
}

trait BehaviorOps extends Base {
  // TODO: implement Behavior Type
}

/*
 * Implementation of the FRP DSL
 */
trait FRPDSLImpl extends FRPDSL with EventImpl {

  // TODO: move
  override type Rep[T] = T
  override type API = this.type
  override type Typ = this.type

  // TODO: move
  override implicit def nullTyp: this.type = ???
  override implicit def unitTyp: this.type = ???
  override protected def unit[T](x: T)(implicit evidence$2: FRPDSLImpl.this.type): T = ???
  override def typ[T](implicit evidence$3: FRPDSLImpl.this.type): FRPDSLImpl.this.type = ???

}