#include <iostream>
#include <cstdlib>
using namespace std;


int die, winNum;
int score1 = 100, score0 = 100;
bool player, RollorHold = 1;
int turnTotal = 0;
bool powerButton = 1;


// Roll
int roll(){
    die = rand()%6 + 1;
   return die;
}


// oneTurn
int oneTurn(){
    turnTotal = 0;
    srand(time(NULL));

    cout << "Is the player a human(1) or a computer(0)? ";
    cin >> player; 

    if (player == 1){
        while (RollorHold == 1){
            cout << "1 to roll, 0 to hold ";
            cin >> RollorHold;
            if (RollorHold == 1){
                die = roll();
                if (die != 3){
                    cout << "Player rolled " << die << endl;
                    turnTotal = turnTotal + die;
                    cout << "The current turn total is " << turnTotal << endl;
                }

                if (die == 3){
                    cout << "PLayer rolled " << die << endl;               
                    turnTotal = -3;
                    cout << "The current turn total is " << turnTotal << endl;
                    RollorHold = 0;
                }
            }        

        }
        cout << "Final turn total is " << turnTotal << endl;
        score1 = score1 + turnTotal;
        score0 = score0 - turnTotal;
        cout << "Current Score : " << "Player1 - " << score1 << " Computer - " << score0 << endl;
        RollorHold = 1;
    }

   
    if (player == 0){
       
            while (RollorHold == 1){
                cout << "1 to roll, 0 to hold" << endl;
                RollorHold = rand()%2;
                
                if (RollorHold == 1){
                        die = roll();
                    if (die != 3){
                        cout << "Computer rolled " << die << endl;
                        turnTotal = turnTotal + die;
                        cout << "The current turn total is " << turnTotal << endl;
                    }

                    if (die == 3){
                        cout << "Computer rolled " << die << endl;               
                        turnTotal = -3;
                        cout << "The current turn total is " << turnTotal << endl;
                        RollorHold = 0;
                    }
                }
                    
                     if (RollorHold == 0){
                        cout << "The computer chose to hold" << endl;
                        cout << "The final turn total is " << turnTotal << endl;
                    }

            }
        score1 = score1 - turnTotal;
        score0 = score0 + turnTotal;
        cout << "Current Score : " << "Player - " << score1 << " Computer - " << score0 << endl;
        RollorHold = 1;    
    }
    return score1;
    return score0;

}

// loopGame
int loopGame(){
    cout << "Score needed to win: " << endl;
    cin >> winNum;
    oneTurn();
    while (score1 < winNum && score0 < winNum){
        oneTurn();
    }
    if (score1 >= winNum){
        cout << "<<<<<Player wins!!!>>>>>" << endl;
        powerButton = 0;
    }
    if (score0 >= winNum){
        cout << "<<<<<Computer wins!!!>>>>>" << endl;
        powerButton = 0;
    }
    
}


// main
int main(){
    while (powerButton == 1)
    loopGame();
}    

