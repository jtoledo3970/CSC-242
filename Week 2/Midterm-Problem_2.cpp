/*
Write a program that prompts the user to enter a string such as “Hello World, I live at 678 San Diego”. Read the string and display the whole string first, then use string functions to display the following:
The length of the string
The character at index 8.
Turn the character at index 9 to upper case then display string again.
Check if the character at index 24 is a digit?
Display the ASCII code (integer value) for the character at index 10
Change the character ‘7’ to ‘9’ and display string again.
Note: you have to use function call to access characters at specified indices. For example, character at index 8 is ‘r’, you must use a function call to retrieve ‘r’.
*/

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
  string val;
  cout << "Please enter a string of your choice: ";
  getline(cin, val);
  cout << "The string you entered was: "<< val << endl;
  cout << "The length of that string is: " << val.length() << endl;
  cout << "The character at index 8 is " << val[8] << endl;
  val[9] = toupper(val[9]);
  cout << "The character at index 9 is now uppercase, here is the string: " << val << endl;
  bool digit = isdigit(val[24]);
  if (digit == true) {
    cout << "The 24th index is a digit." << endl;
  } else {
    cout << "The 24th index is not a digit." << endl;
  }
  for (int i = 0; i < val.length(); i++) {
    if (val[i] == '7') {
      val[i] = '9';
    }
  }
  cout << "The ASCII code for the character at index 10 is: " << int(val[10]) << endl;
  cout << "Any 7's have been turned into 9's here is the new string: "<< val << endl;
}
