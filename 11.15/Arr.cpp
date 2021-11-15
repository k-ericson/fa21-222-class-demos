#include "Arr.h"
#include <iostream>

using namespace std;

Arr::Arr(int unum) {
  size = unum;
  garbage = -1;
  elements = new int[size];
}

void Arr::put(int i, int val) {
  if (i >= 0 && i < size) 
    elements[i] = val;
  else
    cerr << "invalid index: " << i << endl;
}

int Arr::pull(int i) {
  if (i >= 0 && i < size)
    return elements[i];
  cerr << "invalid index: " << i << endl;
  return garbage;
}

Arr::~Arr() {
  delete[] elements;
}
