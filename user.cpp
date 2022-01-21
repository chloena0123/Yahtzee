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

int User::countDuplicates(int val) {
    int score{0};
    for(int i = 0 ; i < NUM_DICE; i++){
        if(dice[i]->getVal() == val){
            score+= val;
        }
    }
    return score;
}

int User::calcThreeOfaKind(){
    int count{0};
    for(int i = 0; i < NUM_DICE - 1; i++){
        int val = dice[i]->getVal();
        for(int j = 0; j < NUM_DICE; j++){
            if(val == dice[i]->getVal()){
                count++;
            }
            if(count == 3){
                return 3 * val;
            }
        }
        count = 0;
    }
    return 0;
}

int User::calcFourOfaKind(){
    int count{0};
    for(int i = 0; i < NUM_DICE - 1; i++){
        int val = dice[i]->getVal();
        for(int j = 0; j < NUM_DICE; j++){
            if(val == dice[i]->getVal()){
                count++;
            }
            if(count == 4){
                return 4 * val;
            }
        }
        count = 0;
    }
    return 0;
}

int User::calcFullHouse(){
    bool hasDouble{false};
    int triple{};

    int valDouble{0};

    for(int i = 0; i < NUM_DICE-1; i++){
        int val = dice[i]->getVal();
        if(dice[i]->getVal() == dice[i+1]->getVal()){
            hasDouble = true;
            valDouble = val;
        }
    }

}

int User::calcSmallStraight(){
    for(int i = 0; i<NUM_DICE; i++){
        if
    }
    return 0;
}

int User::calcLargeStraight(){
    return 0;
}

int User::calcYahtzee() {
    int val = dice[0]->getVal();
    for(int i = 1; i < NUM_DICE; i++){
        if(dice[i]->getVal() != val){
            return 0;
        }
    }
    return val*5;
}
