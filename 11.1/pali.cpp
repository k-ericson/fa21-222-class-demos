
#include <iostream>
#include <string>

using namespace std;
bool isPalindrome(string s);

int main() {
  string toCheck;
  cout << "Gimme string (no space, punctuation): ";
  cin >> toCheck;
  bool check = isPalindrome(toCheck);
  cout << "isPalindrome? " << boolalpha << check << endl;
  
  return 0;
}

bool isPalindrome(string s) {
  if (s.length() == 1)
    return true;
  if (s.length() == 0)
    return true;
  if (s[0] != s[s.length() - 1])
    return false;
  return isPalindrome(s.substr(1, s.length() - 2));
}
