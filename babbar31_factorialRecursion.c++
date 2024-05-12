// Finding Factorial of a number using Recursion
#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 1 || n == 0) {
    return 1;
  } else {
    return (n * factorial(n - 1));//  finding factorial of n-1 and so on till not find the base value
  }
}

int main() {
  int n;
  cout << "To find the factorial of number enter the number => ";
  cin >> n;

  int ans = factorial(n);
  cout << "Factorial value of number " << n << " is " << ans << endl;
}