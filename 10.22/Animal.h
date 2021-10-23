#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal{
 protected:
  std::string name;
 private:
  int age;
  double weight;
  bool isHungry;
  std::string type;
 public:
  void print();
  Animal();
  Animal(std::string n, int a, double w, bool h, std::string t);
  int birthday();
  virtual void sayHello();
};

#endif //ANIMAL_H
