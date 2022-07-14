#include <iostream>
using namespace std;

int main() 
{
    float num1, num2; // declare the variables as float, not int
    cout << "Enter two numbers where the second number is not zero: "; 
    // make sure num2 is non-zero
    cin >> num1 >> num2;

    cout << "num1 + num2 = " << num1 + num2 << endl;
    cout << "num1 - num2 = " << num1 - num2 << endl;
    cout << "num1 * num2 = " << num1 * num2 << endl;
    cout << "num1 / num2 = " << num1 / num2 << endl; // declare num1 as float
    

    return 0;
}