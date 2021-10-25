
#include <iostream>

using namespace std;

int main() {
  int userNum;
  cout << "How many? ";
  cin >> userNum;

  float * fptr;
  fptr = new float[userNum];

  for(int i = 0; i < userNum; i++) {
    cout << "value " << i + 1 << ": ";
    cin >> fptr[i];
  }

  for(int i = 0; i < userNum; i++) {
    cout << "fptr[" << i << "]: " << (*(fptr + i)) << endl;
  }
  
  return 0;
}
