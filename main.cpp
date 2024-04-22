#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

//#include <math.h>
using namespace std;

int main() {
	//++(+1) - increment operator
	//--(-1) - increment operator
	//x++/x-- - post increment
	//++x/--x - pre increment

	float radius;
	cin >> radius;
	cout << "V: " << 4 / 3 * M_PI * pow(radius, 3) << endl;
	return 0;
}