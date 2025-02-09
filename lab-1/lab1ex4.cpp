#include <iostream>
using namespace std;

int main() {
  double fahrenheit, celsius;

  cout << "Enter fahrenheit temperature: ";
  cin >> fahrenheit;

  celsius = (fahrenheit - 32) * 5.0 / 9.0;

  cout << "Celsius is: " << celsius << endl;

  return 0;
}
