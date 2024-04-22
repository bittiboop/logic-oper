#include <iostream>
#include <cmath>
//#include <math.h>
using namespace std;

int main() {
	//++(+1) - increment operator
	//--(-1) - increment operator
	//x++/x-- - post increment
	//++x/--x - pre increment

	cout << "Calculation of the volume of the parallelepiped.\n" << "Enter the output data:\n" << endl;
	float len, width, height;
	cout << "Length (cm) -> ";
	cin >> len;
	cout << "Width (cm) -> ";
	cin >> width;
	cout << "Height (cm) -> ";
	cin >> height;
	cout << "Volume: " << len * width * height << " cm^3" << endl;
	return 0;
}