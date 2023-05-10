#include "Product.h"
#include <iostream>
#include <string.h>

using namespace std;

Product::Product(unsigned int id, char *name, float price)
{
  this->id=id;
  this->name=name;
  this->price=price;
}

Product::~Product()
{}

char* Product::getName()
{
  return name;
}

unsigned int Product::getId()
{
  return id;
}

float Product::getPrice()
{
  return price;
}