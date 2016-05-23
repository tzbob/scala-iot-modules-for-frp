package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{CFRPDSLApplicationRunner, OutputGenerator, FRPDSLApplication}

trait LMSFunction1App extends FRPDSLApplication {

  // JUST A SHOWCASE OF WHAT IS NOT POSSIBLE

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit name: ModuleName =>
      val t1: Event[Int] = TimerEvent(5) // every 5 sec
      val n1 = t1.map[Int => Int]((i) => (x: Rep[Int]) => x + 1)
      // FUNCTION values not suppported because of static functions in C
      val n2: Behavior[Int] = n1.foldp[Int]((f, x) => f(x), 0)
      None
    }::Nil
  }
}

/*import OutputGenerator.withOutFile

object LMSFunctionAppRunner {

  def main(args: Array[String]): Unit = {

    /*withOutFile("LMSFunction1App.c") {
      // running this generates an exception because of unsupported Function1 type in remapping to C
      System.err.println("Function1App:")
      //new LMSFunction1App with CFRPDSLApplicationRunner
    }*/
  }
}
*/