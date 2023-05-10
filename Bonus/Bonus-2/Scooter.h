#ifndef SCOOTER_H
#define SCOOTER_H

class Scooter
{
  private:
    int maxkm1;
    int year1;
  public:
    Scooter();
    Scooter(int maxKM,int YEAR);
    int getMaxKM(){return maxkm1;}
    int getYear(){return year1;}
    double getPollutionScore();
    virtual double getTaxes();
};
#endif