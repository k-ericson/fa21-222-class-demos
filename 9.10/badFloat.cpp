
#include <iostream>

using namespace std;

int main() {
  double a, b, c;

  a = 1.345d;
  b = 1.123d;
  c = a + b;

  if (c == 2.468) {
    cout << a << " + " << b << " = " << c << endl;
  }
  else {
    cout << a << " + " << b << " != " << c << endl;
  }
  
  return 0;
}
