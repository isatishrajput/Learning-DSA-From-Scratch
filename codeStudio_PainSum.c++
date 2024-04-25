#include <bits/stdc++.h>
// #include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// int main() {
//   vector<int> arr = {2, -3, 3, 3, -2};
//   vector<std::pair<int, int>> pairVal;

//   sort(arr.begin(), arr.end());

//   for (int i = 0; i < arr.size(); i++) {
//     for (int j = i + 1; j < arr.size(); j++) {
//       if (arr[i] + arr[j] == 0) {
//         pairVal.push_back(make_pair(arr[i], arr[j]));
//       }
//     }
//   }

//   for (int i = 0; i < pairVal.size(); i++) {
//     cout << pairVal[i].first << " " << pairVal[i].second << endl;
//   }
// }

// Approach 2
int main() {
  vector<int> arr = {2, -3, 3, 3, -2};
  vector<vector<int>> pairVal;

  sort(arr.begin(), arr.end());

  for (int i = 0; i < arr.size(); i++) {
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[i] + arr[j] == 0) {
        vector<int> temp;

        temp.push_back(arr[i]);

        temp.push_back(arr[j]);

        pairVal.push_back(temp);
      }
    }
  }

  for (int i = 0; i < pairVal.size(); i++) {
    for (int j = 0; j < pairVal[i].size(); j++) {
      cout << pairVal[i][j] << " ";
    }
    cout << endl;
  }
}