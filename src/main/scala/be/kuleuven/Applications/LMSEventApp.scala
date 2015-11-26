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

trait LMSEventMergeApp extends FRPDSLApplication {

  override def createMainFun {
    val t1: Event[Int] = TimerEvent(5)
    val t2: Event[Int] = TimerEvent(10)
    val c1 = t1.constant( 1 )
    val c2 = t2.constant( 2 )
    val m = c1.merge(c2, (x:Rep[Int],y:Rep[Int])=>x+y)
    val n1 = m.map( (x:Rep[Int]) => x*2 )

    generator(n1)
  }
}

import OutputGenerator.withOutFile

object LMSEventAppRunner {

  def main(args: Array[String]): Unit = {
    /*withOutFile("LMSEventApp.c") {
      new LMSEventApp with CFRPDSLApplicationRunner
    }*/

    //withOutFile("LMSEventAppReal.c") {
    new LMSEventFilterApp with CFRPDSLApplicationRunner {
      createMainFun
      emitAll()
    }
    //}

    //withOutFile("LMSEventAppReal.c") {
      new LMSEventConstantApp with CFRPDSLApplicationRunner {
        createMainFun
        emitAll()
      }
    //}
  }
}
