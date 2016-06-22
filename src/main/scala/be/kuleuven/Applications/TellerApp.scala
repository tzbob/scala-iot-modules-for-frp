package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED._

trait TellerApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    val mod1 = createModule[Int] { implicit n: ModuleName =>
      val inc = ButtonEvent(Buttons.button3)
      val inc1 = inc.constant(1)
      val dec = ButtonEvent(Buttons.button4)
      val dec1 = dec.constant(-1)
      val mergeIncDec = inc1.merge(dec1, (x,y)=>x+y)
      val incdecValue = mergeIncDec.foldp( (x,state:Rep[Int]) => state + x, 1)
      Some(out("amountOut",incdecValue.changes()))
    }

    val mod2 = createModule[Int] { implicit n: ModuleName =>
      val amount = ExternalEvent(mod1.output).startsWith(1)

      val plus = ButtonEvent(Buttons.button1)
      val snapPlus = amount.snapshot(plus)

      val min = ButtonEvent(Buttons.button2)
      val snapMin = amount.snapshot(min)

      val negate2 = snapMin.map( (i: Rep[Int]) => 0-i)
      val merged =
        snapPlus.merge(negate2, (x:Rep[Int],y:Rep[Int]) => x + y)
      val filtered =
        merged.filter( x => Math.abs(x) < 10)
      val counter =
        filtered.foldp((x:Rep[Int], state:Rep[Int])=>state + x, 0)
      val counterEvents = counter.changes
      Some(out("counterOut", counterEvents))
    }

    val mod3 = createLCDModule { implicit n: ModuleName =>
      val amount: Event[Int] = ExternalEvent(mod1.output)
      val counter: Event[Int] = ExternalEvent(mod2.output)
      val a = amount.startsWith(1)
      val c = counter.startsWith(0)

      (c, "Counter: ", 0 , 0)::(a, "Amount: ", 1, 0)::Nil
    }

    mod1::mod2::mod3::Nil
  }

}

import OutputGenerator.withOutFile

object TellerAppRunner {
  def main(args: Array[String]): Unit = {

    withOutFile("TellerApp.c") {
      System.err.println("TellerApp:")
      (new TellerApp with SMCFRPDSLOptApplicationRunner).compile
    }

  }
}