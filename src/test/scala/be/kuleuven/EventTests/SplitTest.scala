package be.kuleuven.EventTests

import be.kuleuven.FRP_EMBEDDED.CFRPDSLApplicationRunner
import org.scalatest.FunSuite

class SplitTest extends FunSuite {

  test("test1") {
    val l = List(6,5,4,3,2,1)
    val r = List(9,8,7,3,2,1)

    new CFRPDSLApplicationRunner {
      assert(getSplitNode(l,r) === 3)
    }
  }

  test("test2") {
    val l = List(6,5,2,1,3,1)
    val r = List(7,4,1)

    new CFRPDSLApplicationRunner {
      assert(getSplitNode(l,r) === 1)
    }
  }

  test("test3") {
    val l = List(7,6,3,2,1,4,2,1)
    val r = List(5,1)

    new CFRPDSLApplicationRunner {
      assert(getSplitNode(l,r) === 1)
    }
  }
}
