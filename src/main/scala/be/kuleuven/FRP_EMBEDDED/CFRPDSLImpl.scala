package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import scala.lms.common._


/*
 * Implementation of the FRP DSL to generate C code
 */
trait CFRPDSLImpl extends FRPDSLImpl
    with ScalaOpsPkgExp with TupledFunctionsRecursiveExp with UncheckedOpsExp { self =>

  val codegen = new CCodeGenPkg with CGenVariables with CGenTupledFunctions with CGenUncheckedOps { val IR: self.type = self }

  def emitAll(): Unit = {
    assert(codegen ne null) //careful about initialization order

    def emitForwardDefs(stream: PrintWriter): Unit = {
      for ((_,v) <- rec0) codegen.emitForwardDef(Nil, v.name, stream)(mtype(v.mB))
      for ((_,v) <- rec1) codegen.emitForwardDef(mtype(v.mA)::Nil, v.name, stream)(mtype(v.mB))
      for ((_,v) <- rec2) codegen.emitForwardDef(mtype(v.mA)::mtype(v.mA)::Nil, v.name, stream)(mtype(v.mB))
    }

    //val source = new java.io.StringWriter()
    //val stream = new java.io.PrintWriter(source,true)

    rec0.foreach { case (k,x) =>
      val stream = new PrintWriter(System.out)
      stream.println("/* FILE: " + x.name + ".c */")
      emitForwardDefs(stream)

      //TODO: ideal solution = implement in GenericCodegen.scala
      val body = codegen.reifyBlock(x.f())(mtype(x.mB))
      codegen.emitSource(Nil, body, x.name, stream)(mtype(x.mB))
    }

    rec1.foreach { case (k,x) =>
      val stream = new PrintWriter(System.out)
      stream.println("/* FILE: " + x.name + ".c */")
      emitForwardDefs(stream)
      codegen.emitSource(x.f, x.name, stream)(mtype(x.mA), mtype(x.mB))
    }

    rec2.foreach { case (k,x) =>
      val stream = new PrintWriter(System.out)
      stream.println("/* FILE: " + x.name + ".c */")
      emitForwardDefs(stream)
      codegen.emitSource2(x.f, x.name, stream)(mtype(x.mA), mtype(x.mA), mtype(x.mB))
    }

    //System.out.println(source.toString)
  }
  //emitAll()
}