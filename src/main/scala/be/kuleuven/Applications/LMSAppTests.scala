package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED._

trait LMSAppTest1 extends FRPDSLApplication {

  override def createMainFun {
    toplevel1("main") { x: Rep[Int] =>
      var i = 0
      while (i < 10) {
        printf("Hello, world! %d\n", i)
        i = i + 1
      }
      0
    }
  }
}


trait LMSAppTest2 extends FRPDSLApplication {

  override def createMainFun {
    toplevel1("main") { x: Rep[Int] =>
      def fac: Rep[((Int, Int)) => Int] = fun { (n, dummy) =>
        if (n == 0) 1 else n * fac(n - 1, dummy)
      }
      printf("Hello, world! %d\n", fac(4, 0))
      0
    }
  }
}


trait LMSAppTest3 extends FRPDSLApplication {

  override def createMainFun: Unit = {
    val test2 = toplevel1("test2") { x: Rep[Int] =>
      printf("Hello, world: test2\n")
      x
    }

    val test1 = toplevel1("test1") { x: Rep[Int] =>
      printf("Hello, world: test1\n")
      test2(x)
    }

    val main = toplevel1("main") { x: Rep[Int] =>
      printf("Hello, world: main\n")
      test1(x)
    }
  }
}



import OutputGenerator.withOutFile

object LMSAppTestsRunner {

  def main(args: Array[String]): Unit = {
    withOutFile("LMStest1.c") {
      new LMSAppTest1 with CFRPDSLApplicationRunner {
        createMainFun
        emitAll
      }
    }
    withOutFile("LMStest2.c") {
      new LMSAppTest2 with CFRPDSLApplicationRunner {
        createMainFun
        emitAll
      }

    }
    withOutFile("LMStest3.c") {
      new LMSAppTest3 with CFRPDSLApplicationRunner {
        createMainFun
        emitAll
      }
    }
  }
}