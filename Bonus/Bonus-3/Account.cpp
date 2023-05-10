#include "Account.h"
#include <iostream>
#include <string.h>

using namespace std;

Account::Account(char *description)
{
  this->description=description;
}

Account::Account(char *description,float balance)
{
  this->description=description;
  this->balance=balance;
}

bool Account::withdraw(float amount)
{
  if (balance>=amount)
  {
    this->balance-=amount;
    return 1;
  }
  else
    return 0;
}

bool Account::deposit(float amount)
{
  this->balance+=amount;
  return 1;
}

float Account::getBalance()
{
  return balance;
}

char *Account::getDescription()
{
  return description;
}