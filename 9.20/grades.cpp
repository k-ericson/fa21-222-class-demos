
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;
const int STUDENTS = 320;
const int GRADES = 3;


int main() {
  string studentNames[STUDENTS];
  double gradeType[STUDENTS][GRADES];

  ifstream sFile;
  string fName;
  cout << "file: ";
  cin >> fName;
  
  sFile.open(fName);
  //Reading from file - sentinel loop with priming read
  string tmp;
  getline(sFile, tmp);
  int i = 0;
  while(sFile) {
    studentNames[i] = tmp;
    sFile >> gradeType[i][0] >> gradeType[i][1] >> gradeType[i][2];
    sFile.get();
    getline(sFile, tmp);
    i++;
  }

  //testing our read (took a few tries)
  for (int j = 0; j < i; j++) {
    cout << "Name: " << studentNames[j] << endl << "\tGrades: ";
    for (int k = 0; k < GRADES; k++) {
      cout << gradeType[j][k] << " ";
    }
    cout << endl;
  }

  //writing out to file
  ofstream oFile;
  cout << "outFile: ";
  cin >> fName;
  oFile.open(fName);

  for (int j = 0; j < i; j++) {
    oFile << left << setw(30) << studentNames[j];
    double avg = 0;
    for (int k = 0; k < GRADES; k++) {
      avg += gradeType[j][k];
    }
  
  return 0;
}
