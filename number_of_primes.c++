#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  // fibonacci series
  // int sum = 0, a = 0, b= 1, n;
  // cout<<"Enter the value of n ";
  // cin>>n;
  // cout<<a<<" "<<b<<" ";
  // for(int i=1;i<=n;i++){
  //     sum = a + b;
  //     a = b;
  //     b = sum;
  //     cout<<sum<<" ";

  // number is prime or not

  // TotaL number of prime numbers between 1 to user defined numbers
  int n, count = 0;
  int num = 1;
  cout << "Enter the value of n ";
  cin >> n;

  bool prime[n + 1];
  memset(prime, true, sizeof(prime));

  for (int num = 2; num * num < n; num++) {
    if (prime[num] == true) {

      for (int i = num * num; i < n; i += num) {
        prime[i] = false;
      }
    }
  }

    for (int i = 2; i < n; i++) {
      if (prime[i]) {
        count++;
      }
    }
  cout << "number of prime in 1 to " << n << " are " << count;
}