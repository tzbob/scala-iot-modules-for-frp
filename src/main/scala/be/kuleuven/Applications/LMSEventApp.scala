package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{SMCFRPDSLApplicationRunner, CFRPDSLApplicationRunner, OutputGenerator, FRPDSLApplication}

trait LMSEventMapApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(5) // every 5 sec
      val n1 = t1.map[Int]((i) => 2 * i)
      val n2 = n1.map[Boolean]((i) => infix_%(i, 2) == 0)
      None
    }::Nil
  }
}

trait LMSEventFilterApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(5) // every 5 sec
      val n1 = t1.map[Int]((i: Rep[Int]) => 2 * i)
      val n2 = n1.filter((i: Rep[Int]) => infix_%(i, 2) == 0)
      val n3 = n2.map[Int]((i: Rep[Int]) => i + 1)
      None
    }::Nil
  }
}

trait LMSEventConstantApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(5)
      val c1: Event[Int] = t1.constant(10)
      val m1 = c1.map[Int]((i: Rep[Int]) => 2 * i)
      None
    }::Nil
  }
}

trait LMSEventMerge1App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(5)
      val c1 = t1.constant(1)

      val t2: Event[Int] = TimerEvent(10)
      val c2 = t2.constant(2)

      val m = c1.merge(c2, (x: Rep[Int], y: Rep[Int]) => x + y)
      val n1 = m.map((x: Rep[Int]) => x * 2)
      None
    }::Nil
  }
}

trait LMSEventMerge2App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(5)

      val c1 = t1.constant(1)
      val c2 = t1.constant(2)

      val m = c1.merge(c2, (x: Rep[Int], y: Rep[Int]) => x + y)
      val n1 = m.map((x: Rep[Int]) => x * 2)
      None
    }::Nil
  }
}

trait LMSEventMerge2bApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(5)

      val f1 = t1.filter((i: Rep[Int]) => infix_%(i, 2) == 0)
      val c1 = f1.constant(1)
      val c2 = t1.constant(2)

      val m = c1.merge(c2, (x: Rep[Int], y: Rep[Int]) => x + y)
      val n1 = m.map((x: Rep[Int]) => x * 2)
      None
    }::Nil
  }
}

trait LMSEventMerge3App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(5)
      val t2: Event[Int] = TimerEvent(10)

      val m1 = t1.merge(t2, (x: Rep[Int], y: Rep[Int]) => x * y)
      val c2 = t2.constant(2)

      val m2 = m1.merge(c2, (x: Rep[Int], y: Rep[Int]) => x + y)
      val n1 = m2.map((x: Rep[Int]) => x * 2)
      None
    }::Nil
  }
}

trait LMSEventMerge3bApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t1: Event[Int] = TimerEvent(5)
      val t2: Event[Int] = TimerEvent(10)

      val m1 = t1.merge(t2, (x: Rep[Int], y: Rep[Int]) => x * y)
      val map1 = m1.map((x: Rep[Int]) => x * 3)

      val c2 = t2.constant(2)

      val m2 = map1.merge(c2, (x: Rep[Int], y: Rep[Int]) => x + y)
      val n1 = m2.map((x: Rep[Int]) => x * 2)
      None
    }::Nil
  }
}

trait LMSEventMerge4App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t: Event[Int] = TimerEvent(5)

      val c1 = t.constant(1)
      val c2 = t.constant(2)
      val c3 = t.constant(3)

      val m1 = c1.merge(c2, (x: Rep[Int], y: Rep[Int]) => x + y)
      val n2 = m1.map((x: Rep[Int]) => x + 2)
      val m2 = n2.merge(c3, (x: Rep[Int], y: Rep[Int]) => x + y)

      val n1 = m2.map((x: Rep[Int]) => x * 2)
      None
    }::Nil
  }
}

