package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{CFRPDSLApplicationRunner, OutputGenerator, FRPDSLApplication}

trait LMSEventApp extends FRPDSLApplication {

  toplevel("main") { x: Rep[Int] =>
    0
  }

}


import OutputGenerator.withOutFile

object LMSEventAppRunner {

  def main(args: Array[String]): Unit = {
    withOutFile("LMSEventApp.c") {
      new LMSEventApp with CFRPDSLApplicationRunner
    }
  }
}
