#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "quadrilateral.h"

class Trapezoid : public Quadrilateral {
private:
  double side;

public:
  Trapezoid(double l, double h, double s);
  double area() const override;
  void display() const override;
};

#endif