trait LMSEventMerge5App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t: Event[Int] = TimerEvent(5)

      val c1: Event[Int] = t.constant(1)
      val f1: Event[Int] = c1.filter((i: Rep[Int]) => { println("filter3"); infix_%(i, 2) == 0 })
      val map1: Event[Int] = f1.map((i: Rep[Int]) => { println("map4"); i + 1 })

      val c2 = t.constant(2)
      val f2: Event[Int] = c2.filter((i: Rep[Int]) => { println("filter6"); infix_%(i, 2) == 0 })
      val map2: Event[Int] = f2.map((i: Rep[Int]) => { println("map7"); i + 1 })

      val m = map1.merge(map2, (x: Rep[Int], y: Rep[Int]) => { println("merge8"); x + y })
      val map3 = m.map((x: Rep[Int]) => { println("map9"); x * 2 })
      None
    }::Nil
  }
}

trait LMSEventMerge6aApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t: Event[Int] = TimerEvent(5)
      val tmm: Event[Int] = t.map((i: Rep[Int]) => i + 1)
      val tm: Event[Int] = tmm.map((i: Rep[Int]) => i * 2)

      val f1: Event[Int] = tm.filter((i: Rep[Int]) => infix_%(i, 2) == 0)
      val map1: Event[Int] = f1.map((i: Rep[Int]) => i + 1)

      val map2: Event[Int] = tm.map((i: Rep[Int]) => i + 1)

      val m = map1.merge(map2, (x: Rep[Int], y: Rep[Int]) => x + y)
      val map3 = m.map((x: Rep[Int]) => x * 2)
      None
    }::Nil
  }
}

trait LMSEventMerge6bApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t: Event[Int] = TimerEvent(5)
      val tmm: Event[Int] = t.map((i: Rep[Int]) => i + 1)
      val tm: Event[Int] = tmm.map((i: Rep[Int]) => i * 2)

      val c1: Event[Int] = tm.constant(1)
      val f1: Event[Int] = c1.filter((i: Rep[Int]) => infix_%(i, 2) == 0)
      val map1: Event[Int] = f1.map((i: Rep[Int]) => i + 1)

      val c2 = tm.constant(2)
      val f2: Event[Int] = c2.filter((i: Rep[Int]) => infix_%(i, 2) == 0)
      val map2: Event[Int] = f2.map((i: Rep[Int]) => i + 1)

      val m = map1.merge(map2, (x: Rep[Int], y: Rep[Int]) => x + y)
      val map3 = m.map((x: Rep[Int]) => x * 2)
      None
    }::Nil
  }
}

trait LMSEventMerge7App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t: Event[Int] = TimerEvent(5)

      val c1: Event[Int] = t.constant(1)
      val f1: Event[Int] = c1.filter((i: Rep[Int]) => i == 1)
      val f1b: Event[Int] = f1.filter((i: Rep[Int]) => i == 2)
      val map1: Event[Int] = f1b.map((i: Rep[Int]) => i + 1)

      val c2 = t.constant(2)
      val f2: Event[Int] = c2.filter((i: Rep[Int]) => i == 3)
      val map2: Event[Int] = f2.map((i: Rep[Int]) => i * 3)

      val m = map1.merge(map2, (x: Rep[Int], y: Rep[Int]) => x + y)
      val map3 = m.map((x: Rep[Int]) => x * 2)
      None
    }::Nil
  }
}

trait LMSEventMerge8App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t: Event[Int] = TimerEvent(0)

      //big left
      val m1: Event[Int] = t.map((i) => { println("map2"); i + 1 })
      //small left
      val f1: Event[Int] = m1.filter((i) => { println("filter3"); i == 1 })
      val c1: Event[Int] = f1.map((i) => {
        println("constant4"); 2
      })
      //small right
      val f2: Event[Int] = m1.filter((i) => { println("filter5"); i == 1 })
      val m2: Event[Int] = f2.map((i) => { println("map6"); i * 2 })

      val merge1: Event[Int] = c1.merge(m2, (x, y) => { println("merge7"); x + y })
      val m3: Event[Int] = merge1.map((i) => { println("map8"); i + 3 })

      //big right
      val m4: Event[Int] = t.map((i) => { println("map9"); i + 10 })


      val m = m3.merge(m4, (x, y) => { println("merge10"); x + y })
      val map3 = m.map((x) => { println("map11"); x * 2 })

      val map4 = m.map((x) => { println("map12"); x * 2 })
      None
    }::Nil
  }
}

