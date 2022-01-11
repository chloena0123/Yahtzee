#include <bits/stdc++.h>
#include "game.h"

using namespace std;

Game::Game() {
    dice = new Dice*[NUM_DICE];
    for(int i = 0; i < NUM_DICE; i++){
        dice[i] = new Dice();
    }
}

void Game::rollDice() {
    for(int i = 0; i < NUM_DICE; i++){
        dice[i]->rollDice();
    }
}

void Game::printDice() {
    for(int i = 0; i < NUM_DICE; i++){
        cout << "die #" << i+1 << " = " << dice[i]->getVal() << endl;
    }
}



