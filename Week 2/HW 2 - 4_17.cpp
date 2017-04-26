/*
(Business: check ISBN-10) An ISBN-10 (International Standard Book Number)
consists of 10 digits: d1d2d3d4d5d6d7d8d9d10. The last digit, d10, is a checksum, which is calculated from the other nine digits using the following formula: (d1 * 1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 + d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9) % 11
If the checksum is 10, the last digit is denoted as X according to the ISBN-10 convention. Write a program that prompts the user to enter the first 9 digits and displays the 10-digit ISBN (including leading zeros). Your program should read the input as an integer.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string val, isbn;
  int check;
  cout << "Enter the first 9 digits of an ISBN: " ;
  cin >> val;
  if (val.size() == 9) {
    check = ((val[0] - 48) * 1 + (val[1] - 48) * 2 + (val[2] - 48) * 3 + (val[3] - 48) * 4 + (val[4] - 48) * 5 + (val[5] - 48) * 6 + (val[6] - 48) * 7 + (val[7] - 48) * 8 + (val[8] - 48) * 9) % 11;
    if (check < 10) {
      isbn = val + char(check + 48);
      cout << "The ISBN-10 number is " << isbn << endl;
    } else {
      isbn = val + "X";
      cout << "The ISBN-10 number is " << isbn << endl;
    }
  } else {
    cout << "Invalid input" << endl;
    return 0;
  }
}
