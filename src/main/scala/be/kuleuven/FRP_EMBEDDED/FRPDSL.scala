package be.kuleuven.FRP_EMBEDDED

import scala.lms.common._
import java.lang.{Integer => JInteger}

trait FRPDSL
    extends ScalaOpsPkgExt with TupledFunctionsExt with UncheckedOps with LiftPrimitives with LiftString with LiftVariables with LiftBoolean
    with EventOps with BehaviorOps {

  def printEvent[A](e: Event[A]): String

  def generator: () => Rep[Unit]
}

trait FRPDSLImpl extends FRPDSL with VariablesExp with PointersExp with EventOpsImpl with BehaviorOpsImpl {

  override def printEvent[A](e: Event[A]) = {
    def printParents[B](p: Event[B]): String = {
      val x = printEvent(p)
      x.mkString(",")
    }

    e match {
      case i @ InputEvent(_) => "InputEvent@"+ JInteger.toHexString(System.identityHashCode(i))
      case c @ ConstantEvent(_,_) => "ConstantEvent@"+ JInteger.toHexString(System.identityHashCode(c)) + "(" + printParents(c.parent) + ")"
      case m @ MapEvent(_,_) => "MapEvent@" + JInteger.toHexString(System.identityHashCode(m)) + "(" + printParents(m.parent) + ")"
      case f @ FilterEvent(_,_) => "FilterEvent@" + JInteger.toHexString(System.identityHashCode(f)) + "(" + printParents(f.parent) + ")"
      case m @ MergeEvent(_,_) => "MergeEvent@" + JInteger.toHexString(System.identityHashCode(m)) +
                                      "(" + printParents(m.parentLeft) + "," + printParents(m.parentRight) + ")"
      case _ => "other"
    }
  }

  def isDisjointFor(target: NodeID, left: Set[NodeID], right: Set[NodeID]): Boolean = {
    var b: Boolean = true
    for(l <- left if l==target) {
      if(right.contains(l)) b = false
    }
    b
  }

  def getSplitNode(left: List[NodeID], right: List[NodeID]): NodeID = {
    for(l <- left) {
      if(right.contains(l)) return l
    }
    throw new IllegalStateException("Getting index of splitting node failed.")
  }

  override def generator: () => Rep[Unit] = {
    var program: () => Rep[Unit] = () => unitToRepUnit( () )

    // generate per level
    System.err.println("max level : "+ getMaxLevel)
    for( i <- 0 to getMaxLevel){
      val nodes = getNodesOnLevel(getNodeMap, i)
      nodes.foreach { case (_,x) => program = x.generateNode(program) }
    }

    //get all input events
    val inputMap = getInputEventNodes

    // generate top functions
    for( (i,j) <- inputMap) {
      System.err.println("Generate dependencies of inputnode " + i)
      program = generateTopFunction(j, program)
    }
    program
  }

  def generateTopFunction[X](n: NodeImpl[X], f: () => Rep[Unit]): () => Rep[Unit] = {
    System.err.println("top" + n.id)

    val descendantIDs = getDecendantNodeIDs(n)
    val descendantNodes = getNodesWithIDs(descendantIDs)

    // get topological ordering
    val listbuilder = scala.collection.mutable.ListBuffer.empty[NodeImpl[_]]
    for( i <- 0 to getMaxLevel)
      listbuilder ++= getNodesOnLevel(descendantNodes,i).values.toList
    val eventsTO = listbuilder.toList
    eventsTO.foreach(x => System.err.println(x.id))

    () => {
      f()
      val top = fun { () =>
        eventsTO.foreach( x => {(x.getFunction())( () ) } ) // apply the functions in this context
      }
      doApplyDecl(top)

      // TESTING !!! : delete me after!
      val testfun = fun { (x: Rep[Ptr[Int]]) =>
        println( repptr_readVal(x,1) )

        val np = repptr_ptr(x)
        ptr_assignToVal(np, 20)

        val v = var_new[Int](5)
        val pv = ptr_new[Int](readVar(v))
        println( ptr_readVal(pv) )
        ptr_assignToVal(pv, 3)
        println( ptr_readVal(pv) )
        unitToRepUnit( () )
      }
      //doApplyDecl(testfun)
      val myvar = var_new[Int](5)
      val myptr: Pointer[Int] = ptr_new[Int]( readVar(myvar) )

      val ttf = fun { () =>
        testfun(myptr.e)
        unitToRepUnit( () )
      }
      doApplyDecl(ttf)
      // END TESTING

      unitToRepUnit( () )
    }
  }

}