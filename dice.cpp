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

Dice::~Dice(){

}


