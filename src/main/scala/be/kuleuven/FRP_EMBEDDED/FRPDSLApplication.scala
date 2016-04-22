package be.kuleuven.FRP_EMBEDDED

/*
 * trait provided by the DSL that defines the DSL interface
 */
trait FRPDSLApplication extends FRPDSL {
  //def main(args: Array[String])

  abstract class Module[A] {
    val output: OutputEvent[A]
  }

  def createModule[A] (graphfun: (ModuleName)=>Option[OutputEvent[A]] ): Module[A]
  def createApplication(): Unit
}

trait FRPDSLApplicationRunner extends FRPDSLApplication with FRPDSLImpl {

  object ModuleNumber {
    private var id: Int = 0
    def nextid = {id += 1;id}
  }

  override def createModule[A] (graphfun: (ModuleName)=>Option[OutputEvent[A]] ): Module[A] = {
    val name: String = (new String("mod")).concat(ModuleNumber.nextid.toString)
    val mod = new ModuleName(name)
    moduleNameList += mod
    graphfun(mod)

    val out = getOutMap.get(mod) match {
      case Some(outList) =>
        outList.head
      case None =>
        null
    }

    new Module[A] {
      override val output = out.asInstanceOf[OutputEvent[A]]
    }
  }
}

trait CFRPDSLApplicationRunner extends FRPDSLApplicationRunner with CFRPDSLImpl
trait SMCFRPDSLApplicationRunner extends FRPDSLApplicationRunner with SMCFRPDSLImpl