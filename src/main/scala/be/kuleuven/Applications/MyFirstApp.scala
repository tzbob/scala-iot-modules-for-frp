package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{CFRPDSLImpl, FRPDSLApplication}

/*
 * Trait that contains the user program
 */
trait MyFirstApp extends FRPDSLApplication {

    override def createMainFun = ???
    System.out.println("My first application")

    // PRINT CASE 1
    val t1 : Event[Int] = TimerEvent(5) // every 5 sec
    val n1 = t1.map[String]( (i:Rep[Int]) => i.toString )
    val n2 = t1.map[String]( (i:Rep[Int]) => i.toString )
    val n3 = t1.map[String]( (i:Rep[Int]) => i.toString )
    val out = n1.merge(n2,n3)

    System.out.println()
    System.out.println(printEvent(out))

    // PRINT CASE 2
    val a : Event[Int] = TimerEvent(10)
    val b : Event[Int] = TimerEvent(10)

    val c = a.map[Int]( (i: Rep[Int]) => i.hashCode() )
    val d = a.merge(b)
    val e = c.map[String] ( (i:Rep[Int]) => i.toString)
    val f = d.merge(c)

    System.out.println()
    System.out.println(printEvent(e))
    System.out.println(printEvent(f))
    System.out.println()

}

/*
 * Object responsible for directing the staged execution of the DSL application
 */
object MyFirstAppRunner {
  def main(args: Array[String]): Unit = {
    new MyFirstApp with CFRPDSLImpl
  }
}
