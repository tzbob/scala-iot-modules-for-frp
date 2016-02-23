package be.kuleuven.FRP_EMBEDDED

import scala.lms.common._
import java.lang.{Integer => JInteger}

trait FRPDSL
    extends ScalaOpsPkgExt with TupledFunctions with UncheckedOps with LiftPrimitives with LiftString with LiftVariables with LiftBoolean
    with EventOps with BehaviorOps {

  def printEvent[A](e: Event[A]): String

  def generator[A](e: Event[A]): Unit
  def generator[A](b: Behavior[A]): Unit

  // keep track of top level functions
  // TODO: can be removed eventually, user won't need to define them
  def toplevel1[A:Typ,B:Typ](name: String)(f: Rep[A] => Rep[B]): Rep[A] => Rep[B]
}

trait FRPDSLImpl extends FRPDSL with EventOpsImpl with BehaviorOpsImpl {

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

  def printEventTree(): Unit = {
    System.out.println(nodeMap)
  }

  def myComposeFunction[A,B,C,D]
  (first:Rep[B] => Rep[A], second:Rep[C] => Rep[B]): Rep[C] => Rep[A]  = {
    x:Rep[C] => val y = second(x);first(y)
  }

  def myComposeCheckedFunction[A:Typ,B,C,D]
  (f:Rep[B] => Rep[A], g:Rep[C] => Rep[B], initBranch: () => Rep[Boolean]): Rep[C] => Rep[A]  = {
    x: Rep[C] =>
      // Actually an unsafe if !
      // We need to make sure ourself this new variable is never used if initBranch bool is false
      val v: Var[A] = vardecl_new[A]()
      if (initBranch()) v = f(g(x))
      v
  }

  def myComposeUnit[A,B]
  (first:Rep[B] => Rep[A], second:()=>Rep[B]): () => Rep[A] = {
    () => val y = second(); first(y)
  }

  def myComposeCombinedFunction[A,B]
  (first:Rep[A]=>Rep[B], second:Rep[A]=>Rep[B], combo:(Rep[B],Rep[B])=>Rep[B]): Rep[A]=>Rep[B] = {
    x:Rep[A] =>
      val y = first(x)
      val z = second(x)
      val c = combo(y,z)
      c
  }

  def isDisjointFor(target: EventID, left: Set[EventID], right: Set[EventID]): Boolean = {
    var b: Boolean = true
    for(l <- left if l==target) {
      if(right.contains(l)) b = false
    }
    b
  }

  def getSplitNode(left: List[EventID], right: List[EventID]): EventID = {
    for(l <- left) {
      if(right.contains(l)) return l
    }
    throw new IllegalStateException("Getting index of splitting node failed.")
  }

  def hasDirectPath(e: Event[_], splitID: EventID): Boolean = {
    if(e.id == splitID) true
    else {
      e match {
        case en @ FilterEvent(_,_) => false
        case en @ ConstantEvent(_,_) => hasDirectPath(en.parent, splitID)
        case en @ MapEvent(_,_) => hasDirectPath(en.parent, splitID)
        case en @ MergeEvent(_,_) =>
          val l = if(en.leftAncestors.contains(splitID)){
            hasDirectPath(en.parentLeft, splitID)
          } else { false }
          val r = if(en.rightAncestors.contains(splitID)){
            hasDirectPath(en.parentRight, splitID)
          } else { false }
          (l || r)

        case en @ InputEvent(_) =>
          throw new IllegalStateException("Searching for filter failed because of Input Event type")
        case _ =>
          throw new IllegalStateException("Searching for filter failed because of Unknown Event type")
      }
    }
  }

