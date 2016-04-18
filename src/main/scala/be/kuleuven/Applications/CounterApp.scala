package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{SMCFRPDSLApplicationrunner, CFRPDSLApplicationRunner, OutputGenerator, FRPDSLApplication}

trait Counter1App extends FRPDSLApplication {

  override def createApplication: Unit = {
    createModule { implicit n: ModuleName =>
      val input1 = TimerEvent(1)
      val input2 = TimerEvent(1)
      val negate2 = input2.map( (i: Rep[Int]) => 0-i)
      val merged =
        input1.merge(negate2, (x:Rep[Int],y:Rep[Int]) => x + y)
      val filtered =
        merged.filter( x => Math.abs(x) < 10)
      val counter =
        filtered.foldp((state:Rep[Int],x:Rep[Int])=>state + x, 0)
      out("counterOut", counter.changes())
    }
  }

}

import OutputGenerator.withOutFile

object CounterAppRunner {
  def main(args: Array[String]): Unit = {

    withOutFile("Counter1App.c") {
      new Counter1App with SMCFRPDSLApplicationrunner {
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("Counter1App:")
        System.err.println("Creating flow graph...")
        createApplication
        System.err.println("\n")
        buildFRPGraph()
        System.err.println("\n")
        val program = buildProgram()
        System.err.println("\n")
        emitProgram(program)
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("\n\n")
      }
    }


  }
}