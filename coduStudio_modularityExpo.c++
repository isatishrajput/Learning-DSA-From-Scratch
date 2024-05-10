// Modular Exponentiation
#include <iostream>
using namespace std;

int modularityExpo(int x, int n, int m) {
  int res = 1;
  while (n > 0) {
    if (n & 1) {
      res = (1LL * res * x ) % m;
    }
    x = (1LL * x * x) % m;

    n = n >> 1;
  }
  return res;
}

int main() {
  int x, n, m;
  cout << endl << "Enter the number ";
  cin >> x;
  cout << endl << "Enter the Exponential power ";
  cin >> n;
  cout << endl << "Enter the modulo value ";
  cin >> m;
  cout << endl;


  int ans = modularityExpo(x, n, m);
  cout << "Modulo of given Value exponent with modularity " << m << " is "
       << ans << endl;
}