#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n, revBinArray[32] = {1}, binArray[32] = {1}, i = 0;
  cout << "Enter the value of n ";
  cin >> n;
  n = abs(n);

  std::fill(revBinArray, revBinArray + 32, 1);
  for (int i = 4; i >= 0; i--) {
    cout << revBinArray[i];
  }
  cout << endl;

  while (n > 0) {
    revBinArray[i] = n % 2 == 0 ? 1 : 0;
    i++;
    n = n >> 1;
  }

  for (int j = 31; j >= 0; j--) {
    // cout << "revBinArray " << revBinArray[j] << endl;
    cout << revBinArray[j];
  }
}