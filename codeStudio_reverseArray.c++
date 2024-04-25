// reverse array
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int var = 2;
  vector<int> arr = {10, 9, 8, 7, 6};

  int start = var + 1;
  int end = arr.size() - 1;

  while (start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
}