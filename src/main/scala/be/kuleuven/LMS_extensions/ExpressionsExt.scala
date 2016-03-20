package be.kuleuven.LMS_extensions

import scala.lms.internal.Expressions

trait ExpressionsExt extends Expressions {

  case class Pointer[+T](val e: Exp[Pointer[T]])
}
