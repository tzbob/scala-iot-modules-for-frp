package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{CFRPDSLApplicationRunner, OutputGenerator, FRPDSLApplication}

/*
 * Hard coded representation of a user program
 */
trait LMSEventApp extends FRPDSLApplication {

  val mapfun = toplevel("mapevent") { x: Rep[Int] =>
    2*x
  }

  toplevel("main") { x: Rep[Int] =>
    printf("Result of mapping: %d\n", mapfun(x))
  }
  ()
}

/*
 * More realistic representation of the user program
 */
trait LMSEventAppReal extends FRPDSLApplication {

  val t1 : Event[Int] = TimerEvent(5) // every 5 sec
  val n1 = t1.map[String]( (i:Rep[Int]) => i.toString )

  generateEventFunctions(n1)
}


import OutputGenerator.withOutFile

object LMSEventAppRunner {

  def main(args: Array[String]): Unit = {
    withOutFile("LMSEventApp.c") {
      new LMSEventApp with CFRPDSLApplicationRunner
    }

    /* TODO: enable test when generateEventFunctions is implemented
    withOutFile("LMSEventAppReal.c") {
      new LMSEventAppReal with CFRPDSLApplicationRunner
    }
    */
  }
}
