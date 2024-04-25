#include <iostream>
using namespace std;

int main() {
  int n, bit = 0;
  cout << "Enter the value of n ";
  cin >> n;

  while (n > 0) {
    if (n & 1) {
      bit++;
    }

    n = n >> 1;
  }

  if (bit == 1) {
    cout << "Given value is power of 2" << endl;
  } else {
    cout << "Given value is not the power of 2" << endl;
  }
}