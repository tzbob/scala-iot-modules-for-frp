package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{SMCFRPDSLApplicationRunner, CFRPDSLApplicationRunner, OutputGenerator, FRPDSLApplication}


trait Counter1App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    val mod1 = createModule[Int] { implicit n: ModuleName =>
      val input1 = TimerEvent(1)
      val input2 = TimerEvent(1)
      val negate2 = input2.map( (i: Rep[Int]) => 0-i)
      val merged =
        input1.merge(negate2, (x:Rep[Int],y:Rep[Int]) => x + y)
      val filtered =
        merged.filter( x => Math.abs(x) < 10)
      val counter =
        filtered.foldp((state:Rep[Int],x:Rep[Int])=>state + x, 0)
      Some(out("counterOut", counter.changes()))

    }

    mod1::Nil
  }

}

import OutputGenerator.withOutFile

object CounterAppRunner {
  def main(args: Array[String]): Unit = {

    withOutFile("Counter1App.c") {
      System.err.println("Counter1App:")
      new Counter1App with SMCFRPDSLApplicationRunner
    }

  }
}