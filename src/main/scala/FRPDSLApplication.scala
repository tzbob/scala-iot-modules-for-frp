
/*
 * trait provided by the DSL that defines the DSL interface
 */
trait FRPDSLApplication extends FRPDSL {
  def main(args: Array[String])
}

trait FRPDSLApplicationRunner extends FRPDSLImpl
