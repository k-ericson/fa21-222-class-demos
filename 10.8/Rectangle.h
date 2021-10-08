#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>

class Rectangle {
 private:
  std::string name, color;
  double height, width;
 public:
  Rectangle();
  Rectangle(std::string name, std::string color, double height, double width);
  double perimeter();
  double area();
  void print();
};

#endif //RECTANGLE_H
