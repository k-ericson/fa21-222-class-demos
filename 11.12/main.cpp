#include "Frac.h"
#include <iostream>

using namespace std;

int main() {
  Frac B;
  Frac o(4, 8);

  cout << "B: " << B << "\to: " << o << endl;
  cout << "B * o: " << (B * o) << endl;
  cout << boolalpha << B << " == " << o << " " << (B == o) << endl;
  
  return 0;
}
