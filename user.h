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

    int countOnes();
    int countTwos();
    int countThrees();
    int countFours();
    int countFives();
    int countSixes();

    int threeOfaKind();
    int fourOfaKind();
    int fullHouse();
    int smallStraight();
    int largeStraight();
    int yahtzee();

    void setTopTotal();
    void setBottomTotal();
    void setGrandTotal();
    void getGrandTotal();



};
