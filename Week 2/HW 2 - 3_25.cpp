#include <iostream>
#include <math.h>
using namespace std;

int main(){
  double rec1X, rec1Y, rec1Width, rec1Height, rec2X, rec2Y, rec2Width, rec2Height;
  cout << "Enter the centers x and y coordinates and the height and width of rectangle 1: ";
  cin >> rec1X >> rec1Y >> rec1Width >> rec1Height;
  cout << "Enter the centers x and y coordinates and the height and width of rectangle 2: ";
  cin >> rec2X >> rec2Y >> rec2Width >> rec2Height;

  if ((pow(pow(rec2Y - rec1Y, 2), .05) + rec2Height / 2 <= rec1Height / 2) && (pow(pow(rec2X - rec1X, 2), .05) + rec2Width / 2 <= rec1Width / 2) && (rec1Height / 2 + rec2Height / 2 <= rec1Height) && (rec1Width / 2 + rec2Width / 2 <= rec1Width)) {
    cout << "Rec 2 is inside Rec 1" << endl;
  } else if ((rec1X + rec1Width / 2 > rec2X - rec2Width) || (rec1Y + rec1Height / 2 > rec2Y - rec2Height)) {
    cout << "Rec 2 overlaps Rec 1" << endl;
  } else {
    cout << "Rec 2 does not overlap Rec 1" << endl;
  }

  return 0;
}
