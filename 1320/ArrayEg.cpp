#include <iostream>
using namespace std;



    int main(){
    const int arrSize = 5;

    int score[arrSize];
    int i, max;

    cout << "Enter 5 scores: " << endl;

    for (int i=0; i<arrSize; i++)
        cin >> score[i];
    cout << "Display the 5 scores";
    for (int i=0; i<arrSize; i++)
        cout << score[i] << " ";
    cout << endl;

    int max = score[0];

    for (int i=0; i<arrSize; i++){

        if (score[i] > max)
            max = score[i];

    }
    cout << "Max score entered is " << max << endl;
}
