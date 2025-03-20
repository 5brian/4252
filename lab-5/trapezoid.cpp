#include "Trapezoid.h"
#include <iostream>

Trapezoid::Trapezoid(double l, double h, double s) : Quadrilateral(l, h), side(s) {}

double Trapezoid::area() const {
    return 0.5 * (length + side) * height;
}

void Trapezoid::display() const {
    std::cout << "Trapezoid: " << length << ", " << height << ", " << side << " | Area = " << area() << std::endl;
}
