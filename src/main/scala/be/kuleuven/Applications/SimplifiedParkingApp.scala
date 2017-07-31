package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED._
import OutputGenerator.withOutFile

trait SimplifiedParkingApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {

    val timerMod = createModule[Int] { implicit n: ModuleName =>
      val timer = SystemTimerEvent()
      (out("timer", timer))
    }

    val sensorMod =
      createModule[Boolean] { implicit n: ModuleName =>
        val sensor = ButtonEvent(Buttons.button1)
        val taken: Behavior[Boolean] = sensor.foldp((_,state) => !state, false)
        (out("button1", taken.changes))
      }

    def parkingMod(timeout: Int) =
      createModule[Boolean] { implicit n: ModuleName =>
        val sensorE = ExternalEvent(sensorMod.output)
        val timer = ExternalEvent(timerMod.output)

        val sensorB: Behavior[Boolean] =
          sensorE.startsWith(false)
        val snapSensor = sensorB.snapshot(timer)

        val timeTaken: Behavior[Int] =
          snapSensor.foldp((taken, state) => if (taken) state + 1 else 0, 0)

        val violations = timeTaken.changes().map(_ >= timeout)
        (out("violations", violations))
      }

    timerMod :: parkingMod(3) :: sensorMod :: Nil
  }

}

object SimplifiedParkingAppRunner {
  def main(args: Array[String]): Unit = {

    withOutFile("SimplifiedParkingApp.c") {
      System.err.println("SimplifiedParkingApp:")
      (new SimplifiedParkingApp with SMCFRPDSLOptApplicationRunner).compile
    }

  }
}
