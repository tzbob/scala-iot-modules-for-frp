package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED._

trait ParkingApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {

    val timerMod = createModule[Int] {implicit n: ModuleName =>
      val timer = SystemTimerEvent()
      Some(out("timer", timer))
    }

    def detectModule(b: Buttons.Button)(implicit n: ModuleName): OutputEvent[Int] = {
      val sensor = ButtonUpDownEvent(b)
      val taken = sensor.startsWith(0)
      val takenE = taken.changes()
      val takenF = takenE.filter( (x) => x == 0)

      val timer = ExternalEvent(timerMod.output)
      val ss = taken.snapshot(timer)
      val takenT = ss.filter( (x) => x == 1)

      val counter: Behavior[Int] = takenF.foldp2(takenT)( (x,state) => 0, (x,state) => state + 1, (x,y,state) => 0, 0)
      val counterE = counter.changes()
      val detect = counterE.map( (x) => if( x >= 2) 1 else 0)
      out("output", detect)
    }

    val modA = createModule[Int] { implicit n: ModuleName =>
      val output = detectModule(Buttons.button1)
      Some(output)
    }

    val modB = createModule[Int] { implicit n:ModuleName =>
      val output = detectModule(Buttons.button2)
      Some(output)
    }

    val modDisp= createLCDModule { implicit n: ModuleName =>
      val inA = ExternalEvent(modA.output)
      val violationA = inA.startsWith(0)

      val inB = ExternalEvent(modB.output)
      val violationB = inB.startsWith(0)

      (violationA, "A: ", 0,0)::
        (violationB, "B: ", 1,0)::Nil
    }

    timerMod::modA::modB::modDisp::Nil
  }

}

trait Parking2App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {

    val timerMod = createModule[Int] {implicit n: ModuleName =>
      val timer = SystemTimerEvent()
      Some(out("timer", timer))
    }

    def detectModule(b: Buttons.Button)(implicit n: ModuleName): OutputEvent[Int] = {
      val sensor = ButtonEvent(b)
      val taken: Behavior[Int] = sensor.foldp( (x,state) => if(state == 0) 1 else 0, 0)
      val takenE = taken.changes()
      val takenF = takenE.filter( (x) => x == 0)

      val timer = ExternalEvent(timerMod.output)
      val ss = taken.snapshot(timer)
      val takenT = ss.filter( (x) => x == 1)

      val counter: Behavior[Int] = takenF.foldp2(takenT)( (x,state) => 0, (x,state) => state + 1, (x,y,state) => 0, 0)
      val counterE = counter.changes()
      val detect = counterE.map( (x) => if( x >= 2) 1 else 0)
      out("output", detect)
    }

    val modA = createModule[Int] { implicit n: ModuleName =>
      val output = detectModule(Buttons.button1)
      Some(output)
    }

    val modB = createModule[Int] { implicit n:ModuleName =>
      val output = detectModule(Buttons.button2)
      Some(output)
    }

    val modDisp= createLCDModule { implicit n: ModuleName =>
      val timer = ExternalEvent(timerMod.output)
      val timerB: Behavior[Int] = timer.foldp( (x,state) => state+1, 0)

      val inA = ExternalEvent(modA.output)
      val violationA = inA.startsWith(0)

      val inB = ExternalEvent(modB.output)
      val violationB = inB.startsWith(0)

      (violationA, "A: ", 0,0)::
        (violationB, "B: ", 1,0)::
        (timerB, "T: ", 0, 10)::Nil
    }

    timerMod::modA::modB::modDisp::Nil
  }

}

import OutputGenerator.withOutFile

object ParkingAppRunner {
  def main(args: Array[String]): Unit = {

    withOutFile("ParkingApp.c") {
      System.err.println("ParkingApp:")
      (new ParkingApp with SMCFRPDSLOptApplicationRunner).compile
    }

    withOutFile("Parking2App.c") {
      System.err.println("Parking2App:")
      (new Parking2App with SMCFRPDSLOptApplicationRunner).compile
    }

  }
}