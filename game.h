#include "dice.h"
#define NUM_DICE 5

class Game : Dice{
private:
    Dice** dice;
public:
    Game();

    void rollDice();

    void printDice();
};
