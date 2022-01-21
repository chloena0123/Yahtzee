#include <bits/stdc++.h>
#include "user.h"

using namespace std;

User::User() {
    dice = new Die*[NUM_DICE];
    for(int i = 0; i < NUM_DICE; i++){
        dice[i] = new Die();
    }
}

void User::rollDice() {
    srand((unsigned) time(NULL));
    for(int i = 0; i < NUM_DICE; i++){
        dice[i]->rollDie();
    }
}

void User::rollDice(int num){
    cout << "Enter the die number you wish to re-roll" << endl;
    for(int i = 0; i < num; i++){
        int input;
        cin >> input;
        dice[input-1]->rollDie();
    }
}

void User::printDice() {
    for(int i = 0; i < NUM_DICE; i++){
        dice[i]->printDie();
        cout << " ";
    }
    cout << endl;
}

bool User::checkYahtzee() {
    for (int i = 0; i < NUM_DICE - 1; i++) {
        if (dice[i]->getVal() != dice[i + 1]->getVal()) {
            return false;
        }
    }
    return true;
}