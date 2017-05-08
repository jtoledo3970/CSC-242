#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double feetToMeters(double feet) {
  return 0.305 * feet;
}

double metersToFeet(double meters) {
  return (1 / 0.305) * meters;
}

int main() {
  cout << setw(15) << "Feet" << setw(15) << "Meters" << setw(15) << "|" << setw(15) << "Meters" << setw(15) << "Feet" << endl;
  cout << "---------------------------------------------------------------------------------------" << endl;

  double feet = 1; double meters = 15;
  for (int i = 1; i <= 10; feet++, meters += 5, i++) {
    cout << setw(15) << feet << setw(15) << feetToMeters(feet) << setw(15) << "|" << setw(15) << meters << setw(15) << metersToFeet(meters) << endl;
  }
}
