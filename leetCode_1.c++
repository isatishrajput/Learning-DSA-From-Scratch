#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {3,2,4};
  int sum = 6, total = 0, k = 0;
  vector<int> matchedIndex;

  for (int i = 0; i < arr.size(); i++) {
    for (int j = 1; j < arr.size(); j++) {
      total = arr[i] + arr[j];
      if (total == sum) {
        cout << "matched" << endl;
        cout << i << " " << j;
        matchedIndex.push_back(i);
        matchedIndex.push_back(j);
        k++;
        break;
      }
    }
    if (k >= 1) {
      break;
    }
  }

  cout << endl;
  for (int i = 0; i < matchedIndex.size(); i++) {
    cout << matchedIndex[i] << " ";
  }
}