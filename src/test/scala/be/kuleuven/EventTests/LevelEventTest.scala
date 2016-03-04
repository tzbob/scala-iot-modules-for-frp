package be.kuleuven.EventTests

import be.kuleuven.FRP_EMBEDDED.CFRPDSLApplicationRunner
import org.scalatest.FunSuite

class LevelEventTest extends FunSuite {

  test("simpleGraph") {
    new CFRPDSLApplicationRunner {

      val t: Event[Int] = TimerEvent(5)
      val m1: Event[Int] = t.map( (x) => x*2)
      val m2: Event[Int] = m1.map( (x) => x*4)

      assert(t.level === 0)
      assert(m1.level === 1)
      assert(m2.level === 2)
      assert(getMaxLevel === 2)
    }
  }

  test("complexGraph") {
    new CFRPDSLApplicationRunner {

      val t = TimerEvent(5)
      val mleft = t.map( x => x*2)
      val mleftleft = mleft.map( x => x*2)
      val mleftright = mleft.map( x => x)
      val mergeleft = mleftleft.merge(mleftright, (x,y) => x+y)

      val e1 = mergeleft.map(x => x)

      val mright = t.map( x => x+3)
      val e2 = mergeleft.merge(mright, (x,y)=>x+y)

      assert(t.level === 0)
      assert(mleft.level === 1)
      assert(mright.level === 1)
      assert(mleftleft.level === 2)
      assert(mleftright.level === 2)
      assert(mergeleft.level === 3)
      assert(e1.level === 4)
      assert(e2.level === 4)
      assert(getMaxLevel === 4)
    }
  }
}
