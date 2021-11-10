#ifndef FRAC_H
#define FRAC_H

class Frac{
 private:
  int num, denom;
 public:
  Frac operator*(Frac& rhs);
  bool operator==(Frac& rhs);
  ostream& operator<<(ostream& v, Frac& rhs);
  Frac();
  Frac(int n, int d);
};
#endif //FRAC_H
