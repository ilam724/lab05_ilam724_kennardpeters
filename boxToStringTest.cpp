//boxToStringTest
//23 Feb 2018
//Irene Lam and Kennard Peters



#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1,b2;
  struct Box b1Expected;
  initBox(&b1,-5.0,6.0,1.0,2.0);
  b1Expected.ul.x = -5.0;  b1Expected.ul.y = 6.0;
  b1Expected.width = 1.0;  b1Expected.height = 2.0;
  assertTrue(boxesApproxEqual(b1,b1Expected),"boxesApproxEqual(b1,b1Expected)");

  initBox(&b2, 8.23459466, 9.12892831853071, 4.563453463453445, 5.3646793456);
  assertEquals("[ul=(8.23, 9.13), w=4.56, h=5.36]", boxToString(b2), "boxToString(b2)");
  assertEquals("[ul=(8, 9), w=5, h=5]", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("[ul=(8.235, 9.129), w=4.563, h=5.365]", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("[ul=(8.2346, 9.1289), w=4.5635, h=5.3647]" , boxToString(b2,5), "boxToString(b2,5)");

  // SAMPLE FORMAT: [ul=(3.4,-5), w=5,h=7]
		   
  return 0;
}

