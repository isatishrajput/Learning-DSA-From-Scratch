// 852. Peak Index in a Mountain Array
#include <iostream>
#include <vector>
using namespace std;

int findPeak(int arr[], int size) {
  int s = 0, e = size - 1, mid = s + (e - s) / 2, peak = 0;

  while (s <= e) {
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
      cout<<arr[mid]<<endl;
      break;
    }

    if (arr[mid] < arr[mid - 1]) {
      e = mid;
    }

    if (arr[mid] < arr[mid + 1]) {
      s = mid + 1;
    }

    mid = s + (e - s) / 2;
  }
}

int main() {
  int arr[] = {3, 5, 3, 2, 0};
  findPeak(arr, 5);
}