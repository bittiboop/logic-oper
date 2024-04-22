#include <iostream>
#include <cmath>
//#include <math.h>
using namespace std;

int main() {
	//++(+1) - increment operator
	//--(-1) - increment operator
	//x++/x-- - post increment
	//++x/--x - pre increment

	float scale, dist1;
	cout << "Calculation of the distance between settlements.\n" << "Enter the output data:\n";
	cout << "Map scale (number of kilometers in one centimeter) -> ";
	cin >> scale;
	cout << "Distance between points representing settlements(cm) -> ";
	cin >> dist1;
	cout << "Distance between settlements " << scale * dist1 << " km" << endl;
	return 0;
}