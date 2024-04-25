#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {5, 6, 8, 2};
  sort(arr.begin(), arr.end());
  int diff = arr[arr.size() - 1] - arr[0];

  cout << "diff is " << diff << endl;

  (diff % 2 == 0) ? cout << "EVEN" << endl : cout << "ODD" << endl;
}