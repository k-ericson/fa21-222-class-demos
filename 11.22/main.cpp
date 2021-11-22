#include "bilbert.h"
#include <iostream>

using namespace std;

int main() {
  bilbert<char> bc(5);
  bilbert<double> bd(3);
  bilbert<string> bstr(4);

  cout << "putting things in" << endl;
  
  for (int i = -1; i < 6; i++) {
    bc.put(i, 'A' + i);
    bd.put(i, .2 * i);
    bstr.put(i, "!!!!");
  }

  cout << "pulling them out" << endl;

  for (int i = -1; i < 6; i++) {
    cout << "bc[" << i << "]: " << bc.pull(i) << endl;
    cout << "bd[" << i << "]: " << bd.pull(i) << endl;
    cout << "bstr[" << i << "]: " << bstr.pull(i) << endl;
  }
  
  return 0;
}
