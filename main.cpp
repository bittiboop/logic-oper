#include <iostream>
#include <cmath>
//#include <math.h>
using namespace std;

int main() {
	//++(+1) - increment operator
	//--(-1) - increment operator
	//x++/x-- - post increment
	//++x/--x - pre increment
	
	int i;
	float t;
	cout << "Calculation of running speed.\n" << "Enter the length of the distance (meters) = ";
	cin >> i;
	cout << "\nEnter the time (min.sec) = ";
	cin >> t;
	cout << "Distance:" << i << "m." << endl;
	int min = static_cast<int>(t);
	int sec = static_cast<int>((t - min) * 100);
	cout << "Time: " << min << "min. " << sec << "sec. = " << min * 60 + sec << " sec." << endl;
	cout << "You ran at a speed of: " << i / sec << " km/h." << endl;
	return 0;
}