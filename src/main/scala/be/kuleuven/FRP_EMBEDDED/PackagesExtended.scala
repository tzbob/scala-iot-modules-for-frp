package be.kuleuven.FRP_EMBEDDED

import scala.lms.common._


/**
 * IR: this is the front-end that defines what operations are available in user applications. Backends can share
 *     packages if they choose.
 */

trait ScalaOpsPkgExt extends Base
  with ImplicitOps with NumericOps with FractionalOps with OrderingOps with StringOps
  with RangeOps with IOOps with ArrayOps with BooleanOps with PrimitiveOps with MiscOps
  with Equal with IfThenElse with VariablesExt with While with TupleOps with ListOps
  with SeqOps with MathOps with CastingOps with SetOps with ObjectOps with ArrayBufferOps with StructOps

trait ScalaOpsPkgExpExt extends ScalaOpsPkg
  with ImplicitOpsExp with NumericOpsExp with FractionalOpsExp with OrderingOpsExp with StringOpsExp
  with RangeOpsExp with IOOpsExp with ArrayOpsExp with BooleanOpsExp with PrimitiveOpsExp with MiscOpsExp
  with FunctionsExpExt with EqualExp with IfThenElseExp with VariablesExpExt with WhileExp with TupleOpsExp with ListOpsExp
  with SeqOpsExp with DSLOpsExp with MathOpsExp with CastingOpsExp with SetOpsExp with ObjectOpsExp with ArrayBufferOpsExp
  with StructExp

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


/////
// C
trait CCodeGenPkgExt extends CGenImplicitOps with CGenNumericOps with CGenFractionalOps with CGenOrderingOps
  with CGenStringOps with CGenRangeOps with CGenIOOps with CGenArrayOps with CGenBooleanOps
  with CGenPrimitiveOps with CGenMiscOps with CGenFunctionsExt with CGenEqual with CGenIfThenElse
  with CGenVariablesExt with CGenWhile with CGenTupleOps with CGenListOps
  with CGenSeqOps with CGenDSLOps with CGenMathOps with CGenCastingOps with CGenSetOps
  with CGenObjectOps with CGenArrayBufferOps with CGenStruct
  { val IR: ScalaOpsPkgExpExt  }

trait CCodeGenPkgExtended extends CCodeGenPkgExt with GenericCodeGenExt { val IR: ScalaOpsPkgExpExt }
trait ScalaCodeGenPkgExtended extends ScalaCodeGenPkgExt with GenericCodeGenExt { val IR: ScalaOpsPkgExpExt }