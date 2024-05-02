#include <iostream>
using namespace std;

void findingEachRowSum(int arr[][3], int i, int j) {
  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
      cout << arr[i][j] << " ";
      sum += arr[i][j];
    }
    cout << " => sum of " << i + 1 << " row is " << sum;
    cout << endl;
  }
}

void findingLargestSumRow(int arr[][3], int i, int j) {
  int count = 0;
  int index = 0;
  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
      sum += arr[i][j];
    }
    index = (count < sum) ? (i + 1) : index;
    count = (count < sum) ? sum : count;
  }

  cout << "Row " << index << " has highest count " << count;
}

int main() {
  int arr[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }

  // Finding row wise sum
  findingEachRowSum(arr, 3, 3);

  // Finding the row which has the largest sum in 2D array;
  findingLargestSumRow(arr, 3, 3);
}