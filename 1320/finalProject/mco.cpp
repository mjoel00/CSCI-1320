#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct UniqueWord{
    string word;
    int numOoccurences;
};


int main(){
    int i = 0;
    int num = 0;
    UniqueWord uniqArr[99778];
    string  wordU;

    ifstream filein;
    filein.open("cleanedTestText.txt");

    if (!filein.is_open()){
        cout << "FILE NOT FOUND" << endl;
        return 0;
    }

    while (!filein.eof()){
        filein >> wordU;
        bool wordEx = 0;

        for (i = 0; i<num; i++){

            if (uniqArr[i].word == wordU){
                uniqArr[i].numOoccurences++;
                wordEx = 1;
                break;
            }
        }
        if (wordEx != 1){
            uniqArr[i].word = wordU;
            uniqArr[i].numOoccurences = 1;
            num++;
        }

    }
    filein.close();
    cout << "Total number of unique words: " << num << endl;

    for(int i=0;i<num-1;i++){

        for(int j=i+1;j<num;j++){

            if(uniqArr[i].numOoccurences > uniqArr[j].numOoccurences){
                struct UniqueWord temp = uniqArr[j];
                uniqArr[j] = uniqArr[i];
                uniqArr[i] = temp;
            }

        }

    }
    int numdisp = 0;
    cout << "The top 10 most frequently occurring words: " << endl;

    for (int i = num-1; i >= 0; i--){
        cout << uniqArr[i].word << endl;
        numdisp++;
        if (numdisp > 9)
        break;
    }
    numdisp = 0;
    cout << "The top 10 least frequently occurring words: " << endl;

    for (int i = 0; i < num; i++){
        cout << uniqArr[i].word << endl;
        numdisp++;
        if (numdisp > 9)
        break;
    }

    ofstream wordfile("words.txt");
    ofstream countfile("counts.txt");

    if (wordfile.is_open() && countfile.is_open()){
        for (int i=0; i<num; i++){
                wordfile << uniqArr[i].word << endl; 
                countfile << uniqArr[i].numOoccurences << endl;
        }
    }
    return 0;

    wordfile.close();
    countfile.close();
}   


