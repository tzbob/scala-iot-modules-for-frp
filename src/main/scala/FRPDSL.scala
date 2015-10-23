import scala.lms.common.{LiftAll, Base}

trait FRPDSL extends EventOps

trait EventOps {
  trait Event[A] extends Base with LiftAll {
    def constant[B] (c: B): Event[B]
    def map[B] (f: A => B): Event[B]
    def filter (f: A => Boolean): Event[A]
  }

  def TimerEvent(i: Int): Event[Int]

  def print[A](e: Event[A]): String
}

trait EventOpsImpl extends EventOps {

  override def print[A](e: Event[A]) = ???

  override def TimerEvent(i: Int) = new EventNode[Int, Int] with LMSImpl {
    override val updateFunc: (Int) => Int = _ //TODO: do something with the input
    override val parentEvents: List[EventNode[Int, Int]] = Nil
  }

  abstract class EventNode[A,B] extends EventImpl[B] {
    val updateFunc: A => B //TODO: should be Rep[A=>B], replaced because of pulse function
    val parentEvents: List[EventNode[B,A]]
    val childEvents: List[EventNode[B,A]] = _ // immutable so build from bottom to top! NEEDED?
    // val rank // Used for topological order --> glitch prevention
    def pulse(x: A): Unit = {
      val update = updateFunc(x)
      for(p <- parentEvents) p.pulse(update)
    }
  }

  trait EventImpl[A] extends Event[A] {

    case class ConstantEvent[A,B](parent: Event[A], c : B) extends EventNode[A,B] with LMSImpl {
      override val parentEvents: List[Event[A]] = List(parent)
      override val updateFunc: A=>B = _ => c //TODO: must be lifted to Rep
    }
    case class MapEvent[A,B](parent: Event[A], f: A=>B) extends EventNode[A,B] with LMSImpl {
      override val parentEvents: List[Event[A]] = List(parent)
      override val updateFunc: A=>B = f
    }
    case class FilterEvent[A](parent: Event[A], f: A => Boolean) extends EventNode[A,A] with LMSImpl {
      override val parentEvents: List[Event[A]] = List(parent)
      override val updateFunc: A=>Option[A] = (input:A) => if(f(input)) Some(input) else None //TODO: make updateFunc give Option[A] back
    }

    override def constant[B](c: B): Event[B] = new ConstantEvent[A,B](this, c)
    override def map[B](f: (A) => B): Event[B] = new MapEvent[A,B](this, f)
    override def filter(f: (A) => Boolean): Event[A] = new FilterEvent[A](this, f)
  }
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
trait FRPDSLImpl extends FRPDSL with EventOpsImpl {
}