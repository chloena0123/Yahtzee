#include <bits/stdc++.h>
#include <iostream>
#include "dice.h"
using namespace std;

int main(){
    Dice* d = new Dice();

    std::cout << d->getVal() << std::endl;

    return 0;
}