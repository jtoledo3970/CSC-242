#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
string name;
double salary, hours, pay, ot;
cout << "Please enter the name of your employee: ";
getline(cin, name); // This allows to get the first and last name as string does not generally take anything past a space
cout << "Please enter the hourly wage of " << name << ": ";
cin >> salary;
cout << "Please enter the number of hours the employee worked in the past week: ";
cin >> hours;
if (hours > 40) { // This makes it a little easier to differentiate how to calculate overtime
ot = hours - 40; // We subtract the hours from 40 to figure out how many of them were overtime hours
pay = (40.0 * salary) + (ot * (salary * 1.5));
} else {
pay = salary * hours;
}
cout << name << "'s pay for the week is $" << pay << endl;
return 0;
}
