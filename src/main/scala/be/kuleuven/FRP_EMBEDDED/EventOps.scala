package be.kuleuven.FRP_EMBEDDED

import be.kuleuven.LMS_extensions.ScalaOpsPkgExpExt

trait EventOps extends NodeOps {
  behavior: BehaviorOps =>

  trait Event[A] extends Node[A] {
    // Private part
    private[FRP_EMBEDDED] type In
    override type Out = A
    private[FRP_EMBEDDED] implicit val typIn: Typ[In]
    private[FRP_EMBEDDED] val typOut: Typ[Out]

    // Public part
    def constant[B:Typ] (c: Rep[B])(implicit n: ModuleName): Event[B]
    def map[B:Typ] (f: Rep[A] => Rep[B])(implicit n: ModuleName): Event[B]
    def filter (f: Rep[A] => Rep[Boolean])(implicit n: ModuleName): Event[A]
    def merge (e: Event[A], f:(Rep[A],Rep[A])=>Rep[A])(implicit n: ModuleName): Event[A]

    def startsWith(i: Rep[A])(implicit n: ModuleName): Behavior[A]
    def foldp[B:Typ]( f:((Rep[A],Rep[B]) => Rep[B]), init: Rep[B])(implicit n: ModuleName): Behavior[B]
    def foldp2[B:Typ, C:Typ]
      (e: Event[B],
       f1:((Rep[A],Rep[C]) => Rep[C]),f2:((Rep[B],Rep[C]) => Rep[C]), f3:((Rep[A],Rep[B],Rep[C]) => Rep[C]),
       init: Rep[C]
      )(implicit n: ModuleName): Behavior[C]
  }

  def TimerEvent(i: Rep[Int])(implicit n: ModuleName)/*(implicit tI:Typ[Int])*/: Event[Int]
  def ExternalEvent[A:Typ](oe: OutputEvent[A])(implicit n: ModuleName): Event[A] // oe possibly null (!)

  abstract class OutputEvent[A:Typ](val mn: ModuleName, val outName: String)
  def out[A:Typ](name: String, e: Event[A])(implicit n: ModuleName): OutputEvent[A]
}

trait EventOps_Impl extends EventOps {
  behavior: BehaviorOps =>

  private val outInList = scala.collection.mutable.ListBuffer.empty[(String, String, String, String)]

  def getOutInList: List[(String,String,String,String)] = {
    outInList.toList
  }

  def addToOutInList(oe: OutputEvent[_], inputModName: String, inputID: NodeID): Unit = {
    outInList += ((oe.mn.str, oe.outName, inputModName, "top"+inputID))
  }
}
