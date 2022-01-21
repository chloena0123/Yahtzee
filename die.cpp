#include "die.h"
#include <bits/stdc++.h>
using namespace std;

Die::Die(){
  // init to 0 - unrolled
  value = 0;
}

void Die::rollDie(){
  value = rand() % 6 + 1;
}

int Die::getVal(){
  return value;
}

void Die::printDie(){
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

Die::~Die(){

}



