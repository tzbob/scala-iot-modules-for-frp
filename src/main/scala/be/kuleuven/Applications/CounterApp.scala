package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED._


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
        filtered.foldp((x:Rep[Int], state:Rep[Int])=>state + x, 0)
      Some(out("counterOut", counter.changes()))

    }

    mod1::Nil
  }

}

trait Counter2App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    val mod1 = createModule[Int] { implicit n: ModuleName =>
      val input1 = TimerEvent(1)
      val input2 = TimerEvent(1)
      val filtered1 =
        input1.filter( _ < 10)
      val filtered2 =
        input2.filter( _ < 10)
      val counter =
        filtered1.foldp2(filtered2,
          (x:Rep[Int], state:Rep[Int])=>state + x,
          (y:Rep[Int], state:Rep[Int])=>state - y,
          (x:Rep[Int], y:Rep[Int], state:Rep[Int])=>state + x - y,
          0)
      Some(out("counterOut", counter.changes()))

    }

    mod1::Nil
  }

}

trait Counter3App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    val mod1 = createLCDModule { implicit n: ModuleName =>
      val input1 = ButtonEvent(Buttons.button1)
      val input2 = ButtonEvent(Buttons.button2)
      val negate2 = input2.map( (i: Rep[Int]) => 0-i)
      val merged =
        input1.merge(negate2, (x:Rep[Int],y:Rep[Int]) => x + y)
      val filtered =
        merged.filter( x => Math.abs(x) < 10)
      val counter =
        filtered.foldp((x:Rep[Int], state:Rep[Int])=>state + x, 0)

      (counter, "", 0,0)::Nil
    }

    mod1::Nil
  }

}

trait Counter3bApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    val mod1 = createModule[Int] { implicit n: ModuleName =>
      val input1 = ButtonEvent(Buttons.button1)
      val input2 = ButtonEvent(Buttons.button2)
      val negate2 = input2.map( (i: Rep[Int]) => 0-i)
      val merged =
        input1.merge(negate2, (x:Rep[Int],y:Rep[Int]) => x + y)
      val filtered =
        merged.filter( x => Math.abs(x) < 10)
      val counter =
        filtered.foldp((x:Rep[Int], state:Rep[Int])=>state + x, 0)

      Some(out("out",counter.changes()))
    }

    val mod2 = createLCDModule { implicit n: ModuleName =>
      val input = ExternalEvent(mod1.output)
      (input.startsWith(0), "", 0, 0)::Nil
    }

    mod1::mod2::Nil
  }

}

trait Counter4App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    val mod1 = createLCDModule { implicit n: ModuleName =>
      val inc = ButtonEvent(Buttons.button3)
      val inc1 = inc.constant(1)
      val dec = ButtonEvent(Buttons.button4)
      val dec1 = dec.constant(-1)
      val mergeIncDec = inc1.merge(dec1, (x,y)=>x+y)
      val incdecValue = mergeIncDec.foldp( (x,state:Rep[Int]) => state + x, 0)

      val plus = ButtonEvent(Buttons.button1)
      val snapPlus = incdecValue.snapshot(plus)

      val min = ButtonEvent(Buttons.button2)
      val snapMin = incdecValue.snapshot(min)


      val negate2 = snapMin.map( (i: Rep[Int]) => 0-i)
      val merged =
        snapPlus.merge(negate2, (x:Rep[Int],y:Rep[Int]) => x + y)
      val filtered =
        merged.filter( x => Math.abs(x) < 10)
      val counter =
        filtered.foldp((x:Rep[Int], state:Rep[Int])=>state + x, 0)

      (counter, "", 0,0)::Nil

    }

    mod1::Nil
  }

}

trait Counter5App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    val mod1 = createModule[Int] { implicit n: ModuleName =>
      val inc = ButtonEvent(Buttons.button3)
      val inc1 = inc.constant(1)
      val dec = ButtonEvent(Buttons.button4)
      val dec1 = dec.constant(-1)
      val mergeIncDec = inc1.merge(dec1, (x,y)=>x+y)
      val incdecValue = mergeIncDec.foldp( (x,state:Rep[Int]) => state + x, 0)

      val plus = ButtonEvent(Buttons.button1)
      val snapPlus = incdecValue.snapshot(plus)

      val min = ButtonEvent(Buttons.button2)
      val snapMin = incdecValue.snapshot(min)

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

    val mod2 = createLCDModule { implicit n: ModuleName =>
      val input: Event[Int] = ExternalEvent(mod1.output)
      val b = input.startsWith(0)

      (b, "Counter: ", 0 , 0)::Nil
    }

    mod1::mod2::Nil
  }

}

trait Counter6App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    val mod1 = createLCDModule { implicit n: ModuleName =>
      val input1 = SystemTimerEvent(1)
      val cInput1 = input1.constant(5)
      val input2 = ButtonEvent(Buttons.button1)
      val cInput2 = input2.constant(1)
      val negate2 = cInput2.map( (i: Rep[Int]) => 0-i)
      val merged =
        cInput1.merge(negate2, (x:Rep[Int],y:Rep[Int]) => x + y)
      val filtered =
        merged.filter( x => Math.abs(x) < 10)
      val counter =
        filtered.foldp((x:Rep[Int], state:Rep[Int])=>state + x, 0)

      (counter, "Counter: " , 0, 0)::Nil

    }

    mod1::Nil
  }

}

trait Counter7App extends FRPDSLApplication {

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

object CounterAppRunner {
  def main(args: Array[String]): Unit = {

    withOutFile("Counter1App.c") {
      System.err.println("Counter1App:")
      (new Counter1App with CFRPDSLApplicationRunner).compile
    }

    withOutFile("Counter1OptApp.c") {
      System.err.println("Counter1OptApp:")
      (new Counter1App with CFRPDSLOptApplicationRunner).compile
    }

    withOutFile("Counter2App.c") {
      System.err.println("Counter2App:")
      (new Counter2App with CFRPDSLApplicationRunner).compile
    }

    withOutFile("Counter3App.c") {
      System.err.println("Counter3App:")
      (new Counter3App with SMCFRPDSLApplicationRunner).compile
    }

    withOutFile("Counter3MultiApp.c") {
      System.err.println("Counter3MultiApp:")
      (new Counter3bApp with SMCFRPDSLOptApplicationRunner).compile
    }

    withOutFile("Counter4App.c") {
      System.err.println("Counter4App:")
      (new Counter4App with SMCFRPDSLApplicationRunner).compile
    }

    withOutFile("Counter5App.c") {
      System.err.println("Counter5App:")
      (new Counter5App with SMCFRPDSLOptApplicationRunner).compile
    }

    withOutFile("Counter6App.c") {
      System.err.println("Counter6App:")
      (new Counter6App with SMCFRPDSLOptApplicationRunner).compile
    }

    withOutFile("Counter7App.c") {
      System.err.println("Counter7App:")
      (new Counter7App with SMCFRPDSLOptApplicationRunner).compile
    }

  }
}