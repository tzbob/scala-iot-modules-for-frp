package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{CFRPDSLApplicationRunner, SMCFRPDSLApplicationRunner, OutputGenerator, FRPDSLApplication}

trait LMSBehaviorStartsWith1App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(5) // every 5 sec
      val m = t1.map[Int]( (i) => 5 )

      val b = m.startsWith(1)
      Some(out("out", b.changes()))
    }::Nil
  }
}

trait LMSBehaviorFoldp1App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(5) // every 5 sec
      val m = t1.map[Int]((i) => 5)

      val b = m.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 1)
      Some(out("out", b.changes()))
    }::Nil
  }
}

trait LMSBehaviorMap2App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(1) // every 5 sec
      val m1 = t1.map[Int]((i) => 1)

      val b1 = m1.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 1)

      val t2 = TimerEvent(2)
      val m2 = t2.map((i) => 2)
      val b2 = m2.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 1)

      val map2 = b1.map2(b2, (x: Rep[Int], y: Rep[Int]) => x + y)
      Some(out("out", map2.changes()))
    }::Nil
  }
}

trait LMSBehaviorChangesApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Int] { implicit m: ModuleName =>
      val t = TimerEvent(1)
      val fp = t.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 1)
      val c = fp.changes()
      val fp2 = c.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 10)
      val c2 = fp2.changes()
      Some(out("out1", c2))
    }::Nil
  }
}

trait LMSBehaviorSnapshotApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Int] { implicit n:ModuleName =>
      val t = TimerEvent(10)
      val fp1 = t.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 0)

      val t2 = TimerEvent(5)

      val ss = fp1.snapshot(t2)

      val fp2 = ss.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 0)
      Some(out("out", fp2.changes()))
    }::Nil
  }
}

trait LMSBehaviorSnapshot2App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Int] { implicit n:ModuleName =>
      val t = TimerEvent(10)
      val fp1 = t.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 0)

      val t2 = TimerEvent(5)
      val c2 = t2.constant(1)
      val c3 = c2.constant(2)
      val c4 = c3.constant(3) // a long event side

      val ss = fp1.snapshot(c4)

      val fp2 = ss.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 0)
      Some(out("out", fp2.changes()))
    }::Nil
  }
}

trait LMSBehaviorSnapshot3App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Int] { implicit n:ModuleName =>
      val t = TimerEvent(10)
      val c1 = t.constant(1)
      val c2 = c1.constant(2)
      val c3 = c2.constant(3) // a long behavior side
      val fp1 = c3.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 0)

      val t2 = TimerEvent(5)

      val ss = fp1.snapshot(t2)

      val fp2 = ss.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 0)
      Some(out("out", fp2.changes()))
    }::Nil
  }
}

trait LMSBehaviorConstantApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(1)
      val sw = t1.startsWith(0)
      val c = constantB(3)
      val plus = sw.map2(c, (x:Rep[Int],y:Rep[Int]) => x+y )
      Some(out("out", plus.changes()))
    }::Nil
  }
}

trait LMSBehaviorPropagationExampleApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(1)
      val fp = t1.foldp( (x:Rep[Int],state:Rep[Int]) => state + 1, 2)
      val c = constantB(0)
      val a = fp.map2(c, (x:Rep[Int],y:Rep[Int]) => x+y )
      val b = a.map2(fp, (x:Rep[Int],y:Rep[Int]) => x+y )
      Some(out("out", b.changes()))
    }::Nil
  }
}

trait LMSMultiModuleApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    val mod1 = createModule[Int] { implicit n:ModuleName =>
      val t = TimerEvent(1)
      val fp = t.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 1)
      val c = fp.changes()
      val fp2 = c.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 10)
      Some(out("out1", fp2.changes()))
    }

    val mod2 = createModule[Int] { implicit n:ModuleName =>
      val t = ExternalEvent(mod1.output)
      val fp = t.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 2)
      val c = fp.changes()
      val fp2 = c.foldp((x: Rep[Int], y: Rep[Int]) => x + y, 20)
      Some(out("out2", fp2.changes()))
    }

    mod1::mod2::Nil
  }
}

import OutputGenerator.withOutFile

object LMSBehaviorAppRunner {
  def main(args: Array[String]): Unit = {

    withOutFile("LMSBehaviorStartsWith1App.c") {
      System.err.println("BehaviorStartsWith1App:")
      (new LMSBehaviorStartsWith1App with CFRPDSLApplicationRunner).compile
    }

    withOutFile("LMSBehaviorFoldp1App.c") {
      System.err.println("BehaviorFoldp1App:")
      (new LMSBehaviorFoldp1App with CFRPDSLApplicationRunner).compile
    }

    withOutFile("LMSBehaviorMap2App.c") {
      System.err.println("BehaviorMap2App:")
      (new LMSBehaviorMap2App with CFRPDSLApplicationRunner).compile
    }

    withOutFile("LMSBehaviorChangesApp.c") {
      System.err.println("BehaviorChangesApp:")
      (new LMSBehaviorChangesApp with CFRPDSLApplicationRunner).compile
    }

    withOutFile("LMSBehaviorSnapshotApp.c") {
      System.err.println("BehaviorSnapshotApp:")
      (new LMSBehaviorSnapshotApp with CFRPDSLApplicationRunner).compile
    }

    withOutFile("LMSBehaviorSnapshot2App.c") {
      System.err.println("BehaviorSnapshot2App:")
      (new LMSBehaviorSnapshot2App with CFRPDSLApplicationRunner).compile
    }

    withOutFile("LMSBehaviorSnapshot3App.c") {
      System.err.println("BehaviorSnapshot3App:")
      (new LMSBehaviorSnapshot3App with CFRPDSLApplicationRunner).compile
    }

    withOutFile("LMSBehaviorConstantApp.c") {
      System.err.println("BehaviorConstantApp:")
      (new LMSBehaviorConstantApp with SMCFRPDSLApplicationRunner).compile
    }

    withOutFile("LMSBehaviorPropagationExampleApp.c") {
      System.err.println("BehaviorPropagationExampleApp:")
      (new LMSBehaviorPropagationExampleApp with CFRPDSLApplicationRunner).compile
    }

    withOutFile("LMSMultiModuleApp.c") {
      System.err.println("MultiModuleApp:")
      (new LMSMultiModuleApp with SMCFRPDSLApplicationRunner).compile
    }

  }
}