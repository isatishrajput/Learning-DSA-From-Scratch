#include <iostream>
#include <vector>
using namespace std;
// Algorithm name -> Sieve of Eratosthenes
// Time complexity n * (log(log n))

int main() {
  int n;
  cout << "Enter the Number from that you've to find prime ";
  cin >> n;
  vector<int> arr(n, 1);
  int count = 0;

  for (int num = 2; num < n; num++) {
    if (arr[num] == 1) {
      count++;
      for (int i = 2 * num; i < n; i += num) {
        arr[i] = 0;
      }
    }
  }
  cout << "Number of primes are " << count << endl;
}

// Alternative but same working
// int main() {
//   int n;
//   cout << "Enter the Number from that you've to find prime ";
//   cin >> n;
//   vector<int> arr(n, 1);

//   for (int num = 2; num * num < n; num++) {
//     if (arr[num] == 1) {
//       for (int i = num * num; i < n; i += num) {
//         arr[i] = 0;
//       }
//     }
//   }
//   int count = 0;
//   for (int i = 2; i < n; i++) {
//     if (arr[i] == 1) {
//       count++;
//     }
//   }
//   cout << "Number of primes are " << count << endl;
// }


// https://www.scaler.com/topics/segmented-sieve/