#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "shape.h"

class Quadrilateral : public Shape {
protected:
  double length;
  double height;

public:
  Quadrilateral(double l, double h);
  virtual double area() const = 0;
};

#endif
