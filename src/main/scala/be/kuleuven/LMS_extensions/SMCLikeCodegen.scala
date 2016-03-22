package be.kuleuven.LMS_extensions

import scala.lms.internal.{GenerationFailedException, CLikeCodegen}


trait SMCLikeCodeGen extends CLikeCodegen {
  val IR : ExpressionsExt
  import IR._

  def emitPtrDef(sym: Sym[Pointer[Any]], rhs: String): Unit = emitValDef(sym, rhs)

  //override def emitValDef(sym: Sym[Any], rhs: String): Unit = emitValDef(quote(sym), sym.tp, rhs)

  /*override def emitValDef(sym: String, tpe: Typ[_], rhs: String): Unit = {
    if(remap(tpe) != "void") stream.println(remap(tpe) + " " + sym + " = " + rhs + ";")
  }*/

  override def emitVarDecl(sym: Sym[Any]): Unit = {
    stream.println(remap(sym.tp) + " " + quote(sym) + ";")
  }

  override def emitValDef(sym: Sym[Any], rhs: String): Unit = {
    if (!isVoidType(sym.tp))
      stream.println(remap(sym.tp) + " " + quote(sym) + " = " + rhs + ";")
    else // we might still want the RHS for its effects
      stream.println(rhs + ";")
  }

  override def isPrimitiveType(tpe: String) : Boolean = {
    tpe match {
      case "bool" | "int8_t" | "uint16_t" | "int16_t" | "int32_t" | "int64_t" | "float" | "double" => true
      case "int" | "uint8_t" => true
      case _ => false
    }
  }

  override def remap[A](m: Typ[A]) : String = {

    if (m.erasure == classOf[Pointer[AnyVal]])
      remap(m.typeArguments.head) + "*"
    else if (m.erasure == classOf[Variable[AnyVal]])
      remap(m.typeArguments.head)
    else if (m.erasure == classOf[List[Any]]) { // Use case: Delite Foreach sync list
      deviceTarget.toString + "List< " + remap(m.typeArguments.head) + " >"
    }
    else {
      m.toString match {
          //TODO: some types are adapted to the embedded system : check best mapping!
        case "scala.collection.immutable.List[Float]" => "List"
        case "Boolean" => "bool"
        case "Byte" => "uint8_t"
        case "Char" => "uint8_t"
        case "Short" => "int8_t"
        case "Int" => "int" //TODO: int32_t made some trouble
        case "Long" => "int64_t"
        case "Float" => "float"
        case "Double" => "double"
        case "Unit" => "void"
        case "Nothing" => "void"
        case _ => throw new GenerationFailedException("SMCLikeGen: remap(m) : Type %s cannot be remapped.".format(m.toString))
      }
    }
    /*else
      super.remap(m)*/
  }

}
