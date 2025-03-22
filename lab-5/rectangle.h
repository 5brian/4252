#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
protected:
  double length;
  double width;

public:
  Rectangle(double l, double w);
  double area() const override;
  void display() const override;
};

#endif
