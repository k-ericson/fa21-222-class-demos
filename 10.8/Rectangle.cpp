#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() {
  name = "Block";
  color = "Black";
  height = 0;
  width = 1;
}

Rectangle::Rectangle(string name, string color, double height, double width) {
  this->name = name;
  this->color = color;
  this->height = height;
  this->width = width;
}

double Rectangle::perimeter() {
  return 2 * width + 2 * height;
}

double Rectangle::area() {
  return height * width;
}

void Rectangle::print() {
  cout << "Rectangle: " << name << "\n\tcolor: " << color
       << "\n\theight: " << height << "\n\twidth: "
       << width << endl;
}
