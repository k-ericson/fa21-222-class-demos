#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal{
 private:
  std::string name;
  int age;
  double weight;
  bool isHungry;
  std::string type;
 public:
  void print();
  Animal();
  Animal(std::string n, int a, double w, bool h, std::string t);
  int birthday();
};

#endif //ANIMAL_H
