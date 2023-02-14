
#include <math.h>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h" 

using namespace nsDod;
using namespace nsVar;

//void nsSum::sum() {
//	n = 0;
//	a = 1;
//	s = a;
//	do {
//
//		n++;
//		dod(); 
//		s += a;
//
//	} while (abs(a) > eps);
//}


void nsSum::sum() {
	n = 0;
	a = x;
	s = a;
	do {

		n++;
		dod();
		s += a;
		result = -1 * s;


	} while (abs(a) >= e);
	result = -1 * s;


}
