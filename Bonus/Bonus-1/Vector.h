#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
  public:
    Vector();
    Vector(double x,double y);
    double GetX() {return X;}
    void SetX(double val) {X=val;}
    double GetY() {return Y;}
    void SetY(double val) {Y=val;}
    double magnitude();
    double angle();
    double angleD();
    bool multiply(double f);
    Vector add(Vector e7);
    Vector clone();
  private:
    double X,Y;
};
#endif