package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import scala.lms.common._


/*
 * Implementation of the FRP DSL to generate C code
 */
trait CFRPDSLImpl
    extends FRPDSL with ScalaOpsPkgExp with TupledFunctionsRecursiveExp with UncheckedOpsExp
    with EventOpsImpl with BehaviorOpsImpl { self =>

  val codegen = new CCodeGenPkg with CGenVariables with CGenTupledFunctions with CGenUncheckedOps { val IR: self.type = self }

  def emitAll(): Unit = {
    assert(codegen ne null) //careful about initialization order

    //val source = new java.io.StringWriter()
    //val stream = new java.io.PrintWriter(source,true)

    rec.foreach { case (k,x) =>
      val stream = new PrintWriter(System.out)
      stream.println("/* FILE: " + x.name + ".c */")
      for ((_,v) <- rec) codegen.emitForwardDef(mtype(v.mA)::Nil, v.name, stream)(mtype(v.mB))
      codegen.emitSource(x.f, x.name, stream)(mtype(x.mA), mtype(x.mB))
    }

    //System.out.println(source.toString)
  }
  emitAll()
}