  //NOTE: One propagation considers only 1 active input!
  override def generator[X](e: Event[X]): Unit = {

    def generateCombRec[B,MergeIn:Typ,InputOut]
      (
        e:Event[B], f:Rep[B]=>Rep[MergeIn],
        initBranch:()=>Rep[Boolean], setBranchFalse:()=>Rep[Unit],
        inputID: EventID,
        splitID: EventID
      )
    : Rep[InputOut]=>Rep[MergeIn] = {
      e match {
        case en @ MergeEvent(_,_) =>
          if (en.id == splitID) {
            f.asInstanceOf[Rep[InputOut]=>Rep[MergeIn]]
          }
          else {

            if (isDisjointFor(inputID, en.inputIDsLeft, en.inputIDsRight)) {
              if (en.inputIDsLeft.contains(inputID)) generateCombRec(en.parentLeft, f, initBranch, setBranchFalse, inputID, splitID)
              else generateCombRec(en.parentRight, f, initBranch, setBranchFalse, inputID, splitID)
            }
            else {
              System.err.println("MergeEvent(ID:" + en.id + ") ID=" + inputID + ": Non-Disjoint")

              val innerSplitID = getSplitNode(en.leftAncestors, en.rightAncestors)
              val splitNode: Event[_] =
                nodeMap.get(innerSplitID) match {
                  case Some(e) => e
                  case None => throw new IllegalStateException("Node does not exist.")
                }

              //build left function until target input
              val idfun: Rep[en.In] => Rep[en.In] = (x: Rep[en.In]) => x
              lazy val leftOk: Var[Boolean] = var_new(unit(true))
              val initLeft: ()=>Rep[Boolean] = { () => leftOk }
              val setLeftFalse:()=>Rep[Unit] = { () => var_assign(leftOk, unit(false)) }
              val leftfun: Rep[splitNode.Out] => Rep[en.In] = generateCombRec(en.parentLeft, idfun, initLeft, setLeftFalse, inputID, innerSplitID)(en.typIn)
              //build right function until target input
              lazy val rightOk: Var[Boolean] = var_new(unit(true))
              val initRight: ()=>Rep[Boolean] = { () => rightOk }
              val setRightFalse: ()=>Rep[Unit] = { () => var_assign(rightOk, unit(false)) }
              val rightfun: Rep[splitNode.Out] => Rep[en.In] = generateCombRec(en.parentRight, idfun, initRight, setRightFalse, inputID, innerSplitID)(en.typIn)
              val mergeFun: (Rep[en.In], Rep[en.In]) => Rep[en.Out] = toplevel2("mergefun" + en.id)(en.mergeFun)(en.typIn, en.typOut)

              def createConditional[X,Y:Typ]
              (
                leftfun: Rep[X]=>Rep[Y], rightfun: Rep[X]=>Rep[Y], mergefun: (Rep[Y],Rep[Y])=>Rep[Y],
                leftOk: ()=>Rep[Boolean], rightOk: ()=>Rep[Boolean]
                ) : Rep[X] => Rep[Y] = {
                x =>
                  val leftval = leftfun(x)
                  val rightval = rightfun(x)

                  if(!leftOk() && !rightOk()) {
                    initBranch()
                    setBranchFalse()
                  }

                  if(leftOk() && rightOk()) {
                    mergefun(leftval,rightval)
                  }
                  else if(leftOk()) leftval
                  else rightval
              }

              val g: Rep[splitNode.Out]=>Rep[en.Out] =
                createConditional(leftfun, rightfun, mergeFun, initLeft, initRight)(en.typIn)

              val x: Rep[splitNode.Out] => Rep[MergeIn] = myComposeCheckedFunction(f,g, initBranch)
                /*if(hasDirectPath(en.parentLeft,splitID) || hasDirectPath(en.parentRight, splitID)) {
                  myComposeFunction(f,g)
                } else { myComposeCheckedFunction(f, g, initBranch) }*/
              generateCombRec(splitNode, x.asInstanceOf[Rep[Any]=>Rep[MergeIn]], initBranch, setBranchFalse, inputID, splitID)
              //x.asInstanceOf[Rep[InputOut]=>Rep[MergeIn]] //TODO: fix typecast (because of InputOut type -> totally useless)
            }
          }

        case en @ FilterEvent(_,_) =>
          if (en.id == splitID) {
            f.asInstanceOf[Rep[InputOut]=>Rep[MergeIn]]
          }
          else {
            val filterfun: (Rep[en.In] => Rep[Boolean]) = toplevel1("filterfun" + en.id)(en.filterFun)(en.typIn, typ[Boolean])
            val g: Rep[en.In] => Rep[en.Out] = { x =>
              initBranch()
              if (!filterfun(x)) setBranchFalse()
              x
            }
            val x: Rep[en.In] => Rep[MergeIn] =
              if(hasDirectPath(en.parent, splitID)) { myComposeFunction(f,g) }
              else {myComposeCheckedFunction(f, g, initBranch)}
            generateCombRec(en.parent, x, initBranch, setBranchFalse, inputID, splitID)
          }

        case en @ ConstantEvent(_,_) =>
          if (en.id == splitID) {
            f.asInstanceOf[Rep[InputOut]=>Rep[MergeIn]]
          }
          else {
            val g: (Rep[en.In] => Rep[en.Out]) = toplevel1("constantfun" + en.id)(en.constFun)(en.typIn, en.typOut)
            val x: (Rep[en.In] => Rep[MergeIn]) =
              if(hasDirectPath(en.parent, splitID)) { myComposeFunction(f,g) }
              else {myComposeCheckedFunction(f, g, initBranch)}
            generateCombRec(en.parent, x, initBranch, setBranchFalse, inputID, splitID)
          }

        case en @ MapEvent(_,_) =>
          if (en.id == splitID) {
            f.asInstanceOf[Rep[InputOut]=>Rep[MergeIn]]
          }
          else {
            val g: (Rep[en.In] => Rep[en.Out]) = toplevel1("mapfun" + en.id)(en.mapFun)(en.typIn, en.typOut)
            val x: (Rep[en.In] => Rep[MergeIn]) =
              if(hasDirectPath(en.parent, splitID)) { myComposeFunction(f,g) }
              else {myComposeCheckedFunction(f, g, initBranch)}
            generateCombRec(en.parent, x, initBranch, setBranchFalse, inputID, splitID)
          }

        case en @ InputEvent(_) =>
          f.asInstanceOf[Rep[InputOut]=>Rep[MergeIn]]

        case _ => throw new IllegalStateException("Unsupported Event type")
      }
    }

    // TODO: notion: all explicit types can be ommitted since all Any -> no actual type checking. Fix?
    def generateLinRec[B](e:Event[B], f:Rep[B]=>Rep[Unit], inputID: EventID): Unit = {
      e match {
        case en @ MergeEvent(_,_) =>
          if(isDisjointFor(inputID, en.inputIDsLeft, en.inputIDsRight)){
            System.err.println("MergeEvent(ID:" + en.id + ") ID=" + inputID + ": Disjoint")
            if(en.inputIDsLeft.contains(inputID)) generateLinRec(en.parentLeft, f, inputID)
            else generateLinRec(en.parentRight, f, inputID)
          } else {
            System.err.println("MergeEvent(ID:" + en.id + ") ID=" + inputID + ": Non-Disjoint")

            val splitID = getSplitNode(en.leftAncestors, en.rightAncestors)
            val splitNode: Event[_] =
              nodeMap.get(splitID) match {
                case Some(e) => e
                case None => throw new IllegalStateException("Node does not exist.")
              }

            val idfun: Rep[en.In]=>Rep[en.In] = (x:Rep[en.In])=>x
            //build left function until target input
            lazy val leftOk: Var[Boolean] = var_new(unit(true))
            val initLeft: ()=>Rep[Boolean] = { () => leftOk }
            val setLeftFalse:()=>Rep[Unit] = { () => var_assign(leftOk, unit(false)) }
            val leftfun: Rep[splitNode.Out]=>Rep[en.In] = generateCombRec(en.parentLeft, idfun, initLeft, setLeftFalse, inputID, splitID)(en.typIn)
            //build right function until target input
            lazy val rightOk: Var[Boolean] = var_new(unit(true))
            val initRight: ()=>Rep[Boolean] = { () => rightOk }
            val setRightFalse: ()=>Rep[Unit] = { () => var_assign(rightOk, unit(false)) }
            val rightfun: Rep[splitNode.Out]=>Rep[en.In] = generateCombRec(en.parentRight, idfun, initRight, setRightFalse, inputID, splitID)(en.typIn)

            val mergeFun: (Rep[en.In],Rep[en.In])=>Rep[en.Out] = toplevel2("mergefun"+en.id)(en.mergeFun)(en.typIn,en.typOut)

            def createConditional[X,Y:Typ]
            (
              leftfun: Rep[X]=>Rep[Y], rightfun: Rep[X]=>Rep[Y], mergefun: (Rep[Y],Rep[Y])=>Rep[Y],
              leftOk: ()=>Rep[Boolean], rightOk: ()=>Rep[Boolean]
            ) : Rep[X] => Rep[Y] = {
              x =>
                val leftval = leftfun(x)
                val rightval = rightfun(x)

                if(!leftOk() && !rightOk()) unchecked[Unit]("return")

                if(leftOk() && rightOk()) {
                  mergefun(leftval,rightval)
                }
                else if(leftOk()) leftval
                else rightval
            }

            val g: Rep[splitNode.Out]=>Rep[en.Out] =
              createConditional(leftfun, rightfun, mergeFun, initLeft, initRight)(en.typIn) //TODO: en.In == en.Out -> fix?

            val x : Rep[splitNode.Out]=>Rep[Unit] = myComposeFunction(f,g)
            generateLinRec[splitNode.Out](splitNode.asInstanceOf[Event[splitNode.Out]], x, inputID) //TODO: fix cast
          }


        case en @ ConstantEvent(_,_) =>
          val g: (Rep[en.In] => Rep[en.Out]) = toplevel1("constantfun"+en.id)(en.constFun)(en.typIn,en.typOut)
          val x: (Rep[en.In] => Rep[Unit]) = myComposeFunction(f,g)
          generateLinRec[en.In](en.parent, x, inputID)

        case en @ FilterEvent(_,_) =>
          val filterfun: (Rep[en.In] => Rep[Boolean]) = toplevel1("filterfun"+en.id)(en.filterFun)(en.typIn,typ[Boolean])
          val g: Rep[en.In]=>Rep[en.Out] = { x =>
            if (!filterfun(x)) unchecked[Unit]("return")
            x
          }
          val x: Rep[en.In] => Rep[Unit] = myComposeFunction(f,g)
          generateLinRec[en.In](en.parent, x, inputID)

        case en @ MapEvent(_,_) =>
          val g: (Rep[en.In] => Rep[en.Out]) = toplevel1("mapfun"+en.id)(en.mapFun)(en.typIn,en.typOut)
          val x: (Rep[en.In] => Rep[Unit]) = myComposeFunction(f,g)
          generateLinRec[en.In](en.parent, x, inputID)

        case en @ InputEvent(_) =>
          val g: (() => Rep[en.Out]) = toplevel0("inputfun"+en.id)(en.inputFun)(en.typOut)
          val x: ( () => Rep[Unit]) = myComposeUnit(f,g)   //f.compose(g)
          toplevel0("top"+en.id)(x)(typ[Unit])

        case _ => throw new IllegalStateException("Unsupported Event type")
      }
    }

    //val m: Rep[String] = "res:"
    val voidretfun = {x:Rep[X] => { println(x); unitToRepUnit( () ) } }
    for(inputID <- e.inputEventIDs)
      generateLinRec(e, voidretfun, inputID)
  }

