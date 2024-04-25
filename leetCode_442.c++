#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> store;
  vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
  for (int i = 0; i < arr.size(); i++) {
    int count = 1;
    for (int j = 0; j < arr.size(); j++) {
      if (i != j && arr[i] == arr[j]) {
        store.push_back(arr[i]);

        arr.erase(arr.begin() + i);
        break;
      }
    }
  }
  for (int i = 0; i < store.size(); i++) {
    cout << store[i] << " ";
  }
}