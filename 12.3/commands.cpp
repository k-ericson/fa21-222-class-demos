
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  /* for (int i = 0; i < argc; i++) {
    cout << "argv[" << i << "]: " << argv[i] << endl;
    }*/
  if (argc < 2) {
    cout << "incorrect usage: ./guy <filename>" << endl;
    return 1;
  }

  cout << "opening dungeon file: " << argv[1] << endl;
  
  return 0;
}
