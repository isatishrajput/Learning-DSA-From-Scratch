#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> rank, int n, int m, int mid) {
  int dishesCount = 0;
  for (int i = 0; i < n; i++) {
    int dish = 0;
    int time = 0;
    while (time + ((dish + 1) * rank[i]) <= mid) {
      time += (dish + 1) * rank[i];
      dish++;
    }
    dishesCount += dish;
    if (dishesCount >= m) {
      return true;
    }
  }

  return false;
}

int main() {
  int n, m;
  vector<int> rank;

  cout << "Enter the number of cooks ";
  cin >> n;
  cout << endl;
  cout << "Enter the number of dishes you want to make ";
  cin >> m;

  for (int i = 0; i < n; i++) {
    int number;
    cout << "Enter the rank of " << (i + 1) << " cook ";
    cin >> number;
    rank.push_back(number);
    cout << endl;
  }

  sort(rank.begin(), rank.end());
  int start = 0;
  int sum = 0;
  for (int i = 0; i < m; i++) {
    sum += (i + 1) * rank[0];
  }

  int end = sum;
  int ans = 0;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (isValid(rank, n, m, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }

  cout << "time is " << ans << endl;
}
