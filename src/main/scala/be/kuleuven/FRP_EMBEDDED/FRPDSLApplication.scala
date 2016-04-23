package be.kuleuven.FRP_EMBEDDED

/*
 * trait provided by the DSL that defines the DSL interface
 */
trait FRPDSLApplication extends FRPDSL {
  //def main(args: Array[String])
  
  def createModule[A] (graphfun: (ModuleName)=>Option[OutputEvent[A]] ): Module[A]
  def createApplication(): List[Module[_]]
  //TODO: make it return a list of modules
  // This list of modules can be fed to generator -> generateModule
  // -> would imply loosing the moduleList = more functional programming
}

trait FRPDSLApplicationRunner extends FRPDSLApplication with FRPDSLImpl {

  object ModuleNumber {
    private var id: Int = 0
    def nextid = {id += 1;id}
  }

  override def createModule[A] (graphfun: (ModuleName)=>Option[OutputEvent[A]] ): Module[A] = {
    val name: String = (new String("mod")).concat(ModuleNumber.nextid.toString)
    val mod = new ModuleName(name)

    val optOut = graphfun(mod)

    val out = optOut match {
      case Some(out) =>
        out
      case None =>
        null
    }

    val module = new Module[A] {
      override val name = mod
      override val output = out
    }

    module
  }
}

trait CFRPDSLApplicationRunner extends FRPDSLApplicationRunner with CFRPDSLImpl {
  System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
  System.err.println("Creating flow graph...")
  val modList = createApplication
  System.err.println("\n")
  buildFRPGraph()
  System.err.println("\n")
  val program = buildProgram(modList)
  System.err.println("\n")
  emitProgram(program)
  System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
  System.err.println("\n\n")
}
trait SMCFRPDSLApplicationRunner extends FRPDSLApplicationRunner with SMCFRPDSLImpl {
  System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
  System.err.println("Creating flow graph...")
  val modList = createApplication
  System.err.println("\n")
  buildFRPGraph()
  System.err.println("\n")
  val program = buildProgram(modList)
  System.err.println("\n")
  emitProgram(program)
  System.err.println("%%%%%%%%%%%%%%%%%%%%%%%%%%")
  System.err.println("\n\n")
}