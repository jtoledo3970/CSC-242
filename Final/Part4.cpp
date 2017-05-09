/*
Write the function distance() that receives four double type parameters representing the x and y coordinates of two points  ( ordered pair) in the rectangular coordinates system. The function returns the distance between the two points. Use the distance formula in page 121 of your textbook.

To test this function, write a main function that prompts the user to enter the x and y components of the two points then calls the function distance() and displays the distance between the two points
*/
#include <iostream>
#include <math.h>
using namespace std;

double distance(double x1, double y1, double x2, double y2);

int main() {
  double x1, y1, x2, y2;
  cout << "Enter the coordinates of two points separated by spaces like this : x1 y1 x2 y2: ";
  cin >> x1 >> y1 >> x2 >> y2;
  cout << "The distance between those two points is: " << distance(x1, y1, x2, y2) << endl;
}

double distance(double x1, double y1, double x2, double y2) {
  double dis;
  dis = pow((pow((x2 - x1), 2) + pow((y2 - y1), 2)), .5);
  return dis;
}
