#include <iostream>
#include <cmath>
//#include <math.h>
using namespace std;

int main() {
	//++(+1) - increment operator
	//--(-1) - increment operator
	//x++/x-- - post increment
	//++x/--x - pre increment

	int days = 0;
	int weeks = 0;
	cout << "Enter the number of days: ";
	cin >> days;
	weeks = days / 7;
	days = days % 7;
	cout << "Weeks: " << weeks << endl;
	cout << "Days: " << days << endl;

	return 0;
}