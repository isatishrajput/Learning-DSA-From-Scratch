#include <iostream>
using namespace std;

int factorial(int value) {
  int get = 1;

  if (value <= 0)
    return 1;

  while (value != 0) {
    get = get * value;
    value--;
  }
  cout << "the value of get is " << get << endl;
  return get;
}

int main() {
  int n, r, ans;
  //   ans = pow();
  cout << "To find the NCR give us value of n and r here ";
  cin >> n >> r;

  ans = factorial(n) / (factorial(r) * factorial(n - r));

  cout << "answer is " << ans << endl;
}