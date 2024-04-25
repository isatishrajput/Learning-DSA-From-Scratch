//  First and Last Position of an Element In Sorted Array
#include <iostream>
#include <vector>
using namespace std;

int findLastPosition(int arr[], int size, int k) {
  int start = 0, end = size - 1, mid = start + (end - start) / 2;
  int ans = 0;

  while (start <= end) {
    int count = 0;
    if (arr[mid] == k) {
      start = mid + 1;
      ans = mid;
    }

    if (arr[mid] < k) {
      start = mid + 1;
    }

    if (arr[mid] > k) {
      end = mid - 1;
      count = 1;
    }

    mid = start + (end - start) / 2;
  }
  return ans;
}

int findFirstPosition(int arr[], int size, int k) {
  int start = 0, end = size - 1, mid = start + (end - start) / 2;
  int ans = 0;

  while (start <= end) {
    int count = 0;
    if (arr[mid] == k) {
      end = mid - 1;
      ans = mid;
    }

    if (arr[mid] < k) {
      start = mid + 1;
    }

    if (arr[mid] > k) {
      end = mid - 1;
      count = 1;
    }

    mid = start + (end - start) / 2;
  }
  return ans;
}

int main() {
  int arr[] = {0, 0, 1, 1, 2, 2, 2, 2}, k = 2;

  cout << "first position is " << findFirstPosition(arr, 8, k) << endl;
  cout << "first position is " << findLastPosition(arr, 8, k) << endl;
  ;
}