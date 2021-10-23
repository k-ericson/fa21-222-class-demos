#include "Animal.h"
#include <iostream>

using namespace std;

void Animal::print() {
  cout << "Name: " << name << "\n\tage: " << age
       << "\n\tweight: " << weight << "\n\thungry? "
       << boolalpha << isHungry << "\n\ttype: "
       << type << endl;
}

int Animal::birthday() {
  age++;
  cout << "Happy Birthday!" << endl;
  return age;
}

Animal::Animal() {
  name = "Default Animal";
  age = 0;
  weight = .2;
  isHungry = true;
  type = "Default Type";
}

Animal::Animal(string n, int a, double w, bool h, string t) {
  name = n;
  age = a;
  weight = w;
  isHungry = h;
  type = t;
}

void Animal::sayHello() {
  cout << name << "-Animal says \"Hello!\"" << endl;
}
