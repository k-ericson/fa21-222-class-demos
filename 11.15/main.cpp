#include "Arr.h"
#include <iostream>

using namespace std;

int main() {
  int siz;
  cout << "How big?";
  cin >> siz;

  Arr myArr(siz);

  for (int i = -1; i < siz + 1; i++) {
    int val;
    cout << "what value to place?";
    cin >> val;
    myArr.put(i, val);
  }

  for (int i = -1; i < siz + 1; i++) {
    cout << "myArr[" << i << "]: " << myArr.pull(i) << endl;
  }
  
  
  return 0;
}
