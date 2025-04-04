#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
  virtual double area() const = 0;
  virtual void display() const = 0;
  virtual ~Shape() {}
};

#endif
