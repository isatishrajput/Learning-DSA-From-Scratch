// merge two nums1ay
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums1 = {-1, 0, 0, 3, 3, 3, 0, 0, 0};
  vector<int> nums2 = {1, 2, 2};
  vector<int> newVector;

  int n = nums1.size() + nums2.size();

  for (int i = 0; i < nums1.size(); i++) {
    if (nums1[i] != 0) {
      newVector.push_back(nums1[i]);
    }
  }

  for (int i = 0; i < nums2.size(); i++) {
    if (nums2[i] != 0) {
      newVector.push_back(nums2[i]);
    }
  }

  int last = newVector.size();
  int stat = 0;
  cout << nums1.size() << endl;

  for (int i = 0; i < nums1.size(); i++) {
    if (i >= last) {
      nums1[i] = stat;
    } else {
      nums1[i] = newVector[i];
    }
  }

  sort(nums1.begin(), nums1.end());

  for (int i = 0; i < nums1.size(); i++) {
    cout << nums1[i] << " ";
  }
}