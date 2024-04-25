// 1752. Check if Array Is Sorted and Rotated
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {3, 4, 5, 6, 1, 2, 7};
  int n = arr.size();
  int count = 0;

  for (int i = 1; i < n; i++) {
    if (arr[i - 1] > arr[i]) {
      count++;
    }
  }

  if (arr[n - 1] > arr[0]) {
    count++;
  }

  if (count <= 1) {
    cout << "True";
  } else {
    cout << "False";
  }
}
