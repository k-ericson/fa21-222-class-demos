
#include <iostream>

using namespace std;

double dive(double a, double b);

int main() {
  
  for (int i = 12; i >= -12; i--) {
    for (int j = 12; j >= -12; j--) {
      try {
	cout << "dividing " << i << " by " << j << ": " << dive(i, j) << endl;
      } catch (const char* s) {
	cout << "caught a string: " << s << endl;
      } catch (...) {
	cout << "something bad happened..." << endl;
      }
    } 
  } 
  return 0;
}

double dive(double a, double b) {
  if (b == 0) {
    throw -12;
  }
  return a / b;
}
