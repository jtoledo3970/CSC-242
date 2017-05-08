/*
Write the function printString() that receives a string type parameter and prints individual characters of the string with a space in between them using a loop, the function should have a void return type. Write a main program to test the function.
*/

#include <iostream>
#include <string>
using namespace std;

void printString(string n);

int main() {
  string n;
  cout << "Please enter a string: ";
  getline(cin, n);
  printString(n);
}

void printString(string n) {
  for (int i = 0; i < n.length(); i++) {
    cout << n.at(i) << " ";
  }
  cout << endl;
}
