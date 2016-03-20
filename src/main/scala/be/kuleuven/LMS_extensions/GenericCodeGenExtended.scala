package be.kuleuven.LMS_extensions

import java.io.PrintWriter

import scala.lms.internal.{Expressions, GenericCodegen}

trait GenericCodeGenExt extends GenericCodegen {

  val IR: Expressions
  import IR._

  def emitSource0[R : Typ](f: () => Exp[R], className: String, stream: PrintWriter): List[(Sym[Any], Any)] = {
    val body = reifyBlock(f())
    emitSource(Nil, body, className, stream)
  }

  def emitProgram[T:Typ](p: () => Exp[T], stream: PrintWriter): Unit = {
    val body =  reifyBlock( p() )
    emitProgram(body, stream)
  }

  def emitProgram[T:Typ](body: Block[T], out: PrintWriter): Unit = {

    withStream(out) {
      stream.println("/*****************************************\n"+
        "  Emitting C Generated Code                  \n"+
        "*******************************************/\n" +
        "#include <stdio.h>\n" +
        "#include <stdlib.h>\n" +
        "#include <string.h>\n" +
        "#include <stdbool.h>"
      )

      emitBlock(body)

      stream.println("/*****************************************\n"+
        "  End of C Generated Code                  \n"+
        "*******************************************/")
    }
  }
}