#include "ElectricalScooter.h"
#include <iostream>

using namespace std;

ElectricalScooter::ElectricalScooter()
{
  maxkm2=0;
  year2=0;
  chargingtime=0;
}

ElectricalScooter::ElectricalScooter(int maxKM,int YEAR,int TIME)
{
  maxkm2=maxKM;
  year2=YEAR;
  chargingtime=TIME;
}

double ElectricalScooter::getPollutionScore()
{
  return (chargingtime*300)/365.0;
}

double ElectricalScooter::getTaxes()
{
  return 0.8*((2022-year2)*12.5);
}