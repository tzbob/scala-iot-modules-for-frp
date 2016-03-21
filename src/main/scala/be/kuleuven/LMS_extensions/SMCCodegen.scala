package be.kuleuven.LMS_extensions

import scala.lms.internal.CCodegen

trait SMCCodegen extends CCodegen {

  import IR._

  override def quote(x: Exp[Any]) = x match {
    case Const(s: String) => "\""+s.replace("\\", "\\\\").replace("\"", "\\\"").replace("\n", "\\n")+"\""
    case _ => super.quote(x)
  }
}
