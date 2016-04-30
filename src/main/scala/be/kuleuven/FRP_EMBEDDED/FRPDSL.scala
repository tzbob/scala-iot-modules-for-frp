package be.kuleuven.FRP_EMBEDDED

trait FRPDSL extends EventOps with BehaviorOps {

  abstract class Module[A] {
    val name: ModuleName
    val output: OutputEvent[A]
  }

  def generateModule(module: Module[_]): Unit
}

trait FRPDSL_Impl extends FRPDSL {
  def buildFRPGraph(): Unit
  def buildProgram(modList: List[Module[_]]): () => Rep[Unit] = {
    () => {
      for (module <- modList) {
        generateModule(module)
      }
    }
  }
}
