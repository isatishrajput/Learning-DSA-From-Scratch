// printing number in reverse order using recursion
#include <iostream>
using namespace std;

void printingNumberReversely(int n) {
  if (n == 0) {
    return;
  }

  // currently this recursion is head recursion
  // but when we take the recursive relation at last
  // of the recursion function it will become tail recursion

  printingNumberReversely(n - 1); // recursive relation
  // this cout will holds to print the value till it find the base value
  cout << n << " ";
}

int main() {
  int n;
  cout << "Enter the number ";
  cin >> n;

  printingNumberReversely(n);
}