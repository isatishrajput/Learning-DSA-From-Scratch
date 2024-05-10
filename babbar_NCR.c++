#include <iostream>
using namespace std;

long long int factorial(int value) {
  long long int get = 1;
  const unsigned int mod = 1000000007;

  if (value <= 0)
    return 1;

  while (value != 0) {
    cout << "went inside => " << value << " times"
         << " get is " << get << endl;
    get = (get * value);
    value--;
  }
  cout << "the value of get is " << get << endl;
  return get;
}

int main() {
  long long int n, r, ans;
  const unsigned int mod = 1000000007;
  
  cout << "To find the NCR give us value of n and r here ";
  cin >> n >> r;

  ans = (factorial(n) / (factorial(r) * factorial(n - r))) % mod;

  cout << "answer is " << ans << endl;
}