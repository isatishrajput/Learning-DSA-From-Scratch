// suppose we have 5 students in which 2 are reading maths 2 are reading science
// and 1 student reading both maths and science, now if we've to find the all
// the students which are reading unique subjects we will use inclusion
// exclusion algorithm in which 4 students are reading unique subjects but one
// student is reading both subject so we've have to exclude that student this is
// the whole concept of inclusion exclusion theorem

// let see one example in which we've to find all the number that are divisible
// by 5 and 7 in 40
//==> solution is that we will add all the numbers that are divisible by 5 and 7
// in
// 40 but will exclude all the numbers that are divisible by multiple of 5 and 7
// because it will appears multiple times

#include <iostream>
using namespace std;

int findDivisors(int dividend, int divisor1, int divisor2) {
  int firstDivisor = dividend / divisor1;

  int secondDivisor = dividend / divisor2;

  int commonDivisor = dividend / (divisor1 * divisor2);

  return (firstDivisor + secondDivisor - commonDivisor);
}

int main() {
  int dividend, divisor1, divisor2;
  cout << "Enter the value of n, a and b where n is dividend and a and b is "
          "divisor: ";
  cin >> dividend >> divisor1 >> divisor2;

  int ans = findDivisors(dividend, divisor1, divisor2);

  cout << "Total divisor of " << divisor1 << " and " << divisor2
       << " in dividend " << dividend << " are " << ans << endl;
}