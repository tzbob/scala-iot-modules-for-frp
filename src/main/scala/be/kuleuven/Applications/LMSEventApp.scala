package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{CFRPDSLApplicationRunner, OutputGenerator, FRPDSLApplication}

/*
 * Hard coded representation of a user program
 */
trait LMSEventApp extends FRPDSLApplication {

  override def createMainFun {
    val mapfun = toplevel("mapevent") { x: Rep[Int] =>
      2 * x
    }

    toplevel("main") { x: Rep[Int] =>
      printf("Result of mapping: %d\n", mapfun(x))
    }
    ()
  }
}

/*
 * More realistic representation of the user program
 */
trait LMSEventMapApp extends FRPDSLApplication {

  override def createMainFun {
    val t1: Event[Int] = TimerEvent(5) // every 5 sec
    val n1 = t1.map[Int]( (i:Rep[Int]) => 2*i )
    val n2 = n1.map[Boolean]( (i:Rep[Int]) => infix_%(i,2)==0 )

    generator(n2)
  }
}

trait LMSEventFilterApp extends FRPDSLApplication {

  override def createMainFun {
    val t1: Event[Int] = TimerEvent(5) // every 5 sec
    val n1 = t1.map[Int]( (i:Rep[Int]) => 2*i )
    val n2 = n1.filter( (i:Rep[Int]) => infix_%(i,2)==0)
    val n3 = n2.map[Int]( (i:Rep[Int]) => i+1)

    generator(n3)
  }
}

trait LMSEventConstantApp extends FRPDSLApplication {

  override def createMainFun {
    val t1: Event[Int] = TimerEvent(5)
    val c1: Event[Int] = t1.constant(10)
    val m1 = c1.map[Int]( (i:Rep[Int]) => 2*i )

    generator(m1)
  }
}

trait LMSEventMerge1App extends FRPDSLApplication {

  override def createMainFun {
    val t1: Event[Int] = TimerEvent(5)
    val c1 = t1.constant( 1 )

    val t2: Event[Int] = TimerEvent(10)
    val c2 = t2.constant( 2 )

    val m = c1.merge(c2, (x:Rep[Int],y:Rep[Int])=>x+y)
    val n1 = m.map( (x:Rep[Int]) => x*2 )

    generator(n1)
  }
}

trait LMSEventMerge2App extends FRPDSLApplication {

  override def createMainFun {
    val t1: Event[Int] = TimerEvent(5)

    val c1 = t1.constant( 1 )
    val c2 = t1.constant( 2 )

    val m = c1.merge(c2, (x:Rep[Int],y:Rep[Int])=>x+y)
    val n1 = m.map( (x:Rep[Int]) => x*2 )

    generator(n1)
  }
}

trait LMSEventMerge3App extends FRPDSLApplication {

  override def createMainFun {
    val t1: Event[Int] = TimerEvent(5)
    val t2: Event[Int] = TimerEvent(10)

    val m1 = t1.merge(t2, (x:Rep[Int],y:Rep[Int])=>x*y)
    val c2 = t2.constant( 2 )

    val m2 = m1.merge(c2, (x:Rep[Int],y:Rep[Int])=>x+y)
    val n1 = m2.map( (x:Rep[Int]) => x*2 )

    generator(n1)
  }
}

trait LMSEventMerge4App extends FRPDSLApplication {

  override def createMainFun {
    val t: Event[Int] = TimerEvent(5)

    val c1 = t.constant( 1 )
    val c2 = t.constant( 2 )
    val c3 = t.constant( 3 )

    val m1 = c1.merge(c2, (x:Rep[Int],y:Rep[Int])=>x+y)
    val n2 = m1.map( (x:Rep[Int]) => x+2)
    val m2 = n2.merge(c3, (x:Rep[Int],y:Rep[Int])=>x+y)

    val n1 = m2.map( (x:Rep[Int]) => x*2 )

    generator(n1)
  }
}

trait LMSEventMerge5App extends FRPDSLApplication {

  override def createMainFun {
    val t: Event[Int] = TimerEvent(5)

    val c1: Event[Int] = t.constant( 1 )
    val f1: Event[Int] = c1.filter( (i:Rep[Int]) => infix_%(i,2)==0 )
    val map1: Event[Int] = f1.map( (i:Rep[Int]) => i+1)

    val c2 = t.constant( 2 )
    val f2: Event[Int] = c2.filter( (i:Rep[Int]) => infix_%(i,2)==0 )
    val map2: Event[Int] = f2.map( (i:Rep[Int]) => i+1)

    val m = map1.merge(map2, (x:Rep[Int],y:Rep[Int])=>x+y)
    val map3 = m.map( (x:Rep[Int]) => x*2 )

    generator(map3)
  }
}

import OutputGenerator.withOutFile

object LMSEventAppRunner {

  def main(args: Array[String]): Unit = {
    /*withOutFile("LMSEventApp.c") {
      new LMSEventApp with CFRPDSLApplicationRunner
    }*/
    /*
    //withOutFile("LMSEventAppReal.c") {
    new LMSEventFilterApp with CFRPDSLApplicationRunner {
      System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
      System.out.println("FilterApp:")
      System.out.println("Creating flow graph...")
      createMainFun
      System.out.println("\n")
      emitAll()
      System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
      System.out.println("\n\n")
    }
    //}

    //withOutFile("LMSEventAppReal.c") {
      new LMSEventConstantApp with CFRPDSLApplicationRunner {
        System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.out.println("ConstantApp:")
        System.out.println("Creating flow graph...")
        createMainFun
        System.out.println("\n")
        emitAll()
        System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.out.println("\n\n")
      }
    //}

    withOutFile("LMSEventMerge1App.c") {
    new LMSEventMerge1App with CFRPDSLApplicationRunner {
      System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
      System.out.println("MergeApp1:")
      System.out.println("Creating flow graph...")
      createMainFun
      System.out.println("\n")
      emitAll()
      System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
      System.out.println("\n\n")
    }
    }

    withOutFile("LMSEventMerge2App.c") {
    new LMSEventMerge2App with CFRPDSLApplicationRunner {
      System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
      System.out.println("MergeApp2:")
      System.out.println("Creating flow graph...")
      createMainFun
      System.out.println("\n")
      emitAll()
      System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
      System.out.println("\n\n")
    }
    }

    withOutFile("LMSEventMerge3App.c") {
    new LMSEventMerge3App with CFRPDSLApplicationRunner {
      System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
      System.out.println("MergeApp3:")
      System.out.println("Creating flow graph...")
      createMainFun
      System.out.println("\n")
      //printEventTree()
      //System.out.println("\n")
      emitAll()
      System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
      System.out.println("\n\n")
    }
    }

    withOutFile("LMSEventMerge4App.c") {
      new LMSEventMerge4App with CFRPDSLApplicationRunner {
        System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.out.println("MergeApp4:")
        System.out.println("Creating flow graph...")
        createMainFun
        System.out.println("\n")
        //printEventTree()
        //System.out.println("\n")
        emitAll()
        System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.out.println("\n\n")
      }
    }
    */
    withOutFile("LMSEventMerge5App.c") {
      new LMSEventMerge5App with CFRPDSLApplicationRunner {
        System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
        System.out.println("MergeApp5:")
        System.out.println("Creating flow graph...")
        createMainFun
        System.out.println("\n")
        //printEventTree()
        //System.out.println("\n")
        emitAll()
        System.out.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
      }
    }
  }
}
