package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import scala.lms.common._


/*
 * Implementation of the FRP DSL to generate Scala code
 */
trait ScalaFRPDSLImpl extends FRPDSLImpl
    with ScalaOpsPkgExp with TupledFunctionsRecursiveExp with UncheckedOpsExp { self =>

  val codegen = new ScalaCodeGenPkg with ScalaGenVariables with ScalaGenTupledFunctions with ScalaGenUncheckedOps { val IR: self.type = self}

  def emitAll(): Unit = {
    assert(codegen ne null) //careful about initialization order

    //val source = new java.io.StringWriter()
    //val stream = new java.io.PrintWriter(source,true)

    rec1.foreach { case (k,x) =>
      val stream = new PrintWriter(System.out)
      stream.println("/* FILE: " + x.name + ".scala */")
      codegen.emitSource(x.f, x.name, stream)(mtype(x.mA), mtype(x.mB))
    }

    rec2.foreach { case (k,x) =>
      val stream = new PrintWriter(System.out)
      stream.println("/* FILE: " + x.name + ".scala */")
      codegen.emitSource2(x.f, x.name, stream)(mtype(x.mA), mtype(x.mA), mtype(x.mB))
    }

    //System.out.println(source.toString)
  }
  emitAll()
}