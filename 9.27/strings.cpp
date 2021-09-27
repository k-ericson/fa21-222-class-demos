
#include <iostream>
#include <string>

using namespace std;

int main() {
  string spyder = "Hi!";
  cout << "spyder: " << spyder << " Length: " << spyder.length() << " Size: " << spyder.size() << endl;

  cout << spyder + "I like cheese!" << endl;
  cout << "spyder: " << spyder << endl;

  string scorpion = spyder.append("I hates cheese!");
  cout << "scorpion: " << scorpion << endl;
  cout << "spyder: " << spyder << " Length: " << spyder.length() << " Size: " << spyder.size() << endl;
  
  return 0;
}
