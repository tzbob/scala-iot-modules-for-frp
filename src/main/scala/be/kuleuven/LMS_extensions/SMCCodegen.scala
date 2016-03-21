package be.kuleuven.LMS_extensions

import scala.lms.internal.CCodegen

trait SMCCodegen extends CCodegen {

  import IR._

  override def quote(x: Exp[Any]) = x match {
    case Const(s: String) => super.quote(x)
    case _ => super.quote(x)
  }
}
