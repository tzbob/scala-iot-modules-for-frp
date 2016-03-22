package be.kuleuven.LMS_extensions

import scala.lms.internal.CCodegen

trait SMCCodegen extends CCodegen with SMCLikeCodeGen {

  import IR._

  override def remap[A](m: Typ[A]) : String = {
    m.toString match {
      case "java.lang.String" => "string"
      case _ => super.remap(m)
    }
  }

  override def quote(x: Exp[Any]) = x match {
    case Const(s: String) => "\""+s.replace("\\", "\\\\").replace("\"", "\\\"").replace("\n", "\\n")+"\""
    case _ => super.quote(x)
  }
}
