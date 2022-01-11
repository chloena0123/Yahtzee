#include <bits/stdc++.h>
#include "game.h"
using namespace std;


int main(){
    Game* game = new Game();

    cout << "====== Welcome to Yahtzee! =====" << endl;
    game->rollDice();
    while(true){
        game->printDice();
        int numDicetoReroll;

        if(numDicetoReroll < 5){

        }
        else {
            game->rollDice();
        }
        if(game->checkYahtzee()){
            break;
        }
    }

    return 0;
}