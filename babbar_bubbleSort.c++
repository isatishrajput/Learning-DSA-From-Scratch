#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int arr[] = {1, 5, 7, 9, 12, 35};
  int n = 6; // size of aaray
  bool swapped = false;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (swapped == false) {
      break; // when it found no swap means array is sorted it will break loop
    }
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}