  override def generator[X](b: Behavior[X]): Unit = {


  }



  case class TopLevel0[B](name: String, mB:Typ[B], f: () => Rep[B])
  val rec0 = new scala.collection.mutable.HashMap[String,TopLevel0[_]]
  def toplevel0[B:Typ](name: String)(f: () => Rep[B]): () => Rep[B] = {
    val g = () => unchecked[B](name,"()")
    rec0.getOrElseUpdate(name, TopLevel0(name, typ[B], f))
    g
  }

  case class TopLevel1[A,B](name: String, mA: Typ[A], mB:Typ[B], f: Rep[A] => Rep[B])
  val rec1 = new scala.collection.mutable.HashMap[String,TopLevel1[_,_]]
  override def toplevel1[A:Typ,B:Typ](name: String)(f: Rep[A] => Rep[B]): Rep[A] => Rep[B] = {
    val g = (x: Rep[A]) => unchecked[B](name,"(",x,")")
    rec1.getOrElseUpdate(name, TopLevel1(name, typ[A], typ[B], f))
    g
  }

  case class TopLevel2[A,B](name: String, mA: Typ[A], mB:Typ[B], f: (Rep[A],Rep[A]) => Rep[B])
  val rec2 = new scala.collection.mutable.HashMap[String,TopLevel2[_,_]]
  def toplevel2[A:Typ,B:Typ](name: String)(f: (Rep[A],Rep[A])=>Rep[B]): (Rep[A],Rep[A])=>Rep[B] = {
    val g = (x: Rep[A],y: Rep[A]) => unchecked[B](name,"(",x,",",y, ")")
    rec2.getOrElseUpdate(name, TopLevel2(name, typ[A], typ[B], f))
    g
  }

}