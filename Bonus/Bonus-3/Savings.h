#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

class Savings : public Account
{
  private:
    int i;
  public:
    Savings(char *description,int balance);
    bool withdraw(float amount);
};
#endif