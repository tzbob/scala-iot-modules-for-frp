
trait myFirstApp extends FRPDSLApplication {
  override def main() {
    println("My first application executes")
    val x : Event[Double] = TimerEvent(5) // every 5 sec
    //val y = x.map(lift(_ => 2*_))
  }
}

object MyFirstAppRunner extends FRPDSLApplicationRunner with myFirstApp
