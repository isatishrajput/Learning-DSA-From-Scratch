// 567. Permutation in String
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  string s1 = "z";
  string s2 = "eidbaooo";

// corner case start
//   if (s1.size() > s2.size()) {
//     cout << "false";
//   }
// corner case end

  vector<int> hash1(26, 0);
  vector<int> hash2(26, 0);

  int l = 0, r = 0;

  while (r < s1.size()) {
    hash1[s1[r] - 'a']++;
    hash2[s2[r] - 'a']++;
    r++;
  }

  r--;

  while (r < s2.size()) {
    if (hash1 == hash2) {
      cout << "True";
      break;
    }
    r++;
    if (r != s2.size()) {
      hash2[s2[r] - 'a']++;
      hash2[s2[l] - 'a']--;
      l++;
    }
  }

  cout << "False";
}