#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
 private:
  string name;
  int age;
  double weight;
  bool isHungry;
  string type;
 public:
  void print();
  Animal();
  Animal(string n, int a, double w, bool h, string t);
  int birthday();
};

#endif //ANIMAL_H
