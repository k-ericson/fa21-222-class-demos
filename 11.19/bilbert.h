#ifndef BILBERT_H
#define BILBERT_H
#include <typeinfo>
#include <string>

using namespace std;

template <typename GUY>
class bilbert{
 private:
  int size;
  GUY garbage;
  GUY *elements;
 public:
  bilbert(int s);
  ~bilbert();
  void put(int i, GUY val);
  GUY pull(int i);
};

template <typename G>
bilbert<G>::bilbert(int s) {
  size = s;
  if (typeid(G) == typeid(string)) {
    garbage = "????";
  }
  else if (typeid(G) == typeid(char)) {
      garbage = '?';
  }
  else {
    garbage = 0;
  }
  elements = new G[size];      
}

template <typename U>
bilbert<U>::~bilbert() {
  delete[] elements;
}

template <typename Y>
void bilbert<Y>::put(int i, Y val){
  if (i >= 0 && i < size) {
    elements[i] = val;
  }
}

#endif //BILBERT_H
