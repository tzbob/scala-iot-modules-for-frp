import scala.lms.common.Base

trait FRPDSL extends Event


trait Event[A] extends Base {
  def constant[B] (c: Rep[B]): Event[B]
  def map[B] (f: Rep[A => B]): Event[B]
  def filter (f: Rep[A => Boolean]): Event[A]
}

trait EventImpl[A] extends Event[A] {
  abstract class EventNode[A,B] extends EventImpl[A] {
    val updateFunc: Rep[A => B]
    val parentEvents: Event = this
    val childEvents: Event = _ // immutable so build from bottom to top!
    // val rank // Used for topological order --> glitch prevention
  }

  case class ConstantEvent[A,B](c : Rep[B]) extends EventNode[A,B] with LMSImpl {
    override val updateFunc: (A) => B = (_ => c)
  }
  case class MapEvent[A,B](f: Rep[A=>B]) extends EventNode[A,B] with LMSImpl {
    override val updateFunc: (A) => B = f
  }
  case class FilterEvent[A,B](f: Rep[A => Boolean]) extends EventNode[A,B] with LMSImpl {
    override val updateFunc: (A) => A = ???
  }

  override def constant[B](c: Rep[B]): Event[A] = new ConstantEvent[A,B](c)
  override def map[B](f: Rep[(A) => B]): Event[A] = new MapEvent[A,B](f)
  override def filter(f: Rep[(A) => Boolean]): Event[A] = new FilterEvent[A,A](f)
}

trait LMSImpl extends Base {
  // TODO: move
  override type Rep[T] = T
  override type API = this.type
  override type Typ = this.type

  // TODO: move
  override implicit def nullTyp: this.type = ???
  override implicit def unitTyp: this.type = ???
  override protected def unit[T](x: T)(implicit evidence$2: this.type): T = ???
  override def typ[T](implicit evidence$3: this.type): this.type = ???
}

trait BehaviorOps extends Base {
  // TODO: implement Behavior Type
}

/*
 * Implementation of the FRP DSL
 */
trait FRPDSLImpl extends FRPDSL with EventImpl {
}