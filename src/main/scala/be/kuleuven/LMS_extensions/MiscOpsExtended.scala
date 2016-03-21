package be.kuleuven.LMS_extensions

import scala.lms.common.{CGenMiscOps, MiscOpsExp, MiscOps}

trait MiscOpsExt extends MiscOps
trait MiscOpsExpExt extends MiscOpsExp

trait CGenMiscOpsExt extends CGenMiscOps with SMCCodegen {

  import IR._

  override def quoteRawString(s: Exp[Any]): String = {
    remap(s.tp) match {
      case "string" => quote(s)
      case _ => quote(s)
    }
  }
}