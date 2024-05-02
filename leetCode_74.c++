// 74. Search a 2D Matrix
#include <iostream>
#include <vector>
using namespace std;

// solving it in O(n*logn) using binary search

int main() {
  vector<vector<int>> arr = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int target = 43;
  int row = arr.size();
  int col = arr[0].size();

  int start = 0;
  int end = row * col - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {

    int element = arr[mid / col][mid % col];

    if (element == target) {
      cout << arr[mid / col][mid % col];
      cout << "value is present" << endl;
      break;
    }
    if (element < target) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }

  cout << "value is not present ";
}