// Reverse words in a given string

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<char> s = {'i', ' ', 'l', 'o', 'v', 'e', ' ', 'p', 'r', 'o',
                    'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g', ' ', 'v',
                    'e', 'r', 'y', ' ', 'm', 'u', 'c', 'h'};
  string temp1;
  vector<char> v;
  int start = 0;
  int end = 0;

  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == ' ') {
      reverse(temp1.begin(), temp1.end());
        for (int j = 0; j < temp1.length(); j++) {
          v.push_back(temp1[j]);
        }
      v.push_back(' ');
      temp1 = {};
    }
    if (s[i] != ' ') {
      temp1.push_back(s[i]);
    }

    if (i == 0) {
      reverse(temp1.begin(), temp1.end());
      for (int j = 0; j < temp1.length(); j++) {
        v.push_back(temp1[j]);
      }
      v.push_back(' ');
      temp1 = {};
    }
  }

  cout << "size is " << v.size() << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
  }
  //   cout << endl;
}
