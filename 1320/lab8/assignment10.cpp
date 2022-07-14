#include <iostream>
using namespace std;

int menu();
void newAccount(string &nameEnt, int &passEnt);
void deposit(int &b, int &passEnt);
void withdraw(int &b, int &passEnt);
int gamblingIdx();
int passEnt, dep, b;

int main(){
    string accountName[100] = { };
    int accountBalance[100] = {0};
    int accountPassword[100] = {0};
    int gambling[10] = {0, 500, 10, 1000, 20, 5000, 30, 10000, 40, 50000};
    int accountnum = 0;
    int opt;
    
    while (opt !=6){
    int opt;
    opt = menu();   
    menu();
    cout << "You chose " << opt << endl;
    
    if(opt == 1){
        if(accountnum != 100){
            newAccount(accountName[accountnum], accountPassword[accountnum]);
            cout << "Name: " << accountName[accountnum] << endl;
            cout << "Password: " << accountPassword[accountnum] << endl;
            accountnum = accountnum + 1;

        }
        else {
            cout << "The database is full" << endl;
        }
    }
    if (opt == 2){
        string nameEnt;
        cout << "Enter account name: ";
        cin >> nameEnt;

        int checkOn = 0;
        for (int i = 0; i < 100; i++){
            if (accountName[i] == nameEnt){
                deposit(accountBalance[i], accountPassword[i]);
                checkOn = 1;
            }
        }    
        if (checkOn != 1)
        cout << "Account does not exist" << endl;

    }

    if (opt == 3){
        string nameEnt;
        cout << "Enter your account name";
        cin >> nameEnt;

        int checkOn = 0;
        for (int i = 0; i < 100; i++){
            if (accountName[i] == nameEnt){
                withdraw(accountBalance[i], accountPassword[i]);
                checkOn = 1;
            }
        }    
        if (checkOn != 1)
        cout << "Account does not exist" << endl;
    }


    if (opt == 4){
        string nameEnt;
        cout << "Enter your account name";
        cin >> nameEnt;

        int checkOn = 0;
        for (int i=0;i < 100;i++){
            if (accountName[i] == nameEnt){
                int passEnt;
                cout << "Enter your password: ";
                cin >> passEnt;
                if (passEnt == accountPassword[i]){
                    cout << "Your account balance is: " << accountBalance[i] << endl;
                }
                else 
                cout << "Incorrect password" << endl;
                checkOn = 1;
            }
        }
        if (checkOn != 1)
            cout << "Account does not exist" << endl;
        
    }

    if (opt == 5){
        srand(time(NULL));
        string nameEnt;
        cout << "Enter your account name: ";
        cin >> nameEnt;

        int checkOn = 0;
        for (int i=0; i<100; i++){
            if (accountName[i] == nameEnt){
                int passEnt;
                cout << "Enter your password";
                cin >> passEnt;
                
                if (passEnt == accountPassword[i]){
                    cout << "Your account balance is " << accountBalance[i] << endl;

                    if (accountBalance[i] >= 500){
                        
                        int gambInd = gamblingIdx();
                        swap(accountBalance[i], gambling[gambInd]);
                        cout << "Your new balance is: " << accountBalance[i] << endl;
                    }
                    else 
                        cout << "The balance is below the min balance to gamble" << endl;

                }
                else 
                    cout << "Incorrect password" << endl;
                checkOn = 1;
            }

        }
        if (checkOn != 1)
            cout << "Account does not exist" << endl;
    }


  }
  return 0;
}





//menu
int menu(){
    int choice;
    cout << "--ATM MENU--" << endl;
    cout << "1-Make an account" << endl;
    cout << "2-Deposit" << endl;
    cout << "3-Withdraw" << endl;
    cout << "4-Check balance" << endl;
    cout << "5-Gamble" << endl;
    cout << "6-Finish" << endl;
    cin >> choice;
    return choice;
    
}
//new account
void newAccount(){
   string nameEnt;
   int passEnt;
   cout << "Enter account name" << endl;
   cin >> nameEnt;

   cout << "Enter password" << endl;
   cin >> passEnt;

   
}
//deposit
void deposit(){
   int newPass;
   cout<<"Enter your password: ";
   cin>>newPass;
   if(passEnt == newPass)
   {
       int value;
       cout<< "Enter the deposit amount: " << endl;
       cin>>value;
       if(dep >= 0)
           b = b + value;
       else
           cout<<"Deposit amount cannot be negative" << endl;
   }
   else
       cout<<" Wrong password" << endl;


}
//gamble
int gamblingIdx(){
    int num = rand()% 10;
    return num;
}

//swap
void swapValues(int &accountBalance, int &gambling){
    int swap;
    swap = accountBalance;
    accountBalance = gambling;
    gambling = swap;
}


