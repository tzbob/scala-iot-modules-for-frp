package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.FRPDSLApplication

trait LMSBehaviorApp {

  trait LMSEventMapApp extends FRPDSLApplication {

    override def createMainFun {
      val t1: Event[Int] = TimerEvent(5) // every 5 sec
      val m = t1.map[Int]( (i) => 5 )

      val b = m.startsWith(1)

      //generator(b)
    }
  }
}
