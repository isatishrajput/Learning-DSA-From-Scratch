// 1047. Remove All Adjacent Duplicates In String
#include <iostream>
using namespace std;
int main() {
  string s = "azxxzy";
  int i = 0;
  int counter = 0;
  while (s.length() != 0 && i < s.length()) {
    counter++;
    if (s[i] == s[i + 1]) {
      s.erase(i, 2);
      i -= 1;
    } else {
      i++;
    }
  }

  cout << "counter is " << counter << " " << s << endl;
}