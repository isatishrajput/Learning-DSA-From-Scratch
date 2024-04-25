#include <iostream>
using namespace std;

int findSum(int arr[], int Size) {
  int initialValue = 0;
  for (int i = 0; i < Size; i++) {
    initialValue = initialValue + arr[i];
  }

  return initialValue;
}

int main() {
  int arr[1000], size;

  cout << "Enter the Size of Array ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "Enter the " << i + 1 << " element of array : ";
    cin >> arr[i];
  }

  int sum = findSum(arr, size);

  cout << "Sum of all element in array is " << sum << endl;
}