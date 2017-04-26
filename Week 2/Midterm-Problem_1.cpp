/*
Write a program that prompts the user to enter the name and the salary of an employee. Here the salary will denote an hourly wage, such as $9.25 per hour. Also prompt user to enter the number of hours the employee worked in the past week. Then Compute the weekly pay. Any overtime work (over 40 hours per week) is paid at 150 percent of the regular wage. Print the paycheck for the employee. Here is an example
                  Enter name and hourly pay:        John Doe
                                                                  9.25
                  Enter hours worked:                   42
                  Your pay for this week is:           $397.35
*/

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
}
