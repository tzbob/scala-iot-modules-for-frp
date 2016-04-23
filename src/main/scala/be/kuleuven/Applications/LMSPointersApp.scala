package be.kuleuven.Applications

import be.kuleuven.FRP_EMBEDDED.{SMCFRPDSLApplicationRunner, CFRPDSLApplicationRunner}
import be.kuleuven.FRP_EMBEDDED.OutputGenerator._

object LMSPointerAppRunner {

  def main(args: Array[String]): Unit = {

    withOutFile("LMSPointerApp.c") {
      new SMCFRPDSLApplicationRunner {

        override def createApplication: List[Module[_]] = {
          System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")

          val program: () => Rep[Unit] =
            () => {
              val testfun = fun { (x: Rep[Ptr[Int]]) =>
                ptr_assignToVal(x, 20)

                val v = var_new[Int](5)
                val pv = ptr_new[Int](readVar(v))
                println(ptr_readVal(pv))
                ptr_assignToVal(pv, 3)
                println(ptr_readVal(pv))
                unitToRepUnit(())
              }

              val ttf = fun { () =>
                val myvar = var_new[Int](5)
                val myptr: Rep[Pointer[Int]] = ptr_new[Int](readVar(myvar))
                print("Before call: ")
                println(ptr_readVal(myptr))
                testfun(myptr)
                print("After call: ")
                println(ptr_readVal(myptr))
                unitToRepUnit(())
              }
              doApplyDecl(ttf)

              unitToRepUnit(())
            }

          System.err.println("\n")
          emitProgram(program)
          System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
          System.err.println("\n\n")
          null
        }
      }.createApplication
    }

    withOutFile("LMSPointerArrayApp.c") {
      new SMCFRPDSLApplicationRunner {

        override def createApplication: List[Module[_]] = {
          System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")

          val program: () => Rep[Unit] =
            () => {
              val arrayfun = fun { (x: Rep[Ptr[Int]]) =>

                ptr_assignToValIndexed(x, 2, 20)

                val ar: Rep[Array[Int]] = array_obj_new[Int](5)
                ar.update(0, 1)
                ar.update(1, 2)
                ar.update(2, 3)
                println(ar.apply(0))
              }
              val testarrayfun = fun { () =>
                val ar: Rep[Array[Int]] = array_obj_new[Int](3)

                ar.update(0, 10)
                ar.update(1, 20)
                ar.update(2, 30)

                arrayfun(ar)

                println(ptr_readValIndexed(ar, 0))
                println(ptr_readValIndexed(ar, 1))
                println(ptr_readValIndexed(ar, 2))

                unitToRepUnit(())

              }
              doApplyDecl(testarrayfun)

              unitToRepUnit(())
            }

          System.err.println("\n")
          emitProgram(program)
          System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
          System.err.println("\n\n")
          null
        }
      }.createApplication
    }


  }
}