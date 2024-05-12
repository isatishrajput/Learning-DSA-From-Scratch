// Dynamic Memory Allocation
#include <iostream>
using namespace std;

int main() {
  int i = 6;
  int *ptr = new int[6];
  while (i) {
    ptr[(6 - i)] = i * 2;
    i--;
  }

  for (int i = 0; i < 6; i++) {
    cout << "The " << i << " value of ptr is " << ptr[i] << endl;
  }

  delete[] ptr;
}