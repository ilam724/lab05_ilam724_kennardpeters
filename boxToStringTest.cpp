//boxToStringTest
//23 Feb 2018
//Irene Lam and Kennard Peters



#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"



int main() {

  struct Box b1,b2;
  initBox(&b1,-5.1234567,6.234567,1.145678,2.12456778);
  assertEquals("[ul=(-5, 6), w=1, h=2]", boxToString(b1,1), "boxToString(b1,1)");
  assertEquals("[ul=(-5.1, 6.2), w=1.1, h=2.1]", boxToString(b1,2), "boxToString(b1,2)");
  assertEquals("[ul=(-5.12, 6.23), w=1.15, h=2.12]", boxToString(b1,3), "boxToString(b1,3)");

  initBox(&b2, 8.23459466, 9.12892831853071, 4.563453463453445, 5.3646793456);
  assertEquals("[ul=(8.23, 9.13), w=4.56, h=5.36]", boxToString(b2), "boxToString(b2)");
  assertEquals("[ul=(8, 9), w=5, h=5]", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("[ul=(8.235, 9.129), w=4.563, h=5.365]", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("[ul=(8.2346, 9.1289), w=4.5635, h=5.3647]" , boxToString(b2,5), "boxToString(b2,5)");

  // SAMPLE FORMAT: [ul=(3.4,-5), w=5,h=7]
		   
  return 0;
}

