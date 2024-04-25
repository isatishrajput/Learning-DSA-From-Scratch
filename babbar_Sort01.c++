#include <cmath>
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void sort01(int arr[], int size) {
  int start = 0, end = size - 1, k = size - 1, step = 0;

  while (start < end) {

    if (arr[start] == 0) {
      start++;
    }

    if (arr[end] == 1) {
      end--;
    }

    if (arr[start] == 1 && arr[end] == 0) {
      swap(arr[start], arr[end]);
      start++;
      end--;
    }
  }
}

int main() {
  int arr[] = {0, 1, 1, 1, 0, 0, 1, 0, 1};

  sort01(arr, 9);
  cout << endl << "Array in main function " << endl;
  printArray(arr, 9);
}