
#include <iostream>

using namespace std;

int main() {
  char arr[3][5];
  // char z = 'A';

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      arr[i][j] = 'A' + (i * 5) + j;
      //z++;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  
  
  return 0;
}
