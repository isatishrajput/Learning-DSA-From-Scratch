// Rotated Array
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr) {
  int var = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (i > 0) {
      int temp = var;
      var = arr[i + 1];
      arr[i + 1] = temp;
    } else {
      var = arr[i + 1];
      arr[i + 1] = arr[i];
      arr[i] = arr[arr.size() - 1];
    }
  }
}

int main() {
  vector<int> arr = {-1, -100, 3, 99};

  int mid = 2;
  while (mid) {
    rotate(arr);
    mid--;
  }

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
}

// Another method is
// void rotate(vector<int> &nums, int k) {
//   int n = nums.size();
//   vector<int> temp(n);
//   for (int i = 0; i < n; i++) {
//     temp[(i + k) % n] = nums[i];
//   }

//   nums = temp;
// }
