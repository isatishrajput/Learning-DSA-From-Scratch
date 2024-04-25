#include <iostream>
using namespace std;

int main() {
  int n, i = 0, base = 1, sum = 0;
  cout << "Enter the value of n ";
  cin >> n;
  int binArray[32];
  while (n > 0) {
    // cout << n % 2 << endl;
    binArray[i] = (n % 2) == 0 ? 1 : 0;
    i++;
    n = n / 2;
  }

  for (int j = 0; j < i; j++) {
    sum += binArray[j] * base;
    base = base * 2;
  }
  cout << sum << endl;
}