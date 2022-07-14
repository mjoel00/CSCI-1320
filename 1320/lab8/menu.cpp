#include <iostream>
using namespace std;

void menu(void);

int main(){
    menu();

    return 0;

}

void menu(){
    cout << "--ATM MENU--" << endl;
    cout << "1-Make an account" << endl;
    cout << "2-Deposit" << endl;
    cout << "3-Withdraw" << endl;
    cout << "4-Check balance" << endl;
    cout << "5-Gamble" << endl;
    cout << "6-Finish" << endl;
}