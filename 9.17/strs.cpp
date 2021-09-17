#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char apple[15];
  char alligator[16];

  cout << "gimme string1: ";
  cin.getline(apple, 15);
  cout << "gimme string2: ";
  cin.getline(alligator, 16);

  cout << "strcmp: " << strcmp(apple, alligator) << endl;
  
  return 0;
}
