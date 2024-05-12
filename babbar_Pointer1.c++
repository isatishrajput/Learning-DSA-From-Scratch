#include <iostream>
using namespace std;

int main() {
  int arr[10] = {10, 27, 25, 29, 32};

  cout << "value of only arr which is point to 0th index of array is " << arr
       << endl;
  cout << "value of arr[0] =>" << arr[0] << endl;
  cout << "value of *arr =>" << *arr << endl;
  cout << "value of &arr[0] =>" << &arr[0] << endl;
  cout << "value of *(arr + 1) =>" << *(arr + 1) << endl; // arr[i] = *(arr + i)
  cout << "value of *(arr + 3) =>" << *(arr + 3) << endl;
  cout << "value of *arr + 1 =>" << *arr + 1 << endl;
  cout << "value of *(arr) + 1 =>" << *(arr) + 1 << endl;

  // NOTE:- arr[i] = *(arr + i)
  //            &&
  // i[arr] =  *(i + arr)
  //            or
  // i[arr] =  *(arr + i)
  // proof below
  int i = 3;
  int x = arr[i];
  int x1 = *(arr + i);
  cout << "The value of x and x1 are same " << bool(x == x1) << " where x is "
       << x << " and x1 is " << x1 << endl;
  int y = i[arr];
  int y1 = *(arr + i);
  cout << "The value of y and y1 are same " << bool(y == y1) << " where y is "
       << y << " and y1 is " << y1 << endl;
}