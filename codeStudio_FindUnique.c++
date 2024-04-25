#include <iostream>
using namespace std;

//  int main() {
//   int arr[] = {1, 3, 1, 3, 6, 6, 7, 10, 7}, k = 0;

//   for (int i = 0; i < 9; i++) {
//     k = 0;
//     for (int j = i + 1; j < 9; j++) {
//       if (arr[i] == arr[j]) {
//         k = 1;
//         break;
//       } else {
//         k = 0;
//       }
//     }
//     if (k == 0) {
//       // cout<<"19 ";
//       for (int n = i - 1; n >= 0; n--) {
//         if (arr[i] == arr[n]) {
//           k = 1;
//           break;
//         } else {
//           k = 0;
//         }
//       }
//     }

//     if (k == 0) {
//       cout << arr[i] << " " << endl;
//       break;
//     }
//   }
// }



int main(){
  int arr[] = {1, 3, 1, 3, 6, 6, 7, 10, 7}, k = 0;

  for(int i = 0; i< 9; i++){
    k = k ^ arr[i];
  }
  cout<<k<<" ";
}