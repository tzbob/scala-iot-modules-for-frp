package be.kuleuven.FRP_EMBEDDED

trait BehaviorOps extends NodeOps {
  event: EventOps =>

  trait Behavior[A] extends Node[A] {
    private[FRP_EMBEDDED] val typOut: Typ[A]
    private[FRP_EMBEDDED] def getValue(): Var[A]
    private[FRP_EMBEDDED] def getInitializer(): Rep[Unit]
    override type Out = A

    // map2: Combine 2 behaviors (merge-like). Whenever a behaviors value changes, the output behavior applies
    // the function f to both child behaviors, changing its value to the result of that function
    def map2[B:Typ,C:Typ] (b: Behavior[B], f: (Rep[A], Rep[B])=>Rep[C])(implicit n: ModuleName): Behavior[C]
    //def map3
    //def map4
    //...

    // General snapshot: Output event fires an event containing result of function of current value of behavior,
    // whenever the input event e (carrying the function to be applied to value of behavior) fires an event
    def genSnapshot[B] (e: Event[A=>B])(implicit n: ModuleName): Event[B]
    // Snapshot: Output event fires an event containing the current value of behavior,
    // each time input e fires an event
    def snapshot[B:Typ] (e: Event[B])(implicit n: ModuleName): Event[A]
    // changes: create an event stream that fires an event each time the value of the behavior changes,
    // carrying the new value
    def changes ()(implicit n: ModuleName): Event[A]
  }

  def constantB[A:Typ](value: Rep[A])(implicit n: ModuleName): Behavior[A]
}
