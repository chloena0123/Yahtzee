#include <bits/stdc++.h>
#include "game.h"
using namespace std;


int main(){
    Game* game = new Game();

    bool availableRolls = false;
    int currRolls = 0;

    cout << "====== Welcome to Yahtzee! =====" << endl;
    game->rollDice();
    while(true){
        game->printDice();

        cout << "Number of dice to reroll: ";
        int numDicetoReroll;
        cin >> numDicetoReroll;

        if(numDicetoReroll < 5) {
            game->rollDice(numDicetoReroll);
            game->printDice();
        }
        else {
            game->rollDice();
            game->printDice();
        }

        if(game->checkYahtzee()){
            break;
        }
    }

    return 0;
}