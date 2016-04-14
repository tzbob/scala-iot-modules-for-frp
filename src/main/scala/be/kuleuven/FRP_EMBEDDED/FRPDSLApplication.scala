package be.kuleuven.FRP_EMBEDDED

/*
 * trait provided by the DSL that defines the DSL interface
 */
trait FRPDSLApplication extends FRPDSL {
  //def main(args: Array[String])
  
  def createModule (graphfun: (ModuleName)=>Unit ): Unit
  def createApplication(): Unit
}

trait FRPDSLApplicationRunner extends FRPDSLApplication with FRPDSLImpl {

  object ModuleNumber {
    private var id: Int = 0
    def nextid = {id += 1;id}
  }

  override def createModule (graphfun: (ModuleName)=>Unit ): Unit = {
    val name: String = (new String("mod")).concat(ModuleNumber.nextid.toString)
    moduleList += name
    val mod = new ModuleName(name)
    graphfun(mod)
  }
}

trait CFRPDSLApplicationRunner extends FRPDSLApplicationRunner with CFRPDSLImpl
trait SMCFRPDSLApplicationrunner extends FRPDSLApplicationRunner with SMCFRPDSLImpl