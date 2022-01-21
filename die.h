class Die {
  protected:
  int value;
  
  public:
  Die();
  virtual ~Die();

  virtual void rollDie();
  int getVal();
  virtual void printDie();
};