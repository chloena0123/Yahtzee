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
    srand((unsigned) time(NULL));
    for(int i = 0; i < NUM_DICE; i++){
        dice[i]->rollDice();
    }
}

void Game::rollDice(int num){
    cout << "Enter the die number you wish to reroll" << endl;
    for(int i = 0; i < num; i++){
        int input;
        cin >> input;
        dice[input-1]->rollDice();
    }
}

void Game::printDice() {
    for(int i = 0; i < NUM_DICE; i++){
        dice[i]->printDice();
        cout << " ";
    }
    cout << endl;
}

bool Game::checkYahtzee() {
    for (int i = 0; i < NUM_DICE - 1; i++) {
        if (dice[i]->getVal() != dice[i + 1]->getVal()) {
            return false;
        }
    }
    return true;
}