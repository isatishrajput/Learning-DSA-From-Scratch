// finding the power of 2 using recursion approach
#include <iostream>
using namespace std;
int powerOf(int n) {
  if (n == 1) {
    return 2;
  }

  if (n <= 0) {
    return 1;
  }
  return (2 * powerOf(n - 1));
}

int main() {
  int n;
  cout << "Enter the power of 2 which you want to calculate => ";
  cin >> n;
  int ans = powerOf(n);
  cout << "Power of 2's power " << n << " is " << ans << endl;
}