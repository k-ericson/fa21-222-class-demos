#include "Animal.h"
#include "Fish.h"
#include <iostream>

using namespace std;

int main() {
  Animal a1;
  Animal a2("Test Animal 2", 7, 43.2, false, "secret type");

  cout << "Testing a1" << endl;
  a1.print();
  int newAge = a1.birthday();
  cout << "After birthday, a1 is now: " << newAge << endl;
  a1.print();

  cout << endl << endl;
  
  cout << "Testing a2" << endl;
  a2.print();
  int newAge2 = a2.birthday();
  cout << "After birthday, a1 is now: " << newAge2 << endl;
  a2.print();

  cout << endl << endl;

  Fish f1;
  Fish f2("Test Fish 2", 12, 4.32, true, "rainbow!", 42);

  cout << "Testing f1" << endl;
  f1.print();
  int fishAge = f1.birthday();
  cout << "After birthday, f1 is now: " << fishAge << endl;
  f1.print();

  cout << endl << endl;
  
  cout << "Testing f2" << endl;
  f2.print();
  int fishAge2 = f2.birthday();
  cout << "After birthday, f2 is now: " << fishAge2 << endl;
  f2.print();

  
  return 0;
}
