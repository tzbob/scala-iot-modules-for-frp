package be.kuleuven.FRP_EMBEDDED

import scala.lms.common.Base

trait BehaviorOps {
  event: EventOps =>

  trait Behavior[A] extends Base {
    def valueNow(): A
    def delay(t: Rep[Int]): Behavior[A]

    def snapshot[B](e: Event[B]): Event[A]
  }

  def constantB[A](value: A): Behavior[A]
}

trait BehaviorOpsImpl extends BehaviorOps {
  event: EventOpsImpl =>

  override def constantB[A](value: A): Behavior[A] = ???

  trait BehaviorImpl[A] extends Behavior[A] {
    override def valueNow(): A = ???
    override def delay(t: Rep[Int]): Behavior[A] = ???

    override def snapshot[B](e: Event[B]): Event[A] = ???
  }
}