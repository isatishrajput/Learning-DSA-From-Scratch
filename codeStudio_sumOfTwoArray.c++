// Sum Of Two Arrays
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, 4};
  vector<int> arr1 = {6};
  vector<int> arr2;

  int num = 0;
  int num1 = 0;
  for (int i = 0; i < arr.size(); i++) {
    num = num * 10 + arr[i];
  }

  for (int i = 0; i < arr1.size(); i++) {
    num1 = num1 * 10 + arr1[i];
  }

  int ans = num + num1;
//   cout << "ans is " << ans;
  while (ans) {
    int temp = ans % 10;
    arr2.push_back(temp);
    ans = ans / 10;
  }

  reverse(arr2.begin(), arr2.end());

  for (int i = 0; i < arr2.size(); i++) {
    cout << arr2[i] << " ";
  }
}