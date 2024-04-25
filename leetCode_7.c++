#include <iostream>
using namespace std;

int main() {
  int n, revNumber = 0;
  cout << "Enter the value of n ";
  cin >> n;

  while (n != 0) {
    if (revNumber < (INT32_MIN / 10) || revNumber > (INT32_MAX / 10)) {
      revNumber = 0;
      break;
    }

    revNumber = (revNumber * 10) + (n % 10);
    n = n / 10;
  }

  cout << "The output of reverse number of n is " << revNumber << endl;
}