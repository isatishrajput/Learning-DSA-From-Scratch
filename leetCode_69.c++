#include <iostream>
using namespace std;

int main() {
  int n, start = 0, ans;
  cout << "Enter the value of n ";
  cin >> n;
  int end = n;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (mid == n / mid) {
      ans = mid;
      break;
    }

    if (mid < n / mid) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
    ans = mid - 1;
  }

  cout << "closed sqrt value of " << n << " is " << ans << endl;
}