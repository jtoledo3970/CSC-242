/*
Write a program that prompts the user to enter three strings. Your program must read the strings and sorts them lexicographically. Here is an example
Enter three strings: Charlie   Able    Baker
Able
Baker
Charlie
*/

#include <iostream>
using namespace std;

int main() {
  string a, b, c, temp;
  cout << "Please enter three strings: ";
  cin >> a >> b >> c;
  string max = a;
  if (max[0] > b[0]) {
    temp = a;
    a = b;
    b = temp;
    max = b;
  }
  if (max[0] > c[0]) {
    temp = b;
    b = c;
    c = temp;
    max = c;
  }
  cout << a << " " << b << " " << c << endl;
}
