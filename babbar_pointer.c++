#include <iostream>
using namespace std;

// int main() {
//   int num = 5;
//   int *p = &num;

//   cout << "value of num =>" << *p << endl;
//   cout << "address of num =>" << p << endl;

// }

// int main() {
//   int firstValue = 5, secondValue = 15;
//   char thirdValue = 'a';
//   int *p1, *p2;
//   char *p3;
//   p1 = &firstValue;  // p1 = address of firstValue
//   p2 = &secondValue; // p2 = address of secondValue
//   p3 = &thirdValue;  // p3 = address of thirdValue
//   *p1 = 10;          // value pointed to by p1 = 10
//   *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
//   p1 = p2;           // p1 = p2 (value of pointer is copied)
//   *p1 = 20;          // value pointed to by p1 = 20
//   *p3 = 'b';         // value pointed to by p3 = ‘b ’

// //   int *ptr = 0;
// //   int a = 10;
// //   *ptr = a;
// //     cout << "value of ptr is " << ptr << endl; no output Error

//   cout << "firstValue is " << firstValue << endl;
//   cout << "secondValue is " << secondValue << endl;
//   cout << "thirdValue is " << thirdValue << endl;
//   return 0;
// }
// void fun(int a[]) { cout << a[0] << " "; }

int main() {
  int a = 10;
  int *p = &a;
  int **q = &p;
  int b = 20;
  *q = &b;
  (*p)++;
  cout << a << " " << b << endl;
  return 0;
}