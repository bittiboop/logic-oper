#include <iostream>
#include <cmath>
//#include <math.h>
using namespace std;

int main() {
	//++(+1) - increment operator
	//--(-1) - increment operator
	//x++/x-- - post increment
	//++x/--x - pre increment

	int sec, hv, hod;
	cout << "Enter seconds: ";
	cin >> sec;
	cout << "Seconds: " << sec % 60 << endl;
	hv = sec / 60;
	cout << "Minutes: " << hv % 60 << endl;
	hod = hv / 60;
	cout << "Hours: " << hod;
	return 0;
}