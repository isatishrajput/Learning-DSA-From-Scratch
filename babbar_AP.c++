#include <iostream>
using namespace std;

int findLastTerm(int n) { return ((3 * n) + 7); }

int main() {
  int n, lastTerm;
  cout << "TO find the last term of Ap Enter the value of n ";
  cin >> n;

  lastTerm = findLastTerm(n);

  cout << "The value of last term is " << lastTerm << endl;
}