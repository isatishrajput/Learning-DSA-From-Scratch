#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
  vector<int> store;

  for (int i = 0; i < arr.size(); i++) {
    int k = 1, flag = 0;
    for (int n = i - 1; n >= 0; n--) {
      if (arr[n] == arr[i]) {
        flag = 1;
      }
    }

    if (flag == 0) {
      for (int j = i; j < arr.size(); j++) {
        if (i != j && arr[i] == arr[j]) {
          k++;
        }
      }
      store.push_back(k);
    }
  }

  for (int i = 0; i < store.size(); i++) {
    cout << store[i] << " ";
  }
}