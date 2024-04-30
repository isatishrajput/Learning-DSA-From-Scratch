// 1910. Remove All Occurrences of a Substring
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "daabcbaabcbc", part = "abc";

  while (s.length() != 0 && s.find(part) <= s.length()) {
    s.erase(s.find(part), part.length());
  }

  cout << s << endl;
}