#include "circle.h"
#include <iostream>

using namespace std;

int main() {
  Circle c1;
  cout << "Circle 1 (default constructor):" << endl;
  c1.displayCircle();

  Circle c2(3, 4, 10.0);
  cout << "\nCircle 2 (parameterized constructor):" << endl;
  c2.displayCircle();

  Circle c3 = c2;
  cout << "\nCircle 3 (copy of Circle 2):" << endl;
  c3.displayCircle();

  cout << "\nTesting getters for Circle 2:" << endl;
  cout << "X: " << c2.getX() << endl;
  cout << "Y: " << c2.getY() << endl;
  cout << "Radius: " << c2.getRadius() << endl;

  cout << "\nModifying Circle 3 with setters:" << endl;
  c3.setX(-5);
  c3.setY(-10);
  c3.setRadius(15.0);
  c3.displayCircle();

  cout << "\nTrying to set invalid radius:" << endl;
  c3.setRadius(-2.0);
  c3.displayCircle();

  cout << "\nTranslating Circle 3:" << endl;
  c3.translate(3, 7);
  c3.displayCircle();

  cout << "\nArea of Circle 3: " << c3.getArea() << endl;

  Circle c4(0, 0, 10);
  Circle c5(15, 0, 10);
  Circle c6(100, 100, 5);

  cout << "\nTesting intersection:" << endl;
  cout << "Circle 4 and Circle 5 intersect: "
       << (c4.intersect(c5) ? "Yes" : "No") << endl;
  cout << "Circle 4 and Circle 6 intersect: "
       << (c4.intersect(c6) ? "Yes" : "No") << endl;

  Circle c7(3, 4, 10.0);
  cout << "\nTesting equality operator:" << endl;
  cout << "Circle 2 equals Circle 7: " << (c2 == c7 ? "Yes" : "No") << endl;
  cout << "Circle 2 equals Circle 3: " << (c2 == c3 ? "Yes" : "No") << endl;

  Circle c8 = c2 + c3;
  cout << "\nResult of Circle 2 + Circle 3:" << endl;
  c8.displayCircle();

  return 0;
}
