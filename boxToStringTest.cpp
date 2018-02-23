//boxToStringTest
//23 Feb 2018
//Irene Lam and Kennard Peters



#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"



int main() {

  struct Box b1;
  initBox(&b1,-5.1234567,6.234567,1.145678,2.12456778);
  assertEquals("[ul=(-5, 6), w=1, h=2]", boxToString(b1,1), "boxToString(b1,1)");
  assertEquals("[ul=(-5.1, 6.2), w=1.1, h=2.1]", boxToString(b1,2), "boxToString(b1,2)");
  assertEquals("[ul=(-5.12, 6.23), w=1.15, h=2.12]", boxToString(b1,3), "boxToString(b1,3)");
  assertEquals("[ul=(-5.123, 6.235), w=1.146, h=2.125]", boxToString(b1,4), "boxToString(b1,4)");
  assertEquals("[ul=(-5.1235, 6.2346), w=1.1457, h=2.1246]", boxToString(b1,5), "boxToString(b1,5)");
  assertEquals("[ul=(-5.12346, 6.23457), w=1.14568, h=2.12457]", boxToString(b1,6), "boxToString(b1,6)");





  // SAMPLE FORMAT: [ul=(3.4,-5), w=5,h=7]
		   
  return 0;
}

