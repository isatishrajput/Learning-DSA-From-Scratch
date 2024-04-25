#include <cmath>
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void sort01(int arr[], int size) {

  int start = 0, mid = 0, end = size - 1;

  while (mid <= end) {
    if (arr[mid] == 0) {
      swap(arr[start], arr[mid]);
      start++;
      mid++;
    } else if (arr[mid] == 1) {
      mid++;
    } else {
      swap(arr[mid], arr[end]);
      end--;
    }
  }
}

int main() {
  int arr[] = {0, 1, 2, 1, 2, 1, 2};

  sort01(arr, 7);
  cout << endl << "Array in main function " << endl;
  printArray(arr, 7);
}