/*Complete the following tasks

Write the function sum() that receives two parameters; a double type array and an integer type parameter representing the size of the array. The function returns the sum of the elements in the array
Write the function average() that receives two parameters; a double type array and an integer type parameter representing the size of the array. This function calculates the average of the numbers in the array and returns this average. The function average() must make a call to the function sum() in part (a) to obtain the sum of the elements used in calculating the average.
Write a main function that initializes and array of double type using random integers between 1 and 100. You can decide on the size of the array, perhaps a size between 10 to 20 elements. Display the numbers generated then call the function average() to receive the value of the average, which is then printed.
Rewrite the function average in part (b) average2() but make the return type of the function as“void” and use a reference parameter to communicate/return the calculated average to the man() function. ( hint: instead of two parameters the function average2() must have three parameters with some minor adjustments) [no need to make a call to this function, just write it to demonstrate the use of reference parameters.]
*/

#include <iostream>
#include <ctime>
using namespace std;

double sum(double arrayPass[], int size);
double average(double arrayPass[], int size);
void average2(double arrayPass[], int size, int& ave);

double arrayTest[15];

int main() {
  int temp;
  int averageTwo = 0;
  srand(time(0));
  cout << "Now 15 numbers will be generated: ";
  for (int i = 0; i < 15; i++) {
    temp = (rand() % 100 + 1);
    arrayTest[i] = temp;
    cout << temp << " ";
  }
  cout << endl;
  cout << "The sum of those 15 generated numbers is: " << sum(arrayTest, 15) << endl;
  cout << "The average of those 15 generated numbers is: " << average(arrayTest, 15) << endl;
}

double sum(double arrayPass[], int size) {
  double sums = 0;
  for (int i = 0; i < size; i++) {
    sums+=arrayPass[i];
  }
  return sums;
}

double average(double arrayPass[], int size) {
  double sums = sum(arrayPass, 15);
  double average = sums / size;
  return average;
}

void average2(double arrayPass[], int size, int& ave) {
  double sums = sum(arrayPass, 15);
  ave = sums / size;
}
