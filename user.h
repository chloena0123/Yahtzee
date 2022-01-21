#include "die.h"
#define NUM_DICE 5

class User : Die{
private:
    Die** dice;
public:
    User();

    void rollDice();

    void printDice();

    bool checkYahtzee();

    void rollDice(int num);
};
