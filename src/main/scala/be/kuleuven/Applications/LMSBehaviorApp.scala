package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{CFRPDSLApplicationRunner, OutputGenerator, FRPDSLApplication}

trait LMSBehaviorStartsWith1App extends FRPDSLApplication {

  override def createMainFun {
    val t1: Event[Int] = TimerEvent(5) // every 5 sec
    val m = t1.map[Int]( (i) => 5 )

    val b = m.startsWith(1)
  }
}

trait LMSBehaviorFoldp1App extends FRPDSLApplication {

  override def createMainFun {
    val t1: Event[Int] = TimerEvent(5) // every 5 sec
    val m = t1.map[Int]( (i) => 5 )

    val b = m.foldp((x: Rep[Int], y: Rep[Int]) => x+y, 1)
  }
}

import OutputGenerator.withOutFile

object LMSBehaviorAppRunner {
  def main(args: Array[String]): Unit = {

    withOutFile("LMSBehaviorStartsWith1App.c") {
      new LMSBehaviorStartsWith1App with CFRPDSLApplicationRunner {
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("BehaviorStartsWith1App:")
        System.err.println("Creating flow graph...")
        createMainFun
        System.err.println("\n")
        emitProgram()
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("\n\n")
      }
    }

    withOutFile("LMSBehaviorFoldp1App.c") {
      new LMSBehaviorFoldp1App with CFRPDSLApplicationRunner {
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("BehaviorFoldp1App:")
        System.err.println("Creating flow graph...")
        createMainFun
        System.err.println("\n")
        emitProgram()
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("\n\n")
      }
    }

  }
}
