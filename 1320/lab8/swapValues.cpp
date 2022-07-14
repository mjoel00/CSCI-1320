#include <iostream>
using namespace std;

void swapValues(int &accountBalance, int &gambling){
    int swap;
    swap = accountBalance;
    accountBalance = gambling;
    gambling = swap;
}

int main(){
    int accountBalance[100] = {0};
    int gambling[10] = {0,500,10,1000,20,5000,30,10000,40,50000}, i = 5, j = 6; // i and j are dummy values
    swapValues(accountBalance[i], gambling[j]);
    return 0;
}

