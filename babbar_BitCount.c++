#include <iostream>
using namespace std;

int getBitSet(int value) {
  int bit = 0;
  if (value == 0)
    return 0;
  while (value != 0) {
    if (value & 1) {
      bit++;
    }
    value = value >> 1;
  }
  cout << "bit " << bit << endl;
  return bit;
}

int main() {
  int a, b, ans = 0;
  cout << "Enter the value of a and b ";
  cin >> a >> b;

  ans = getBitSet(a);

  ans = ans + getBitSet(b);

  cout << "Total number of bitset in a and b are " << ans << endl;
}