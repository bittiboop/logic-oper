#include <iostream>
#include <cmath>
//#include <math.h>
using namespace std;

int main() {
	//++(+1) - increment operator
	//--(-1) - increment operator
	//x++/x-- - post increment
	//++x/--x - pre increment

	int year = 0;
	int days = 365;
	cin >> year;
	(year % 4 == 0)? (year % 100 != 0 && ++days || (year % 100 == 0 && year % 400 == 0)) : (year % 100 == 0 && days || (year % 100 != 0 && year % 400 != 0));
	cout << "In " << year << " year = " << days << "days" << endl;
	return 0;
}