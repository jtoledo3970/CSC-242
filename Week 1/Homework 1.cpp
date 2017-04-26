// Jose Toledo
// CSC 242
#include <iostream>
using namespace std;

int main() {
  // Exercise 2.5
  double subtotal, gratuity, tip, finalAmount;
  cout << "Enter a subtotal and gratuity rate: ";
  cin >> subtotal >> gratuity;
  tip = subtotal * (gratuity / 100);
  finalAmount = subtotal + tip;
  cout << "The gratuity amount is " << tip << " the final amount is " << finalAmount << endl;

  // Exercise 2.7
  int minutes, years, days;
  cout << "Enter a number of minutes: ";
  cin >> minutes;
  years = minutes / 525600;
  days = (minutes % 525600) / 1440;
  cout << minutes << " is approximately " << years << " years and " << days << " days" << endl;

  // Exercise 2.13
  double savingAmount, tempValue, tempValue2, finalValue;
  cout << "Please enter the amount that you would like to save: ";
  cin >> savingAmount;
  tempValue = savingAmount * (1 + 0.00417); // Month 1
  tempValue2 = (savingAmount + tempValue) * (1 + 0.00417); // Month 2
  tempValue = (savingAmount + tempValue2) * (1 + 0.00417); // Month 3
  tempValue2 = (savingAmount + tempValue) * (1 + 0.00417); // Month 4
  tempValue = (savingAmount + tempValue2) * (1 + 0.00417); // Month 5
  finalValue = (savingAmount + tempValue) * (1 +0.00417); // Month 6
  cout << "After six months, your account will have: " << finalValue << endl;

  return 0;
}
