package be.kuleuven.FRP_EMBEDDED

import java.io.{FileOutputStream, PrintStream, File}


/*
 * trait provided by the DSL that defines the DSL interface
 */
trait FRPDSLApplication extends FRPDSL {
  //def main(args: Array[String])
}

trait CFRPDSLApplicationRunner extends CFRPDSLImpl
trait ScalaFRPDSLApplicationRunner extends ScalaFRPDSLImpl

