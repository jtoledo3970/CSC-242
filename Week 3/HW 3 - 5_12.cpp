/*
(Find numbers divisible by 5 and 6) Write a program that displays all the numbers from 100 to 1,000, 10 per line, that are divisible by 5 and 6. Numbers are separated by exactly one space.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int count = 1;
  for (int i = 100; i <= 1000; i++) {
    if (i % 5 == 0 && i % 6 == 0) {
      (count++ % 10 != 0) ? cout << setw(4) << i : cout << setw(4) << i << "\n";
    }
  }
}
