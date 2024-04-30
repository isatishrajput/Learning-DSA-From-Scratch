// Check Palindrome String
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "c1 O$d@eeD o1c";
  cout << "value is s is " << s << endl;
  string newS;
  int end = s.size();
  int start = 0;
  int key = 1;
  int counter = 0;

  while (start < end) {
    if (isalnum(s[start])) {
      counter++;
      cout << "s[start]-> " << s[start] << endl;
      newS.push_back(tolower(s[start]));
    }
    start++;
  }

  start = 0;
  end = counter - 1;
  while (start < end) {

    if (newS[start] != newS[end]) {
      key = 0;
      break;
    }
    start++;
    end--;
  }
  if (key == 0) {
    cout << "is not palindrome";
  } else {
    cout << "is palindrome";
  }
}
