#ifndef FRAC_H
#define FRAC_H

#include <iostream>

class Frac{
 private:
  int num, denom;
 public:
  Frac operator*(Frac& rhs);
  bool operator==(Frac& rhs);
  friend std::ostream& operator<<(std::ostream& v, const Frac& rhs);
  Frac();
  Frac(int n, int d);
};
#endif //FRAC_H
