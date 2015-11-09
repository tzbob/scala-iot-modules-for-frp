package be.kuleuven.FRP_EMBEDDED

import scala.lms.common.{Base}

trait BehaviorOps extends Base{
  event: EventOps =>

  trait Behavior[A] {
    def valueNow (): A

    def delay (t: Rep[Int]): Behavior[A]

    // map2: Combine 2 behaviors (merge-like). Whenever a behaviors value changes, the output behavior applies
    // the function f to both child behaviors, changing its value to the result of that function
    def map2[B,C] (b: Behavior[B], f: (A, B)=>C ): Behavior[C]
    //def map3
    //def map4
    //...

    // General snapshot: Output event fires an event containing result of function of current value of behavior,
    // whenever the input event e (carrying the function to be applied to value of behavior) fires an event
    def genSnapshot[B] (e: Event[A=>B]): Event[B]
    // Snapshot: Output event fires an event containing the current value of behavior,
    // each time input e fires an event
    def snapshot[B] (e: Event[B]): Event[A]
    // changes: create an event stream that fires an event each time the value of the behavior changes,
    // carrying the new value
    def changes (): Event[A]
  }

  def constantB[A] (value: A): Behavior[A]
}

trait BehaviorOpsImpl extends BehaviorOps {
  eventImpl: EventOpsImpl =>

  override def constantB[A](value: A): Behavior[A] = new ConstantBehavior[A](value)

  abstract class BehaviorNode[A] extends BehaviorImpl[A] {
    val value: A
    override def valueNow(): A = value
  }

  case class ConstantBehavior[A](value: A) extends BehaviorNode[A]

  trait BehaviorImpl[A] extends Behavior[A] {
    override def delay(t: Rep[Int]): Behavior[A] = ???

    override def snapshot[B](e: Event[B]): Event[A] = ???
    override def changes(): Event[A] = ???
    override def map2[B, C](b: Behavior[B], f: (A, B) => C): Behavior[C] = ???
    override def genSnapshot[B](e: Event[(A) => B]): Event[B] = ???
  }
}