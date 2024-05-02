#include <iostream>
#include <vector>
using namespace std;

int main() {
  // 74. Search a 2D Matrix
  vector<vector<int>> arr = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int target = 34;
  int row = arr.size();
  int col = arr[0].size();

  int start = 0;
  int end = col - 1;
  int mid = start + (end - start) / 2;

  while (start < row && 0 <= end) {

    if (arr[start][end] == target) {
      cout << "find" << endl;
      break;
    }

    if (arr[start][end] < target) {
      start++;
    } else {
      end--;
    }
  }
  cout << "value not found";
}