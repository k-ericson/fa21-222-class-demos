#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {
  Rectangle umm;
  umm.print();
  cout << "Perimeter: " << umm.perimeter() << endl;
  cout << "Area: " << umm.area() << endl;

  Rectangle addanm("Billbert", "blue", 2, 5);
  addanm.print();
  cout << "Perimeter: " << addanm.perimeter() << endl;
  cout << "Area: " << addanm.area() << endl;
  
  return 0;
}
