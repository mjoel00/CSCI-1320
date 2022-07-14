#include <iostream>
using namespace std;


int main(){
   int accountPassword[100] = {0};
   string accountName[100] = {};
   if (accountPassword[99] == 0){
      newAccount(accountName[0], accountPassword[0]);
      cout << accountName[0] << endl << accountPassword[0] << endl;
   }
   else 
   cout << "# of accounts has reached its max" << endl;
}

int newAccount(string &N, int &pass){
   
   
   cout << "Enter account name" << endl;
   cin >> N;

   cout << "Enter password" << endl;
   cin >> pass;


}