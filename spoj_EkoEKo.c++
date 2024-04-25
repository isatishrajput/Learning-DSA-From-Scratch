// EKO - Eko
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> trees, long long int k, int mid) {
  long long int ans = 0;
  for (int i = 0; i < trees.size(); i++) {
    if ((trees[i] > mid)) {
      ans += trees[i] - mid;
      if (ans >= k) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  long long int n, m;
  cin >> n >> m;
  vector<int> trees;

  for (int i = 0; i < n; i++) {
    int number;
    cin >> number;
    trees.push_back(number);
  }
  sort(trees.begin(), trees.end());
  int start = 0;
  int end = trees[trees.size() - 1];
  int ans = -1;
  int mid = start + (end - start) / 2;

  while (start <= end) {
    if (isValid(trees, m, mid)) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }

  cout << ans;
}