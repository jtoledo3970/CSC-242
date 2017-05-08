#include <iostream>
#include <string>
using namespace std;

int count(const string& s, char a);

int main() {
  string s;
  char a;
  cout << "Enter a string: ";
  getline(cin, s);

  cout << "Enter a character: ";
  cin >> a;
  cout << a << " appears in " << s << " " << count(s, a) << " times" << endl;
  return 0;
}

int count(const string& s, char a) {
  int counter = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == a) counter++;
  }
  return counter;
}
