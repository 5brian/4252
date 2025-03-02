#include "circle.h"
#include <cmath>
#include <iostream>

using namespace std;

Circle::Circle() {
  x = 0;
  y = 0;
  radius = 0;
}

Circle::Circle(int xCoord, int yCoord, double r) {
  x = xCoord;
  y = yCoord;

  if (r > 0.0) {
    radius = r;
  } else {
    radius = 5.0;
  }
}

int Circle::getX() const { return x; }

int Circle::getY() const { return y; }

double Circle::getRadius() const { return radius; }

void Circle::setX(int xCoord) { x = xCoord; }

void Circle::setY(int yCoord) { y = yCoord; }

void Circle::setRadius(double r) {
  if (r > 0.0) {
    radius = r;
  }
}

void Circle::translate(int horizShift, int vertShift) {
  x += horizShift;
  y += vertShift;
}

double Circle::getArea() const { return M_PI * radius * radius; }

void Circle::displayCircle() const {
  cout << "Radius: " << radius << " at point x = " << x << ", y = " << y
       << endl;
}

bool Circle::intersect(Circle c) const {
  double distance = sqrt(pow(x - c.getX(), 2) + pow(y - c.getY(), 2));

  return distance < (radius + c.getRadius()) &&
         distance > abs(radius - c.getRadius());
}

bool Circle::operator==(Circle c) const {
  return x == c.getX() && y == c.getY() && radius == c.getRadius();
}

Circle operator+(const Circle &c1, const Circle &c2) {
  double newRadius = c1.getRadius() + c2.getRadius();

  int newX = (abs(c1.getX()) > abs(c2.getX())) ? c1.getX() : c2.getX();
  int newY = (abs(c1.getY()) > abs(c2.getY())) ? c1.getY() : c2.getY();

  return Circle(newX, newY, newRadius);
}
