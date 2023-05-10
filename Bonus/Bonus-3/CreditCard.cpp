#include "CreditCard.h"
#include <iostream>

using namespace std;

CreditCard::CreditCard(char *description,float balance,int limit) : Account(description,balance)
{
  this->limit=limit;
}

bool CreditCard::withdraw(float amount)
{
  if ((amount<=balance) || (balance-amount+limit>0))
  {
    balance=balance-amount;
    return 1;
  }
  else
    return 0;
}