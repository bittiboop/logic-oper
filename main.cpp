#include <iostream>
#include <cmath>
//#include <math.h>
using namespace std;

int main() {
	//++(+1) - increment operator
	//--(-1) - increment operator
	//x++/x-- - post increment
	//++x/--x - pre increment

	float num;
	cout << "Enter the float number: " << endl;
	cin >> num;
	int grn = static_cast<int>(num);
	int cop = static_cast<int>((num - grn) * 100);
	cout << grn << " grn. " << cop << " cop." << endl;
	return 0;
}