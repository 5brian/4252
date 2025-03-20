#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

double Rectangle::area() const {
    return length * width;
}

void Rectangle::display() const {
    std::cout << "Rectangle: " << length << ", " << width << " | Area = " << area() << std::endl;
}
