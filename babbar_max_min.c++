#include <iostream>
using namespace std;

int findMaxOfArray(int numArray[], int Size) {
  int maxValue = INT32_MIN;
  for (int i = 0; i < Size; i++) {
    // if (numArray[i] > maxValue) {
    //   maxValue = numArray[i];
    // }
    //  built-in function Approach
    maxValue = max(maxValue, numArray[i]);
  }

  return maxValue;
}

int findMinOfArray(int numArray[], int Size) {
  int minValue = INT32_MAX;
  for (int i = 0; i < Size; i++) {
    // if (numArray[i] < minValue) {
    //     minValue = numArray[i];
    // }
    // built-in function Approach
    minValue = min(minValue, numArray[i]);
  }

  return minValue;
}

int main() {
  int numberArray[100], size;

  cout << "Enter the size of Array ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "Enter the " << i + 1 << " value of array : ";
    cin >> numberArray[i];
  }

  int Max = findMaxOfArray(numberArray, size);
  int Min = findMinOfArray(numberArray, size);

  cout << "The Maximum value we found from findMaxOfArray function is " << Max
       << endl;

  cout << "The Minimum value we found from findMinOfArray function is " << Min
       << endl;
}