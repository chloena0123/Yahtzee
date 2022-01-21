class Dice {
  protected:
  int value;
  
  public:
  Dice();
  virtual ~Dice();

  virtual void rollDice();
  int getVal();
  virtual void printDice();
};