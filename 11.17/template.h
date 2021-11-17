#ifndef TEMPLATE_H
#define TEMPLATE_H

template <typename T>
class myClass {
 private:
  T *stuff;
  int size;
 public:
  myClass();
  ~myClass();
};

template <typename E>
myClass<E>::myClass() {
  size = 50;
  stuff = new E[size];
}

template <typename J>
myClass<J>::~myClass() {
  delete[] stuff;
}
#endif //TEMPLATE_H
