#include "die.h"
#define NUM_DICE 5

class User : Die{
private:
    Die** dice;
    int topTotal, bottomTotal, grandTotal;
    int ones, twos, threes, fours, fives, sixes;
    int threeOfaKind, fourOfaKind, fullHouse, smallStraight,largeStraight, yahtzee;

public:
    User();

    void rollDice();
    void printDice();
    void rollDice(int num);

    int countDuplicates(int val);

    int calcThreeOfaKind();
    int calcFourOfaKind();
    int calcFullHouse();
    int calcSmallStraight();
    int calcLargeStraight();
    int calcYahtzee();

    void setTopTotal();
    void setBottomTotal();
    void setGrandTotal();
    void getGrandTotal();




};
