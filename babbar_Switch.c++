#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the value of n ";
  cin >> n;

  switch (1) {
  case 1:
    cout << "Total Hundred rupees notes are required " << (n / 100) << endl;
    n = n % 100;
  case 2:
    cout << "Total Twenty rupees notes are required " << n / 20 << endl;
    n = n % 20;
  case 3:
    cout << "Total Ten rupees notes are required " << n / 10 << endl;
    n = n % 10;
  case 4:
    cout << "Total Five rupees notes are required " << n / 5 << endl;
    n = n % 5;
  case 5:
    cout << "Total Two rupees notes are required " << n / 2 << endl;
    n = n % 2;
  case 6:
    cout << "Total One rupees notes are required " << n / 1 << endl;
  }
}