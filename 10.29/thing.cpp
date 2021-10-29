
#include <iostream>

using namespace std;
int fun(int n);
void cd(int n);

int main() {
  int test;
  cout << "gimme num: ";
  cin >> test;
  // cout << fun(test) << endl;
  cd(test);
  
  return 0;
}

int fun(int n) {
  int k = n;
  if (n <= 0)
    return 1;
  if (n == 1)
    return 2;
  int val;
  val = fun(n - 1) * fun(n - 2);
  return val;
}

void cd(int n) {
  if (n < 0)
    return;
  cd(n - 1);
  cout << n << endl;
}
