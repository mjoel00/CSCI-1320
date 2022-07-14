#include <iostream>
using namespace std;

void withdraw(int &b, int pass){
    int newPass;
    cout << "Enter password";
    cin >> newPass;
    if (pass == newPass){
        int value;
        cout << "The user typed the correct password" << endl;
        cout << "Your balance is " << b << endl << "Enter the withdrawal amount: ";
        cin >> value;
        while(b < value){
            cout << "The use typed the correct password" << endl;
            cout << "Your balance is " << b << endl << "Enter the withdrawal amount: ";
            cin >> value;
            if (value <= b){
               break;
            }
        }
        b = b - value;
    }
    else {
        cout << "Wrong password" << endl;
    }
}

int main(){
    int accountBalance[100] = {0};
    int accountPassword[100] = {0};
    accountPassword[0] = 1234;
    withdraw(accountBalance[0], accountPassword[0]);
    cout << "Your balance is " << accountBalance[0] << endl;
    return 0;
}





