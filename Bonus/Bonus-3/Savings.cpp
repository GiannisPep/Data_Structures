#include "Savings.h"
#include <iostream>

using namespace std;

Savings::Savings(char *description,int balance) : Account(description,balance)
{
  i=0;
}

bool Savings::withdraw(float amount)
{
  i+=1;
  if (i<=3 && balance-amount>=0)
  {
    balance=balance-amount;
    return 1;
  }
  else
    return 0;
}