#include <iostream>
#include <cmath>
//#include <math.h>
using namespace std;

int main() {
	//++(+1) - increment operator
	//--(-1) - increment operator
	//x++/x-- - post increment
	//++x/--x - pre increment

	int grn, cop , res;
	cin >> grn >> cop;
	res = cop / 100;
	cop = cop % 100;
	res = ++grn;
	cout << grn << "grn" << cop << "cop." << endl;
	return 0;
}