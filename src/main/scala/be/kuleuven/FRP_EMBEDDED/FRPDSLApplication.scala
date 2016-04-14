package be.kuleuven.FRP_EMBEDDED

/*
 * trait provided by the DSL that defines the DSL interface
 */
trait FRPDSLApplication extends FRPDSL {
  //def main(args: Array[String])
  
  def createModule(moduleName: String) (graphfun: ()=>Unit ): Unit
  def createMainFun(): Unit
  def createApplication(): Unit
}

trait FRPDSLApplicationRunner extends FRPDSLApplication with FRPDSLImpl {

  override def createModule(moduleName: String) (graphfun: ()=>Unit ): Unit = {
    if(moduleMap.contains(moduleName))
      throw new IllegalArgumentException("Two modules with the same name.")
    moduleMap += ((moduleName, graphfun))
  }

  override def createMainFun(): Unit = {
    for( (moduleName, graphfun) <- moduleMap) {
      activeModule = moduleName
      graphfun()
    }
  }
}

trait CFRPDSLApplicationRunner extends FRPDSLApplicationRunner with CFRPDSLImpl
trait SMCFRPDSLApplicationrunner extends FRPDSLApplicationRunner with SMCFRPDSLImpl