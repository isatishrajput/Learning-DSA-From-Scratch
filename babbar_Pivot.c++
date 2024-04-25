// Pivot element in an array
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

int main() {
  int arr[] = {3, 8, 1, 10, 17};

  int value = findPivot(arr, 5);
  cout << "Pivot Element index of given array is " << value << endl;
}