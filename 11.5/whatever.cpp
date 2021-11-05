
#include <iostream>

using namespace std;
int fact(int n);

int main() {
  int cool;
  cout << "gimme num: ";
  cin >> cool;

  cout << "results:" << fact(cool) << endl;
  
  return 0;
}

int fact(int n) {
  if (n <= 1) {
    return 1;
  }
  return n * fact(n - 1);
}
