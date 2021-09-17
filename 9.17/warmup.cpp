#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  for (int i = 1; i < 13; i++) {
    for (int j = 1; j < 13; j++) {
      cout << (i % 2 == 0? left:right) << setfill('.') << setw(5) <<  i * j;
    }
    cout << '\n';
  }
  
  return 0;
}

// int main() {
//   for (int i = 1; i < 13; i++) {
//     for (int j = 1; j < 13; j++) {
//       cout << setfill('*') << setw(4) <<  i * j << ' ';
//     }
//     cout << '\n';
//   }
  
//   return 0;
// }
