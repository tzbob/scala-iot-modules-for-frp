
trait myFirstApp extends FRPDSLApplication {
  override def main() {
    println("My first application executes")
    val x : Event[Int] = TimerEvent(5) // every 5 sec
    val y = x.map[String]( ((i:Int) => i.toString) )
  }
}

object MyFirstAppRunner extends FRPDSLApplicationRunner with myFirstApp
