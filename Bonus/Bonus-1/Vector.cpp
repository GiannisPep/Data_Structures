#include "Vector.h"
#include <iostream>
#include <cmath>
using namespace std;

Vector::Vector()
{
  X=Y=0;
}

Vector::Vector(double x,double y)
{
  X=x;
  Y=y;
}

double Vector::magnitude()
{
  return sqrt(pow(X,2)+pow(Y,2));
}

double Vector::angle()
{
  double k=Y/X;
  return abs(atan(k));
}

double Vector::angleD()
{
  double pi = 3.14159;
  double k=Y/X;
  //cout << Y << endl;
  return abs((atan(k) * (180 / pi)));
}

bool Vector::multiply(double f)
{
  X=f*X;
  Y=f*Y;
  return X,Y;
}

Vector Vector::add(Vector e7)
{
  Vector a;
  a.X=e7.X+X;
  a.Y=e7.Y+Y;
  return a;
}

Vector Vector::clone()
{
  Vector a;
  a.X=X;
  a.Y=Y;
  return a;
}