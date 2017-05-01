#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double deposit, perYie, matPer;
  cout << "Enter the initial deposit amount: $";
  cin >> deposit;
  cout << "Enter the annual percentage yield: ";
  cin >> perYie;
  cout << "Enter the maturity period (number of months): ";
  cin >> matPer;
  cout << "Month CD Value\n";
  for (int i = 1; i < matPer; i++) {
    deposit = deposit+deposit*(perYie/1200.00);
    cout << setw(2) << i << setw(10) << deposit << endl;
    // cout << deposit << endl;
  }
}
