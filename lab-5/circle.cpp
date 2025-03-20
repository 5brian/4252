#include "Circle.h"
#include <iostream>

Circle::Circle(double r) : radius(r) {}

double Circle::area() const {
    return M_PI * radius * radius;
}

void Circle::display() const {
    std::cout << "Circle: " << radius << " | Area = " << area() << std::endl;
}
