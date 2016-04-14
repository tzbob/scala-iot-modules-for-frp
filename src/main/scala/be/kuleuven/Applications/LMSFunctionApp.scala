package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{CFRPDSLApplicationRunner, OutputGenerator, FRPDSLApplication}

trait LMSFunction1App extends FRPDSLApplication {

  override def createApplication: Unit = {
    createModule { implicit name: ModuleName =>
      val t1: Event[Int] = TimerEvent(5) // every 5 sec
      val n1 = t1.map[Int => Int]((i) => (x: Rep[Int]) => x + 1)
      // FUNCTION values not suppported because of static functions in C
      val n2: Behavior[Int] = n1.foldp[Int]((x, f) => f(x), 0)
    }
  }
}

import OutputGenerator.withOutFile

object LMSFunctionAppRunner {

  def main(args: Array[String]): Unit = {

    withOutFile("LMSFunction1App.c") {
      // running this generates an exception because of unsupported Function1 type in remapping to C
      new LMSFunction1App with CFRPDSLApplicationRunner {
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("Function1App:")
        System.err.println("Creating flow graph...")
        createApplication
        System.err.println("\n")
        //buildFRPGraph()
        System.err.println("\n")
        val program = buildProgram()
        System.err.println("\n")
        //emitProgram(program) // This gives you trouble, I warned you!
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("\n\n")
      }
    }
  }
}
