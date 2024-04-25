#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> arr1 = {2};
  vector<int> arr2 = {1,2};
  vector<int> matchedArray;

  cout << endl << "Arr1" << endl;
  for (int i = 0; i < (arr1.size()); i++) {
    cout << arr1[i] << " ";
  }

  cout << endl << "Arr2" << endl;
  for (int i = 0; i < (arr2.size()); i++) {
    cout << arr2[i] << " ";
  }
 

  for (int i = 0; i < (arr1.size()); i++) {
    for (int j = 0; j < (arr2.size()); j++) {

      if (arr1[i] == arr2[j]) {
        matchedArray.push_back(arr1[i]);
        // cout << i << " " << j << " pair found " << arr1[i] << " " << arr2[j]
        //      << endl;
        arr1.erase(arr1.begin() + i);
        arr2.erase(arr2.begin() + j);
        i--;
        break;
      }
    }
  }

  cout << endl << "intersection" << endl;
  if(matchedArray.size() == 0){
      cout<<"Sorry No intersection Found";
  }
  for (int i = 0; i < (matchedArray.size()); i++) {
    cout << matchedArray[i] << " ";
  }

  // for (int i = 0; i < (arr1.size()); i++) {
  //   cout << arr1[i] << " ";
  // }

  // cout << endl << "Arr2" << endl;
  // for (int i = 0; i < (arr2.size()); i++) {
  //   cout << arr2[i] << " ";
  // }
}