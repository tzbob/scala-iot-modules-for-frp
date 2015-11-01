package be.kuleuven.FRP_EMBEDDED

import scala.lms.common.{BaseExp, Base}

trait BehaviorOps {
  event: EventOps =>

  trait Behavior[A] extends Base {
    def valueNow(): A
    def delay(t: Rep[Int]): Behavior[A]

    def snapshot[B](e: Event[B]): Event[A]
    def changes(): Event[A]
  }

  def constantB[A](value: A): Behavior[A]
}

trait BehaviorOpsImpl extends BehaviorOps {
  eventImpl: EventOpsImpl =>

  override def constantB[A](value: A): Behavior[A] = new ConstantBehavior[A](value)

  abstract class BehaviorNode[A] extends BehaviorImpl[A] {
    val value: A
    override def valueNow(): A = value
  }

  case class ConstantBehavior[A](value: A) extends BehaviorNode[A] with BaseExp

  trait BehaviorImpl[A] extends Behavior[A] {
    override def delay(t: Rep[Int]): Behavior[A] = ???

    override def snapshot[B](e: Event[B]): Event[A] = ???
    override def changes(): Event[A] = ???
  }
}