#include <iostream>
using namespace std;

int main() {
  int n, k, r, l = 0, p = 1;
  cout << "Enter the value of n : ";
  cin >> n;
  // 234
  while (n > 0) {
    k = n % 10;
    l +=k; 
    p *=k;
    r = n / 10;
    n = r;
  }
  cout << "The value of l is " << l << endl;
  cout << "The value of k is " << p << endl;
}