package be.kuleuven.FRP_EMBEDDED


trait LMSAppTest1 extends FRPDSLApplication {

  toplevel("main") { x: Rep[Int] =>
    var i = 0
    while (i < 10) {
      printf("Hello, world! %d\n", i)
      i = i + 1
    }
    0
  }

}


trait LMSAppTest2 extends FRPDSLApplication {

  toplevel("main") { x: Rep[Int] =>
    def fac: Rep[((Int,Int))=>Int] = fun { (n, dummy) =>
      if (n == 0) 1 else n * fac(n - 1, dummy)
    }
    printf("Hello, world! %d\n", fac(4,0))
    0
  }

}


trait LMSAppTest3 extends FRPDSLApplication {

  val main = toplevel("main") { x: Rep[Int] =>
    printf("Hello, world: main\n")
    test1(x)
  }

  val test1 = toplevel("test1") { x: Rep[Int] =>
    printf("Hello, world: test1\n")
    test2(x)
  }

  val test2 = toplevel("test2") { x: Rep[Int] =>
    printf("Hello, world: test2\n")
    x
  }

}


import OutputGenerator.withOutFile

object LMSAppTestsRunner {

  def main(args: Array[String]): Unit = {
    withOutFile("LMStest1.c") {
      new LMSAppTest1 with FRPDSLApplicationRunner
    }
    withOutFile("LMStest2.c") {
      new LMSAppTest2 with FRPDSLApplicationRunner
    }
    withOutFile("LMStest3.c") {
      new LMSAppTest3 with FRPDSLApplicationRunner
    }
  }
}