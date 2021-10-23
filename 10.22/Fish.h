#ifndef FISH_H
#define FISH_H
#include "Animal.h"

class Fish : public Animal {
 private:
  std::string color;
  int finCount;
 public:
  void print();
  Fish();
  Fish(std::string n, int a, double w, bool h, std::string c, int fC);
  void sayHello();
};


#endif //FISH_H
