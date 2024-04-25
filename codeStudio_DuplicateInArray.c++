#include <iostream>
#include <vector>
using namespace std;

int main() {
//   vector<int> arr = {1,2,3,4,4};
  vector<int> arr = {6, 3, 1, 5, 4, 3, 2};
//   int count;
//   for (int i = 0; i < arr.size(); i++) {
//     int count = 1;
//     for (int j = i; j < arr.size(); j++) {
//       if (i != j && arr[i] == arr[j]) {
//         count++;
//       }
//     }
//     if (count > 1) {
//       cout << arr[i];
//     }
//   }
    int start = 0, end = arr.size()-1;

    while(start<=end){
        cout<<start<<" "<<end<<endl;
        if(start == end && end == (arr.size()/2)){
            // cout<<" "<<end;
            end = arr.size()-1;
        }
        if(arr[start] == arr[end]){
            cout<<arr[start];
        }
        start++;
        end--;
    }
  // cout<<count<<" "<<endl;
}