package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED._
import OutputGenerator.withOutFile

trait ParkingApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {

    val timerMod = createModule[Int] {implicit n: ModuleName =>
      val timer = SystemTimerEvent()
      Some(out("timer", timer))
    }

    def detectModule(b: Buttons.Button)(implicit n: ModuleName): Event[Int] = {
      val detectionInterval = 3

      val sensor = ButtonEvent(b)
      val taken: Behavior[Int] = sensor.foldp( (x,state) => if(state == 0) 1 else 0, 0)
      val takenE = taken.changes()
      val takenF = takenE.filter( (x) => x == 0)

      val timer = ExternalEvent(timerMod.output)
      val ss = taken.snapshot(timer)
      val takenT = ss.filter( (x) => x == 1)

      val counter: Behavior[Int] = takenF.foldp2(takenT)( (x,state) => 0, (x,state) => state + 1, (x,y,state) => 0, 0)
      val counterE = counter.changes()
      val detect = counterE.map( (x) => if( x >= detectionInterval) 1 else 0)
      detect
    }

    val modA = createModule[Int] { implicit n: ModuleName =>
      val output = detectModule(Buttons.button1)
      Some(out("outputA",output))
    }

    val modB = createModule[Int] { implicit n:ModuleName =>
      val output = detectModule(Buttons.button2)
      Some(out("outputB",output))
    }

    val modDisp= createLCDModule { implicit n: ModuleName =>
      val timer = ExternalEvent(timerMod.output)
      val timerB: Behavior[Int] = timer.foldp( (x,state) => state+1, 0)

      val inA = ExternalEvent(modA.output)
      val violationA = inA.startsWith(0)

      val inB = ExternalEvent(modB.output)
      val violationB = inB.startsWith(0)

      (timerB, "T: ", 0, 10)::
        (violationA, "A: ", 0,0)::
        (violationB, "B: ", 1,0)::Nil
    }

    timerMod::modA::modB::modDisp::Nil
  }

}

object ParkingAppRunner {
  def main(args: Array[String]): Unit = {

    withOutFile("ParkingApp.c") {
      System.err.println("ParkingApp:")
      (new ParkingApp with SMCFRPDSLOptApplicationRunner).compile
    }

  }
}