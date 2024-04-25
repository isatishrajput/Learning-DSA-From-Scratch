#include <iostream>
using namespace std;

void findFibonacci(int n) {
  int a = 0, b = 1, sum = 0;
  cout << a << " " << b << " ";
  while (n) {
    sum = a + b;
    a = b;
    b = sum;
    cout << sum<<" ";
    n--;
  }
}

int main() {
  int n;
  cout << "Enter the value of n ";
  cin >> n;

  findFibonacci(n);
}