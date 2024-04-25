#include <iostream>
using namespace std;

void reverseAlternate(int arr[], int size) {

  int start = 0, end = size - (size - 1);

  while (end < size) {
    swap(arr[start], arr[end]);
    start = start + 2;
    end = end + 2;
  }
}

int main() {
  int arr[1000], size;
  cout << "Enter the size of Array ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "Enter the " << i + 1 << " element of array : ";
    cin >> arr[i];
  }

  cout << "Before Reversing " << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  reverseAlternate(arr, size);

  cout << "After Reversing " << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}