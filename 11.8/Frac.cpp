#include "Frac.h"

using namespace std;

Frac Frac::operator*(Frac& rhs) {
  int n = num * rhs.num;
  int d = denom * rhs.denom;
  return Frac(n, d);
}

ostream& Frac::operator<<(ostream& v, const Frac& rhs) {
  v << rhs.num << "/" << rhs.denom;
  return v;
}

Frac::Frac() {
  num = 1;
  denom = 2;
}

Frac::Frac(int n, int d) {
  num = n;
  denom = d;
}

bool Frac::operator==(Frac& rhs){
  return (double(num) / denom == double(rhs.num) / rhs.denom);
}
