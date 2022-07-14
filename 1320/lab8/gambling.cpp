#include <iostream>
using namespace std;

int gambling(){
    int num = rand()% 10;
    return num;
}

int main(){
    int val = gambling();
    return 0;
}