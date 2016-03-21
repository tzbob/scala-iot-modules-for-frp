package be.kuleuven.LMS_extensions

import scala.lms.common._


/**
 * IR: this is the front-end that defines what operations are available in user applications. Backends can share
 *     packages if they choose.
 */

trait ScalaOpsPkgExt extends Base
  with ImplicitOps with NumericOps with FractionalOps with OrderingOps with StringOps
  with RangeOps with IOOps with ArrayOpsExt with BooleanOps with PrimitiveOps with MiscOpsExt
  with Equal with IfThenElse with VariablesExt with Pointers with While with TupleOps with ListOps
  with SeqOps with MathOps with CastingOps with SetOps with ObjectOps with ArrayBufferOps with StructOps
  with TupledFunctionsExt with UncheckedOps

trait ScalaOpsPkgExpExt extends ScalaOpsPkg
  with ImplicitOpsExp with NumericOpsExp with FractionalOpsExp with OrderingOpsExp with StringOpsExp
  with RangeOpsExp with IOOpsExp with ArrayOpsExpExt with BooleanOpsExp with PrimitiveOpsExp with MiscOpsExpExt
  with FunctionsExpExt with TupledFunctionsExpExt
  with EqualExp with IfThenElseExp with VariablesExpExt with PointersExp with WhileExp with TupleOpsExp with ListOpsExp
  with SeqOpsExp with DSLOpsExp with MathOpsExp with CastingOpsExp with SetOpsExp with ObjectOpsExp with ArrayBufferOpsExp
  with StructExp with UncheckedOpsExp

/**
 * Code gen: each target must define a code generator package.
 */


/////////
// Scala
trait ScalaCodeGenPkgExt extends ScalaGenImplicitOps with ScalaGenNumericOps with ScalaGenFractionalOps with ScalaGenOrderingOps
  with ScalaGenStringOps with ScalaGenRangeOps with ScalaGenIOOps with ScalaGenArrayOps with ScalaGenBooleanOps
  with ScalaGenPrimitiveOps with ScalaGenMiscOps with ScalaGenFunctions with ScalaGenEqual with ScalaGenIfThenElse
  with ScalaGenVariablesExt with ScalaGenWhile with ScalaGenTupleOps with ScalaGenListOps
  with ScalaGenSeqOps with ScalaGenDSLOps with ScalaGenMathOps with ScalaGenCastingOps with ScalaGenSetOps
  with ScalaGenObjectOps with ScalaGenArrayBufferOps
  { val IR: ScalaOpsPkgExpExt  }

trait ScalaCodeGenPkgExtended extends ScalaCodeGenPkgExt with GenericCodeGenExt { val IR: ScalaOpsPkgExpExt }

/////
// C
trait CCodeGenPkgExt extends CGenImplicitOps with CGenNumericOps with CGenFractionalOps with CGenOrderingOps
  with CGenStringOps with CGenRangeOps with CGenIOOps with CGenArrayOpsExt with CGenBooleanOps
  with CGenPrimitiveOps with CGenMiscOpsExt with CGenFunctionsExt with CGenTupledFunctionsExt with CGenEqual
  with CGenIfThenElse
  with CGenVariablesExt with CGenPointers with CGenWhile with CGenTupleOps with CGenListOps
  with CGenSeqOps with CGenDSLOps with CGenMathOps with CGenCastingOps with CGenSetOps
  with CGenObjectOps with CGenArrayBufferOps with CGenStruct
  with CGenUncheckedOps
  { val IR: ScalaOpsPkgExpExt  }

trait CCodeGenPkgExtended extends CCodeGenPkgExt with GenericCodeGenExt { val IR: ScalaOpsPkgExpExt }
