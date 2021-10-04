
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct student{
  string name;
  double g1, g2, g3;
};

int loadData(string fName, student c[]);
double avg(student s);
void print(student s);

int main() {
  string file;
  cout << "File? ";
  cin >> file;
  student cats[35];

  int count = loadData(file, cats);

  for (int i = 0; i < count; i++) {
    print(cats[i]);
  }
  
  
  return 0;
}

int loadData(string fName, student c[]) {
  ifstream inFile;
  inFile.open(fName);

  int i = 0;
  string tmp;
  getline(inFile, tmp);
  while(inFile) {
    c[i].name = tmp;
    inFile >> c[i].g1 >> c[i].g2
	   >> c[i].g3;
    i++;
    inFile.get();
    getline(inFile, tmp);
  }
  inFile.close();
  return i;
}

double avg(student s) {
  double a = 0;
  a = s.g1 + s.g2 + s.g3;
  a /= 3;
  return a;
}

void print(student s) {
  cout << "Name: " << s.name << endl << "\tg1: " << s.g1 << "\n\tg2: " << s.g2
       << "\n\tg3: " << s.g3 << "\n\tAvg: " << avg(s) << endl;
}
