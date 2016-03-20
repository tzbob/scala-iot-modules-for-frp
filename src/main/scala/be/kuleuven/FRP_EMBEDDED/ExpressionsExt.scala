package be.kuleuven.FRP_EMBEDDED

import scala.lms.internal.Expressions

trait ExpressionsExt extends Expressions {

  case class Pointer[+T](val e: Exp[Pointer[T]])
}
