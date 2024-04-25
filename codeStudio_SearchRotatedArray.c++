//  Search In Rotated Sorted Array
#include <iostream>
using namespace std;

int findPivot(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;

  while (start < end) {
    if (arr[mid] >= arr[0]) {
      start = mid + 1;
    } else {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return start;
}

int binarySearch(int arr[], int start, int end, int key) {
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
  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 12, 2}, k = 7;
  int size = 10;
  int pivot = findPivot(arr, size);

  if (k >= arr[pivot] && k <= arr[size-1]) {
    cout << "found " << binarySearch(arr, pivot, size-1, k);
  } else {
    cout << "found in " << binarySearch(arr, 0, pivot, k);
  }
}
