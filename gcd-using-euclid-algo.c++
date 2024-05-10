// Euclid’s Algorithm
//  time complexity O(log min(a, b))
#include <iostream>
using namespace std;

int findGCD(int num1, int num2) {
  int val1, val2;
  if (num1 == 0)
    return num1;

  if (num2 == 0)
    return num2;

  if (num1 > num2) {
    val1 = num1;
    val2 = num2;
  } else {
    val1 = num2;
    val2 = num1;
  }

  while (val2 != 0) {
    int rem = val1 % val2;
    val1 = val2;
    if (rem == 0) {
      return val2;
    }
    val2 = rem;
  }

  // Approach 2 by putting this commented part in while loop
  // time complexity will be O(min(num1,num2))
  // if (num1 > num2) {
  //   num1 = num1 - num2;
  // } else {
  //   num2 = num2 - num1;
  // }
}

int main() {
  int number1, number2;
  cout << "Enter the number1  and number2 ";
  cin >> number1 >> number2;

  int ans = findGCD(number1, number2);

  cout << "The Gratest Common Divisor of " << number1 << " and " << number2
       << " is " << ans;

  return 0;
}