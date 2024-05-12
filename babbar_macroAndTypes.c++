#include <bits/stdc++.h>
#include <iostream>

using namespace std;
// macro start
#define PI 3.14 // macros value replaced by PI value
#define circleArea(r) (PI * r * r) // macro function finding circle area
#define rectArea(l, b) (l * b) // macro function finding rect area
#define findMin(a, b) ((a < b) ? (a) : (b))
// Multi-line macro
#define ELE {1, 2, 3 }
// macro end

int main() {
  int key;
  cout << "press 1 for finding area of Circle => " << endl;
  cout << "press 2 for finding area of Rectangle => " << endl;
  cout << "press 3 for for creating array using multi-line macro => " << endl;
  cout << "press 4 to find minimum value between 2 number => " << endl;
  cin >> key;
  switch (key) {
  case 1: {
    int radius;
    cout << "Enter the radius to find the area of circle => ";
    cin >> radius;
    double area = circleArea(radius);
    cout << "Area of circle is " << area << endl;
    break;
  }
  case 2: {
    int length, breadth;
    cout << "Enter the length and breadth => ";
    cin >> length >> breadth;
    double area = rectArea(length, breadth);
    cout << "Area of circle is " << area << endl;
    break;
  }
  case 3: {
    int arr[] = ELE;
    for (int i = 0; i < 3; i++) {
      cout << (i + 1) << " value of multiline macro is " << arr[i] << endl;
    }
    break;
  }
  case 4: {
    int num1, num2;
    cout << "Enter the value of num1 and num2 =>";
    cin >> num1 >> num2;
    int minValue = findMin(num1, num2);
    cout << "Minumum value between num1 and num2 is"
         << ((minValue == num1) ? " num1 which is " : " num2 which is ")
         << minValue << endl;
    break;
  }
  default: {
    cout << "SORRY you have not selected proper key";
    break;
  }
  }
}