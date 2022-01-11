#include <bits/stdc++.h>
#include "dice.h"
#define NUM_DICE 5
using namespace std;

int main(){
    Dice** dice = new Dice*[NUM_DICE];
    for(int i = 0; i < NUM_DICE; i++){
        dice[i] = new Dice();
    }
    cout << dice[0]->getVal() << endl;

}
