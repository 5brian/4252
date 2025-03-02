#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
public:
  Circle();
  Circle(int x, int y, double radius);
  Circle(const Circle &other);

  int getX() const;
  int getY() const;
  double getRadius() const;

  void setX(int x);
  void setY(int y);
  void setRadius(double r);

  void translate(int horizShift, int vertShift);
  double getArea() const;
  void displayCircle() const;
  bool intersect(Circle c) const;

  bool operator==(Circle c) const;

private:
  int x;
  int y;
  double radius;
};

Circle operator+(const Circle &c1, const Circle &c2);

#endif
