#include <iostream>
using namespace std;

void deposit(int &b, int pass){
   int newPass;
   cout<<"Enter your password: ";
   cin>>newPass;
   if(pass == newPass)
   {
       int value;
       cout<< "Enter the deposit amount: " << endl;
       cin>>value;
       if(deposit >= 0)
           b = b + value;
       else
           cout<<"Deposit amount cannot be negative" << endl;
   }
   else
       cout<<" Wrong password" << endl;


}

int main(){
    int accountBalance[100] = {0};
    int accountPassword[100] = {0};
    accountPassword[0] = 1234;
    deposit(accountBalance[0], accountPassword[0]);
    cout << "Your balance is " << accountBalance[0] << endl;
    return 0;
}