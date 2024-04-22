#include <iostream>
#include <cmath>
//#include <math.h>
using namespace std;

int main() {
	//++(+1) - increment operator
	//--(-1) - increment operator
	//x++/x-- - post increment
	//++x/--x - pre increment

	int year, days;
	cout << "Enter yout year: ";
	cin >> year;
	days = 365 + (year % 4 == 0) - (year % 100 == 0) + (year % 400 == 0);
	cout << "In " << year << " years = " << days << " days" << endl;
	return 0;
}