// Sqrt with more precision
#include <iostream>
using namespace std;

// returning the sqrt and near to the sqrt of the given number start here;
int findSqrt(int n) {
  int start = 0, ans;
  int end = n;

  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (mid == n / mid) {
      return mid;
    }

    if (mid < n / mid) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
    ans = mid - 1;
  }
  return ans;
}
// returning the sqrt and near to the sqrt of the given number end here;

// finding precise value start here
double precisedSqrt(int floatingPoint, int tempSqrt, int n) {
  double floatingNumber = 1;
  double ans = tempSqrt;

  for (int i = 0; i < floatingPoint; i++) {
    floatingNumber = floatingNumber / 10;
    for (double j = ans; j * j < n;) {
      j = j + floatingNumber;
      ans = j;
    }
  }
  return ans;
}
// finding precise value end here

int main() {
  int n;
  double preciseSqrt;
  cout << "Enter the value of n ";
  cin >> n;
  int tempSqrt = findSqrt(n);
  preciseSqrt =
      (tempSqrt * tempSqrt != n) ? precisedSqrt(1, tempSqrt, n) : tempSqrt;
  cout << "closed sqrt value of " << n << " is " << preciseSqrt << endl;
}