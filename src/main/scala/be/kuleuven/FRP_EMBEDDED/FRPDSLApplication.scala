package be.kuleuven.FRP_EMBEDDED

/*
 * trait provided by the DSL that defines the DSL interface
 */
trait FRPDSLApplication extends FRPDSL {
  //def main(args: Array[String])

  def createMainFun
}

trait FRPDSLApplicationRunner extends FRPDSLImpl
trait CFRPDSLApplicationRunner extends CFRPDSLImpl
trait SMCFRPDSLApplicationrunner extends SMCFRPDSLImpl