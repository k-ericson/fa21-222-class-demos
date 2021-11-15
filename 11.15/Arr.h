#ifndef ARR_H
#define ARR_H

class Arr{
 private:
  int size;
  int garbage;
  int *elements;
 public:
  Arr(int unum);
  ~Arr();
  void put(int i, int val);
  int pull(int i);
};

#endif //ARR_H
