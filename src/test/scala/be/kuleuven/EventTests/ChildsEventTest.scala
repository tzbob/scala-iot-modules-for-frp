package be.kuleuven.EventTests

import be.kuleuven.FRP_EMBEDDED.CFRPDSLApplicationRunner
import org.scalatest.FunSuite

class ChildsEventTest extends FunSuite {

  test("test_5") {
    new CFRPDSLApplicationRunner {
      import scala.collection.immutable.{Set => SSet}

      val t: Event[Int] = TimerEvent(5)

      val c1: Event[Int] = t.constant(1)
      val f1: Event[Int] = c1.filter((i: Rep[Int]) => { println("filter3"); infix_%(i, 2) == 0 })
      val map1: Event[Int] = f1.map((i: Rep[Int]) => { println("map4"); i + 1 })

      val c2 = t.constant(2)
      val f2: Event[Int] = c2.filter((i: Rep[Int]) => { println("filter6"); infix_%(i, 2) == 0 })
      val map2: Event[Int] = f2.map((i: Rep[Int]) => { println("map7"); i + 1 })

      val m = map1.merge(map2, (x: Rep[Int], y: Rep[Int]) => { println("merge8") ; x + y })
      val map3 = m.map((x: Rep[Int]) => { println("map9"); x * 2 })

      buildGraphTopDown(map3)

      assert(map3.childEventIDs.size === 0)
      assert(m.childEventIDs.contains(map3.id))
      assert(map2.childEventIDs.contains(m.id))
      assert(f2.childEventIDs.contains(map2.id))
      assert(c2.childEventIDs.contains(f2.id))
      assert(map1.childEventIDs.contains(m.id))
      assert(f1.childEventIDs.contains(map1.id))
      assert(c1.childEventIDs.contains(f1.id))
      assert(t.childEventIDs.contains(c1.id))
      assert(t.childEventIDs.contains(c2.id))
      assert(t.childEventIDs.equals(SSet(c2.id,c1.id)))
      assert(t.childEventIDs.equals(SSet(c1.id,c2.id)))
    }
  }

  test("test_9a") {
    new CFRPDSLApplicationRunner {
      import scala.collection.immutable.{Set => SSet}
      val t: Event[Int] = TimerEvent(2)

      val m2 = t.map((x) => {println("map2"); x * 2})
      val m3 = t.map((x) => {println("map3"); x * 2})

      val merge4 = m2.merge(m3, (x, y) => { println("merge4"); x + y })
      val merge5 = merge4.merge(m3, (x, y) => { println("merge5"); x + y })

      buildGraphTopDown(merge5)

      assert(merge5.childEventIDs.size === 0)
      assert(merge4.childEventIDs.contains(merge5.id))
      assert(m3.childEventIDs.equals(SSet(merge4.id,merge5.id)))
      assert(m2.childEventIDs.contains(merge4.id))
      assert(t.childEventIDs.contains(m2.id))
      assert(t.childEventIDs.contains(m3.id))
    }
  }

  test("test_10") {
    new CFRPDSLApplicationRunner {
      import scala.collection.immutable.{Set => SSet}
      val t: Event[Int] = TimerEvent(2)

      val m2 = t.map((x) => {println("map2"); x * 2})
      val m3 = t.map((x) => {println("map3"); x * 2})

      val m22 = m2.map((x) => {println("map22"); x * 2})
      val m33 = m3.map((x) => {println("map33"); x * 2})


      buildGraphTopDown(m22)
      buildGraphTopDown(m33)

      assert(m22.childEventIDs.size === 0)
      assert(m33.childEventIDs.size === 0)
      assert(m2.childEventIDs.contains(m22.id))
      assert(m3.childEventIDs.contains(m33.id))
      assert(t.childEventIDs.equals(SSet(m2.id,m3.id)))
    }
  }
}
