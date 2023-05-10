#include "Customer.h"
#include <iostream>
#include <string.h>

using namespace std;

Customer::Customer(char *username)
{
  this->username=username;
}

Customer::~Customer()
{}

char *Customer::getUsername()
{
  return username;
}

int Customer::getNumberOfProducts()
{
  int i,s=0;
  for(i=0;i<MAX_ITEMS;i++)
    {
      if (shoppingCart[i]!=NULL)
        s+=1;
    }
  return s;
}

bool Customer::addProduct(Product *product)
{
  bool x=false;
  int i;
  for(i=0;i<MAX_ITEMS && x==false;i++)
    {
      if(shoppingCart[i]==NULL)
      {
        shoppingCart[i]=product;
        x=true;
      }
    }
  return x;
}

float Customer::getTotalCost()
{
  float s=0;
  int i;
  for(i=0;i<MAX_ITEMS;i++)
    {
      if (shoppingCart[i]!=NULL)
        s=s+shoppingCart[i]->getPrice();
    }
  return s;
}

Product *Customer::findProductById(unsigned int id, int &pos)
{
  int i;
  for(i=0;i<MAX_ITEMS;i++)
    if(shoppingCart[i]!=NULL)
      if(shoppingCart[i]->getId()==id)
      {
        pos=i;
        return shoppingCart[i];
      }
  pos=-1;
  return NULL;
}

bool Customer::removeProduct(unsigned int id)
{
  bool x=false;
  int i;
  for(i=0;i<MAX_ITEMS;i++)
    {
      if (shoppingCart[i]!=NULL)
        if(shoppingCart[i]->getId()==id)
        {
          x=true;
          shoppingCart[i]=NULL;
        }
    }
  return x;
}