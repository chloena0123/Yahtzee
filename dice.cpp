#include "dice.h"
#include <bits/stdc++.h>
using namespace std;

Dice::Dice(){
  // init to 0 - unrolled
  value = 0;
}

void Dice::rollDice(){
  value = rand() % 6 + 1;
}

int Dice::getVal(){
  return value;
}

void Dice::printDice(){
    int v = getVal();
    if(v == 1)
        cout << "⚀";
    else if (v == 2)
        cout << "⚁";
    else if (v == 3)
        cout << "⚂";
    else if (v == 4)
        cout << "⚃";
    else if (v == 5)
        cout << "⚄";
    else
        cout << "⚅";

}

Dice::~Dice(){

}



