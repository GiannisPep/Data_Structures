#include "Scooter.h"
#include <iostream>

using namespace std;

Scooter::Scooter()
{
  maxkm1=0;
  year1=0;
}

Scooter::Scooter(int maxKM,int YEAR)
{
  maxkm1=maxKM;
  year1=YEAR;
}

double Scooter::getPollutionScore()
{
  return (maxkm1*250)/365.0;
}

double Scooter::getTaxes()
{
  return (2022-year1)*12.5;
}