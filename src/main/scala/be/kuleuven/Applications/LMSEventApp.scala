package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{CFRPDSLApplicationRunner, OutputGenerator, FRPDSLApplication}

/*
 * Hard coded representation of a user program
 */
trait LMSEventApp extends FRPDSLApplication {

  override def createMainFun {
    val mapfun = toplevel("mapevent") { x: Rep[Int] =>
      2 * x
    }

    toplevel("main") { x: Rep[Int] =>
      printf("Result of mapping: %d\n", mapfun(x))
    }
    ()
  }
}

/*
 * More realistic representation of the user program
 */
trait LMSEventAppReal extends FRPDSLApplication {

  override def createMainFun {
    val t1: Event[Int] = TimerEvent(5) // every 5 sec
    val n1 = t1.map[Int]( (i:Rep[Int]) => 2*i )
    val n2 = n1.map[Boolean]( (i:Rep[Int]) => infix_%(i,2)==0 )

    //generateEventFunctions(n2)
    generator(n2)
  }
}


import OutputGenerator.withOutFile

object LMSEventAppRunner {

  def main(args: Array[String]): Unit = {
    /*withOutFile("LMSEventApp.c") {
      new LMSEventApp with CFRPDSLApplicationRunner
    }*/

    withOutFile("LMSEventAppReal.c") {
      new LMSEventAppReal with CFRPDSLApplicationRunner {
        createMainFun
        emitAll()
      }
    }
  }
}
