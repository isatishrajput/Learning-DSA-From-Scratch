// printing fibonacci series using recursion function
#include <iostream>
using namespace std;
int printFibonacci(int n, int second, int first) {
  // base value
  if (n <= 0) {
    return n;
  }

  printFibonacci(n - 1, first + second, second); // Head Recursion
  cout << first <<" ";
}

int main() {
  int n;
  cout << "Enter the value of n to find fibonacci series ";
  cin >> n;
  int first = 0;
  int second = 1;

  printFibonacci(n, second, first);

}