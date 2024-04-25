// MOVE ZEROS
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {0, 1, 0, 3, 12};

  int k = 0, i = 0;
  int size = nums.size();
  vector<int> arr;
  int counter = 0;

  while (i < nums.size()) {
    if (nums[i] != 0) {
      nums[k++] = nums[i];
      counter++;
    } else {
      arr.push_back(nums[i]);
    }
    i++;
  }
  k = 0;
  for (int i = counter ; i < size; i++) {
    nums[i] = arr[k++];
  }

  for (int i = 0; i < 5; i++) {
    cout << nums[i] << " ";
  }
}