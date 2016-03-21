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

trait LMSBehaviorMap2App extends FRPDSLApplication {

  override def createMainFun {
    val t1: Event[Int] = TimerEvent(1) // every 5 sec
    val m1 = t1.map[Int]( (i) => 1 )

    val b1 = m1.foldp((x: Rep[Int], y: Rep[Int]) => x+y, 1)

    val t2 = TimerEvent(2)
    val m2 = t2.map( (i) => 2)
    val b2 = m2.foldp( (x:Rep[Int],y:Rep[Int]) => x+y, 1)

    val map2 = b1.map2(b2, (x:Rep[Int],y:Rep[Int]) => x*y)
  }
}

trait LMSBehaviorChangesApp extends FRPDSLApplication {
  override def createMainFun: Unit = {
    val t = TimerEvent(1)
    val fp = t.foldp( (x:Rep[Int], y: Rep[Int])=>x+y, 1)
    val c = fp.changes()
    val fp2 = c.foldp( (x:Rep[Int], y: Rep[Int])=>x+y, 10)
  }
}

trait LMSBehaviorSnapshotApp extends FRPDSLApplication {
  override def createMainFun: Unit = {
    val t = TimerEvent(10)
    val fp1 = t.foldp( (x:Rep[Int],y:Rep[Int])=>x+y, 0)

    val t2 = TimerEvent(5)

    val ss = fp1.snapshot(t2)

    val fp2 = ss.foldp( (x:Rep[Int],y:Rep[Int])=>x+y, 0)
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
        buildFRPGraph()
        System.err.println("\n")
        val program = buildProgram()
        System.err.println("\n")
        emitProgram(program)
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
        buildFRPGraph()
        System.err.println("\n")
        val program = buildProgram()
        System.err.println("\n")
        emitProgram(program)
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("\n\n")
      }
    }

    withOutFile("LMSBehaviorMap2App.c") {
      new LMSBehaviorMap2App with CFRPDSLApplicationRunner {
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("BehaviorMap2App:")
        System.err.println("Creating flow graph...")
        createMainFun
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

    withOutFile("LMSBehaviorChangesApp.c") {
      new LMSBehaviorChangesApp with CFRPDSLApplicationRunner {
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("BehaviorChangesApp:")
        System.err.println("Creating flow graph...")
        createMainFun
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

    withOutFile("LMSBehaviorSnapshotApp.c") {
      new LMSBehaviorSnapshotApp with CFRPDSLApplicationRunner {
        System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.err.println("BehaviorSnapshotApp:")
        System.err.println("Creating flow graph...")
        createMainFun
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
