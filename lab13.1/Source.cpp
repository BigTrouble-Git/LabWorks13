#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "x_p = "; cin >> xp;
	cout << "x_k = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	
	cout << endl;
	x = xp;
	while (x <= xk) {

		sum();
		result = -1 * s;

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(1-x)  << " |"
			<< setw(10) << setprecision(5) << -1 * s * 2 << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-----------------------------------------" << endl;
	cin.get();
	return 0;
}


