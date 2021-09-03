/**
 * @file warmup.cpp
 * @author Kathleen Ericson
 * @date 2021-09-03
 * @brief warmup 9/3
 * 
 * warmup and showing off commenting in 222
 */


#include <iostream>

using namespace std;


/**
 * finds the length of an input c-string
 *
 * @param const char s[] the c-string we're finding the length of
 * @pre s[] is a valid c-string
 * @return int length of s[]
 * @post s[] is unchanged
 * 
 */
int length(const char s[]);

int main() {
  char ummm[30];
  cout << "what is ummm? ";
  cin.getline(ummm, 30);

  int size = length(ummm);

  cout << "length: " << size << endl;
  
  return 0;
}

int length(const char s[]) {
  int a = 0;
  while(s[a] != '\0') {
    a++;
  }
  return a;
}

/*
;;gdb many windows???
(setq gdb-many-windows 1)

;;windmove?
(windmove-default-keybindings)
*/
