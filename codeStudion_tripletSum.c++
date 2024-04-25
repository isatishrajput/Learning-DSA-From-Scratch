#include <bits/stdc++.h>
// #include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {2, -95, 9, 1, -79, 88, 96, 0, 5};
  vector<vector<int>> pairVal;

  // sort(arr.begin(), arr.end());

  int i = 0, flag = 0;

  while (i < arr.size()) {
    flag = 0;
    for (int j = i + 1; j < arr.size(); j++) {
      for (int k = j + 1; k < arr.size(); k++) {
        int sum = arr[i] + arr[j] + arr[k];
        if (sum == 10) {
          cout << arr[i] << " " << arr[j] << " " << arr[k];
          flag = 1;
          break;
        }
      }
      if (flag == 1) {
        break;
      }
    }
    if (flag == 1) {
      break;
    }
    i++;
  }
  // return pairVal;
}