trait LMSEventMerge9aApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t: Event[Int] = TimerEvent(2)

      val m2 = t.map((x) => { println("map2"); x * 2 })
      val m3 = t.map((x) => { println("map3"); x * 2 })

      val merge4 = m2.merge(m3, (x, y) => { println("merge4"); x + y })
      val merge5 = merge4.merge(m3, (x, y) => { println("merge5"); x + y })
      None
    }::Nil
  }
}

trait LMSEventMerge9bApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t: Event[Int] = TimerEvent(2)

      val m2 = t.map((x) => { println("map2"); x * 2 })
      val m3 = t.map((x) => { println("map3"); x * 2 })

      val merge4 = m2.merge(m3, (x, y) => { println("merge4"); x + y })
      val merge5 = m3.merge(merge4, (x, y) => { println("merge5"); x + y })
      None
    }::Nil
  }
}

trait LMSEventMerge10App extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t = TimerEvent(5)
      val mleft = t.map(x => { println("mleft"); x * 2 })
      val mleftleft = mleft.map(x => { println("mleftleft"); x * 2 })
      val mleftright = mleft.map(x => { println("mleftright"); x })
      val mleftmerge = mleftleft.merge(mleftright, (x, y) => { println("mleftmerge"); x + y })

      val e1 = mleftmerge.map(x => { println("e1"); x })

      val mright = t.map(x => { println("mright"); x + 3 })
      val e2 = mleftmerge.merge(mright, (x, y) => { println("e2"); x + y })
      None
    }::Nil
  }
}

trait LMSEventDoubleInputApp extends FRPDSLApplication {

  override def createApplication: List[Module[_]] = {
    createModule[Nothing] { implicit n:ModuleName =>
      val t1 = TimerEvent(5)
      val m1 = t1.map(x => { println("m1"); x * 2 })
      val t2 = TimerEvent(5)
      val m2 = t2.map(x => { println("m2"); x * 2 })
      None
    }::Nil
  }
}

import OutputGenerator.withOutFile

object LMSEventAppRunner {

  def main(args: Array[String]): Unit = {

    withOutFile("LMSEventMapApp.c") {
      System.err.println("MapApp:")
      new LMSEventMapApp with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventFilterApp.c") {
      System.err.println("FilterApp:")
      new LMSEventFilterApp with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventConstantApp.c") {
      System.err.println("ConstantApp:")
      new LMSEventConstantApp with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge1App.c") {
      System.err.println("MergeApp1:")
      new LMSEventMerge1App with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge2App.c") {
      System.err.println("MergeApp2:")
      new LMSEventMerge2App with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge2bApp.c") {
      System.err.println("MergeApp2b:")
      new LMSEventMerge2bApp with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge3App.c") {
      System.err.println("MergeApp3:")
      new LMSEventMerge3App with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge3bApp.c") {
      System.err.println("MergeApp3b:")
      new LMSEventMerge3bApp with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge4App.c") {
      System.err.println("MergeApp4:")
      new LMSEventMerge4App with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge5App.c") {
      System.err.println("MergeApp5:")
      new LMSEventMerge5App with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge6aApp.c") {
      System.err.println("MergeApp6a:")
      new LMSEventMerge6aApp with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge6bApp.c") {
      System.err.println("MergeApp6b:")
      new LMSEventMerge6bApp with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge7App.c") {
      System.err.println("MergeApp7:")
      new LMSEventMerge7App with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge8App.c") {
      System.err.println("MergeApp8:")
      new LMSEventMerge8App with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge9aApp.c") {
      System.err.println("MergeApp9a:")
      new LMSEventMerge9aApp with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge9bApp.c") {
      System.err.println("MergeApp9b:")
      new LMSEventMerge9bApp with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventMerge10App.c") {
      System.err.println("MergeApp10:")
      new LMSEventMerge10App with CFRPDSLApplicationRunner
    }

    withOutFile("LMSEventDoubleInputApp.c") {
      System.err.println("DoubleInputApp:")
      new LMSEventDoubleInputApp with CFRPDSLApplicationRunner
    }

  }
}