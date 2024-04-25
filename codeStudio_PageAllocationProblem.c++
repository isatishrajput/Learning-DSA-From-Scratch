//  Allocate Books babbar lec 15 Description
// n -> number of days
// m -> number of chapters
#include <iostream>
#include <vector>
using namespace std;

bool isAllocationValid(int n, int m, vector<int> time, long long mid) {
  int daysCount = 1;
  long long timeAllocation = 0;

  for (int i = 0; i < m; i++) {
    if (timeAllocation + time[i] <= mid) {
      timeAllocation = timeAllocation + time[i];
    } else {
      daysCount++;
      if (daysCount > n || time[i] > mid) {
        return false;
      }
      timeAllocation = time[i];
    }
  }
}

int main() {
  int n, m;
  cout << "Enter the number of days ";
  cin >> n;
  cout << endl;
  cout << "Enter the number of chapters ";
  cin >> m;
  vector<int> time ;

  for (int i = 0; i < m; i++) {
    int number;
    cout << "Enter the time estimation for chapter " << (i + 1)<<" ";
    cin >> number;
    time.push_back(number);
    cout << endl;
    // cout<<"kjbkjdg";
  }

  long long start = 0;
  long long ans = -1;
  long long sum = 0;
  for (int i = 0; i < m; i++) {
    sum = sum + time[i];
  }

  long long end = sum;
  long long mid = start + (end - start) / 2;

  while (start <= end) {
    if (isAllocationValid(n, m, time, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }

  cout << "Maximum time he and she has to study to cover the syllabus is "
       << ans << endl;
}