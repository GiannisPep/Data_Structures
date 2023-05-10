#ifndef ELECTRICALSCOOTER_H
#define ELECTRICALSCOOTER_H

#include "Scooter.h"

class ElectricalScooter : public Scooter
{
  private:
    int maxkm2;
    int year2;
    int chargingtime;
  public:
    ElectricalScooter();
    ElectricalScooter(int maxKM,int YEAR,int TIME);
    int getMaxKM(){return maxkm2;}
    int getYear(){return year2;}
    double getPollutionScore();
    double getTaxes();
    int getChargingTime(){return chargingtime;}
    void setChargingTime(int val){chargingtime=val;}
};
#endif