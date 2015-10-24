import scala.lms.common.{BaseExp, LiftAll, Base}

trait EventOps {
  trait Event[A] extends Base with LiftAll {
    def constant[B] (c: B): Event[B]
    def map[B] (f: A => B): Event[B]
    def filter (f: A => Boolean): Event[A]
    def merge (e: Event[A]*): Event[A]
  }

  def TimerEvent(i: Int): Event[Int]

  def printEvent[A](e: Event[A]): String
}

trait EventOpsImpl extends EventOps {

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

  override def TimerEvent(i: Int) = new InputEvent[Int](5)

  abstract class EventNode[A,B] extends EventImpl[B] {
    val updateFunc: A => B //TODO: should be Rep[A=>B], replaced because of pulse function
    val parentEvents: List[Event[A]]
    //val childEvents: List[EventNode[B,A]] = _ // immutable so build from bottom to top! NEEDED?
    // val rank // Used for topological order --> glitch prevention
    def pulse(x: A): Unit = {
      val update = updateFunc(x)
      //TODO: implement
    }
  }

  case class InputEvent[A] (i: A) extends EventNode[A,A] with BaseExp {
    override val parentEvents: List[EventNode[A, A]] = Nil //TODO: implement
    override val updateFunc: (A) => A = (_) => i
  }
  case class ConstantEvent[A,B](parent: Event[A], c : B) extends EventNode[A,B] with BaseExp {
    override val parentEvents: List[Event[A]] = List(parent)
    override val updateFunc: A=>B = _ => c //TODO: must be lifted to Rep
  }
  case class MapEvent[A,B](parent: Event[A], f: A=>B) extends EventNode[A,B] with BaseExp {
    override val parentEvents: List[Event[A]] = List(parent)
    override val updateFunc: A=>B = f
  }
  case class FilterEvent[A](parent: Event[A], f: A => Boolean) extends EventNode[A,A] with BaseExp {
    override val parentEvents: List[Event[A]] = List(parent)
    override val updateFunc: A=>A = (input:A) => if(f(input)) input else input //TODO: give Option[A] back
  }
  case class MergeEvent[A](parents: List[Event[A]]) extends EventNode[A,A] with BaseExp {
    override val parentEvents: List[Event[A]] = parents
    override val updateFunc: (A) => A = null //TODO: implement
  }

  trait EventImpl[A] extends Event[A] {
    override def constant[B](c: B): Event[B] = new ConstantEvent[A,B](this, c)
    override def map[B](f: (A) => B): Event[B] = new MapEvent[A,B](this, f)
    override def filter(f: (A) => Boolean): Event[A] = new FilterEvent[A](this, f)
    override def merge(e: Event[A]*) = new MergeEvent[A](this :: e.toList)
  }
}
