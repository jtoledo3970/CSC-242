#include <iostream>
using namespace std;

int main() {
  char first, second;
  string result, code;
  bool b1 = true, b2 = true;
  cout<< "Enter two characters: ";
  cin >> code;
  if (code.length() == 2) {
    first = code[0];
    second = code[1];
  } else {
    cout << "Sorry you can only enter two characters" << endl;
    return 0;
  }

  if (first == 'M') {
    result = "Mathematics";
  } else if(first == 'C') {
      result = "Computer Science";
  } else if(first == 'I') {
      result = "Information Technology";
  } else {
    b1 = false;
  }

  if (second == '1') {
    result = result + " Freshman";
  } else if (second == '2') {
    result = result + " Sophomore";
  } else if (second == '3') {
    result = result + " Junior";
  } else if (second == '4') {
    result = result + " Senior";
  } else {
    b2 = false;
  }
  if (b1 == false && b2 == false) {
    cout << "Invalid major and status code" << endl;
  } else if (b1 == true && b2 == false) {
  cout << "Invalid status code" << endl;
  } else if (b1 == false && b2 == true) {
  cout << "Invalid major code" << endl;
  } else {
  cout << result <<  endl;
  }
}
