
#include <iostream>

using namespace std;

int main() {
  int * iptr;
  double * dptr;
  int x = 12;
  double y = 13;

  iptr = &x;
  dptr = &y;

  int * iptr2;
  double * dptr2;
  iptr2 = new int[10];
  dptr2 = new double[2];

  cout << "iptr: " << iptr << endl;
  cout << "&iptr: " << &iptr << endl;
  cout << "dptr: " << dptr << endl;
  cout << "&dptr: " << &dptr << endl;
  cout << "*iptr: " << *iptr << endl;
  *iptr += 3;
  cout << "*dptr: " << *dptr << endl;
  *dptr -= 12.442;
  cout << "*(iptr + 1): " << *(iptr + 1) << endl;
  cout << "*(dptr + 1): " << *(dptr + 1) << endl;
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;
  cout << "&x: " << &x << endl;
  cout << "&y: " << &y << endl;
  cout << "iptr2: " << iptr2 << endl;
  cout << "dptr2: " << dptr2 << endl;

  delete[] iptr2;
  delete[] dptr2;
  
  return 0;
}
