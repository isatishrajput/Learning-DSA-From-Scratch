#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  string str = "testsample";

  int map[26] = {0};

  for (int i = 0; i < str.length(); i++) {
    map[str[i] - 'a']++;
  }

  int freq = 0;
  char ans;
  for (int i = 0; i < 26; i++) {
    if (freq < map[i]) {
      freq = map[i];
      ans = i + 'a';
    }
  }

  cout << "ans is " << ans;
}