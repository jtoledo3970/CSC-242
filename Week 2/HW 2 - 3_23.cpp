#include <iostream>
using namespace std;

int main() {
  double x, y;
  cout << "Enter a point with x and y coordinates: ";
  cin >> x >> y;
  double intersectX, intersectY;
  intersectX = (-x * (200 * 100)) / (-y * 200 - x * 100);
  intersectY = (-y * (200 * 100)) / (-y * 200 - x * 100);
  if (x > intersectX || y > intersectY) {
    cout << "The points are not in the triangle" << endl;
  } else {
    cout << "The points are in the triangle" << endl;
  }
}
