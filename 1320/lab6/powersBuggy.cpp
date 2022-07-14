#include <iostream>
#include <cmath> // need to #include <cmath>
using namespace std;


int main()
{

	int x, a=2;
	cout << "Please enter a value for x = " ;
	cin >> x;  // should be ">>" because it is an input
    
	cout << "x to the power of " << a;
	cout << " is equal to " << pow(x,a++) << endl; // a++ instead of ++a

	cout << "x to the power of " << a;
	cout << " is equal to " << pow(x,a++) << endl;

	cout << "x to the power of " << a;
	cout << " is equal to " << pow(x,a++) << endl;

	return 0;
}

