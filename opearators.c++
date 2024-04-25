#include <iostream>
using namespace std;

int main() {

  int a = 2, b = 6;
  cout << "output of 2 & 6 is " << (a & b) << endl;
  cout << "output of 2 | 6 is " << (a | b) << endl;
  cout << "output of ~ 2  is " << (~a) << endl;
  cout << "output of 2 ^ 6 is " << (a ^ b) << endl;

  cout << "output of 17 >> 1 (17 right shift by 1) is " << (17 >> 1) << endl;
  cout << "output of 17 >> 2 (17 right shift by 2) is " << (17 >> 2) << endl;

  cout << "output of 19 << 1 (19 left shift by 1) is " << (19 << 1) << endl;
  cout << "output of 21 << 2 (21 left shift by 2) is " << (21 << 2) << endl;
}