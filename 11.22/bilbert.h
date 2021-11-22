#ifndef BILBERT_H
#define BILBERT_H
#include <typeinfo>
#include <string>
#include <iostream>

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
  if (typeid(G) == typeid(char)) {
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
  cerr << "Invalid index, no changes made" << endl;
}

template <typename P>
P bilbert<P>::pull(int i) {
  if (i >= 0 && i < size) {
    return elements[i];
  }
  cerr << "Invalid index, returning garbage" << endl;
  return garbage;
}

#endif //BILBERT_H
