package be.kuleuven.FRP_EMBEDDED

import java.io.PrintWriter

import scala.lms.common._

trait FRPDSL extends ScalaOpsPkg with TupledFunctions with UncheckedOps with LiftPrimitives with LiftString with LiftVariables
    with EventOps with BehaviorOps {

  // keep track of top level functions
  case class TopLevel[A,B](name: String, mA: Typ[A], mB:Typ[B], f: Rep[A] => Rep[B])
  val rec = new scala.collection.mutable.HashMap[String,TopLevel[_,_]]
  def toplevel[A:Typ,B:Typ](name: String)(f: Rep[A] => Rep[B]): Rep[A] => Rep[B] = {
    val g = (x: Rep[A]) => unchecked[B](name,"(",x,")")
    rec.getOrElseUpdate(name, TopLevel(name, typ[A], typ[B], f))
    g
  }
}

/*
 * Implementation of the FRP DSL
 */
trait FRPDSLImpl extends FRPDSL with ScalaOpsPkgExp with TupledFunctionsRecursiveExp with UncheckedOpsExp
    with EventOpsImpl with BehaviorOpsImpl {

  self =>
  val codegen = new CCodeGenPkg with CGenVariables with CGenTupledFunctions with CGenUncheckedOps { val IR: self.type = self }
  def emitAll(): Unit = {
    assert(codegen ne null) //careful about initialization order
    rec.foreach { case (k,x) =>
      val stream = new PrintWriter(System.out)
      stream.println("/* FILE: " + x.name + ".c */")
      for ((_,v) <- rec) codegen.emitForwardDef(mtype(v.mA)::Nil, v.name, stream)(mtype(v.mB))
      codegen.emitSource(x.f, x.name, stream)(mtype(x.mA), mtype(x.mB))
    }
  }
  emitAll()
}