#include "Product.h"

#include <iostream>
#include <string.h>

using namespace std;

Product::Product()
{
  this->name=NULL;
  price=0;
}

Product::Product(const char *name, float price)
{
  this->name=new char[sizeof(name)+1];
  strcpy(this->name,name);
  this->price=price;
}

char *Product::getName()
{
  return name;
}

void Product::setName(const char *name)
{
  this->name=new char[sizeof(name)+1];
  strcpy(this->name,name);
}

float Product::getPrice()
{
  return price;
}

void Product::setPrice(float price)
{
  this->price=price;
}

Product::~Product()
{
  delete name;
}