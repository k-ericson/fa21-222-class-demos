
#include <iostream>

using namespace std;

void init(int a[][]);

int main() {
  int b[12][12];

  init(b);
  
  
  return 0;
}

void init(int a[][]) {
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      a[i][j] = i * j;
    }
  }
}
