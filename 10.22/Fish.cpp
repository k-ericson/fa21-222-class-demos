#include "Fish.h"
#include <iostream>

using namespace std;

void Fish::print() {
  Animal::print();
  cout << "\tColor: " << color << "\n\tFin Count: " << finCount << endl;
}

Fish::Fish() : Animal("Default Fish", 0, 0.25, false, "Fish") {
  color = "Default Color";
  finCount = 3;
}

Fish::Fish(string n, int a, double w, bool h, string c, int fC)
  : Animal(n, a, w, h, "Fish") {
  color = c;
  finCount = fC;
}

void Fish::sayHello() {
  cout << name << "-Fish says: \"Hello! Blub, Blub!\"" << endl;
}
