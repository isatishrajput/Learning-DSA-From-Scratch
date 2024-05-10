// Segmented sieve algorithm
// https://www.scaler.com/topics/segmented-sieve/
#include <iostream>
#include <vector>
using namespace std;

void getPrime(vector<int> &prime, int range) {
  vector<int> temp(
      range,
      1); // declaring temp vector to calc all the prime from 0 to max range
  temp[0] = temp[1] =
      0; // initializing 0 and 1 with 0  bcz 0 and 1 is not counts in prime
  int count = 0;

  // calculate prime using simple sieve algorithm
  for (int i = 2; i < range; i++) {
    if (temp[i] == 1) {
      count++;
      //   Assigning all the indexes 0 which are multiple of i
      for (int num = 2 * i; num < range; num += i) {
        temp[num] = 0;
      }
    }
  }
  cout << "Total primes from 0 to " << range << " are " << count << endl;
  // assigning the prime vector with indexes that are prime in temp vector
  for (int i = 0; i < range; i++) {
    if (temp[i] == 1) {
      prime.push_back(i);
    }
  }
}

int main() {
  int lowValue, highValue;
  //   Taking range input from user
  cout << "Find the Prime numbers between the range" << endl;
  cout << "First enter the lower value  then higher value ";
  cin >> lowValue >> highValue;

  cout << endl;
  //   initializing the finalOutput vector with 1, whose size is between the range + 1
  vector<int> finalOutput((highValue - lowValue + 1), 1);
  //   creating vector to store prime from 0 to max range
  vector<int> prime;

  // calling function to store the prime in vector from 0 to max range
  getPrime(prime, highValue);
  //   After this function prime vector has the total number of primes  from 0 highValue

  for (int i : prime) {
    int low = lowValue / i; // finding the low value

    if (low <= 1) { // this cond^n check that your low should not be less than lowValue(which is user input)
      low = i + i;
    } else if (lowValue % i) { // this cond^n checks i is not multiple of lowValue
      low = (low * i) + i;
    } else { // this cond^n checks i is multiple of lowValue and low is greater than 1
      low = low * i;
    }

    // setting all the indexes in finalOutput vector with 0 in which are multiple of prime that we find in previous function getPrime()
    for (int j = low; j <= highValue; j += i) {
      if (finalOutput[j - lowValue] == 1)
        finalOutput[j - lowValue] = 0;
    }
  }

  // This is our final output;
  for (int i = lowValue; i <= highValue; i++) {
    if (finalOutput[i - lowValue] == 1) {
      cout << i << " ";
    }
  }
}