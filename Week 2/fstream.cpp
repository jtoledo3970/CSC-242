#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  string line;
  ifstream myfile;
  myfile.open("test.txt");
  getline(myfile,line);
  cout << line;
  myfile.close();
  ofstream newFile;
  newFile.open("newFile.txt");
  newFile << line;
  newFile.close();
}
