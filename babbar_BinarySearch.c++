#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  int start = 0, end = size - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (key == arr[mid]) {
      return mid;
    }

    if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }

  return -1;
}

int main() {
  int arr[] = {3, 9, 11, 14, 19};

  int value = binarySearch(arr, 6, 19);

  cout << "Value present at index " << value;
}