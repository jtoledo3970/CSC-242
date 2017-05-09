/* Write the function isEven() that receives an integer type parameter and returns a boolean type. The function returns true if the parameter is an even integer and false otherwise. Test this function by writing code for parts (a) and (b) below

Write a main function in which the user is prompted to enter ten integer type numbers. Use an array to store the numbers. You must also use a loop to receive the ten numbers from the user.
After receiving the integers from the user in part (a), call the function isEven() on each integer in the array and display only the even integers. You must write a loop for this part.
*/
#include <iostream>
using namespace std;

bool isEven(int n);

int main() {
  int tenNumbers[10];
  int evenNumbers[10];
  int evenCounter = 0;
  cout << "Now I will ask that you please enter ten integer type numbers \n";
  for (int i = 1; i <= 10; i++) {
    cout << "Please enter your " << i << " number: ";
    cin >> tenNumbers[i-1];
  }
  for (int i = 0; i < 10; i++) {
    if (isEven(tenNumbers[i]) == true) {
      evenNumbers[evenCounter] = tenNumbers[i];
      evenCounter++;
    }
  }
  if (evenCounter != 0) {
    cout << "These are the even numbers you entered: ";
    for (int i = 0; i < evenCounter; i++) {
      cout << evenNumbers[i] << " ";
    }
  } else if (evenCounter == 0) {
    cout << "You did not enter any even numbers\n";
  }
}

bool isEven(int n) {
  if (n % 2 == 0) {
    return true;
  } else if (n % 2 != 0) {
    return false;
  }
}
