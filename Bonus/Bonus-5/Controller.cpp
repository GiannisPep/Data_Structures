#include "Controller.h"

#include <cstring>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Controller::save(Product products[], const char *filename, int num)
{
  ofstream x(filename);
  int i=0;
  if (x.is_open())
  {
    for(i=0;i<num;i++)
      {
        x << products[i].getName() << "\n" << products[i].getPrice() << "\n";
      }
  }
  x.close();
}

void Controller::load(const char *filename, Product products[], int num)
{
  ifstream x;
  int i=0;
  string word;
  x.open(filename);
  if (x.is_open())
    {
        for (i=0;i<num;i++)
        {
            getline(x,word);
            const int length=word.length();
            char *char_array=new char[length +1];
            strcpy(char_array, word.c_str());
            products[i].setName(char_array);
            getline(x, word);
            products[i].setPrice(stof(word));
        }
    }
}