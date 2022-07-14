// Program for calculating freefall distance as a function of time
// d = 1/2 * g * t^2


#include <iostream>
#include <string>

using namespace std;

int main( )
{
	float d; //should be declared as float, not int
	const double g = 9.8;   // Should have declared as double, not int
	int t = 10;    // "const" ommitted because the variable t is not constant

	cout << "enter time: " << endl; 
    cin >> t; // Should use cin to input time

	d = 1.0/2.0 * g * t * t; //change formula

	cout << "distance = " << d << endl;


	return 0;
}
