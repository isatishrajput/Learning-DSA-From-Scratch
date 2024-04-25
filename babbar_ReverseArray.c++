#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {

  int end = size - 1;
  for (int i = 0; i <= end; i++) {
    // int temp = arr[end];
    // arr[end] = arr[i];
    // arr[i] = temp;
    // using default functions
    swap(arr[i], arr[end]);
    end--;
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

  reverseArray(arr, size);

  cout << "After Reversing " << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}