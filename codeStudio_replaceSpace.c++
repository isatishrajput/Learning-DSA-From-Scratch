//  Replace Spaces
#include <iostream>
#include <vector>
using namespace std;

int main() {
  string str = "Coding Ninjas Is A Coding Platform";
  string s= "";
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ' ') {
      s += "@";
      s += "4";
      s += "0";
    } else {
      s += str[i];
    }
  }

  cout << s << endl;
}