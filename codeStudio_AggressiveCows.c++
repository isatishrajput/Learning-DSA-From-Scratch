#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

bool isDistanceValid(vector<int> stall, int n, int mid, int m) {
  int cowCount = 1;
  int cowPlacedPosition = stall[0];
  for (int i = 0; i < n; i++) {
    if (stall[i] - cowPlacedPosition >= mid) {
      cowCount++;
      if (cowCount == m) {
        return true;
      }
      cowPlacedPosition = stall[i];
    }
  }
  return false;
}

int main() {
  int n, m;
  vector<int> stall;

  cout << "Enter the number of stalls ";
  cin >> n;
  cout << endl;
  cout << "Enter the number of cows ";
  cin >> m;

  for (int i = 0; i < n; i++) {
    int number;
    cout << "Enter the time estimation for chapter " << (i + 1) << " ";
    cin >> number;
    stall.push_back(number);
    cout << endl;
  }

  sort(stall.begin(), stall.end());

  long long start = 0;
  int ans = -1;

  long long end = stall[n - 1];
  long long mid = start + (end - start) / 2;

  while (start <= end) {
    if (isDistanceValid(stall, n, mid, m)) {
      start = mid + 1;
      ans = mid;

    } else {
      end = mid - 1;

    }

    mid = start + (end - start) / 2;
  }

    cout << "The minimum largest distance is " << ans << endl;
}

// Aggressive Cows
// n -> size of the vector array or positions of the stall
// m -> number of Aggressive Cows