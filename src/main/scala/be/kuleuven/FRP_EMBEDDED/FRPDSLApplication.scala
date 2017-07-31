package be.kuleuven.FRP_EMBEDDED

/*
 * trait provided by the DSL that defines the DSL interface
 */
trait FRPDSLApplication extends FRPDSL {

  def createApplication(): List[Module[_]]
  def createModule[A] (graphfun: (ModuleName)=>OutputEvent[A] ): Module[A]
  def createLCDModule (graphfun: (ModuleName)=>List[(Behavior[Int], String, Int, Int)] ): Module[Nothing]
}

trait FRPDSLApplication_Impl extends FRPDSLApplication {

  object ModuleNumber {
    private var id: Int = 0
    def nextid = {id += 1;id}
  }

  override def createModule[A] (graphfun: (ModuleName)=>OutputEvent[A] ): Module[A] = {
    val name: String = new String("mod").concat(ModuleNumber.nextid.toString)
    val mod = new ModuleName(name)

    val out = graphfun(mod)

    new Module[A] {
      override val name = mod
      override val output = out
    }
  }

  override def createLCDModule (graphfun: (ModuleName)=>List[(Behavior[Int], String, Int, Int)] ): Module[Nothing] = {
    val name: String = new String("mod").concat(ModuleNumber.nextid.toString)
    val mod = new ModuleName(name)

    val list = graphfun(mod)
    printLCD(list)(mod)

    new Module[Nothing] {
      override val name = mod
      override val output = null
    }
  }

}

trait FRPDSLApplicationRunner extends FRPDSLApplication_Impl with FRPDSLImpl
trait FRPDSLOptApplicationRunner extends FRPDSLApplication_Impl with FRPDSLOptImpl
