#include <iostream>
using namespace std;

int main() {
  int row;
  cout << "Enter the number of rows => ";
  cin >> row;
  int *ptr = new int[row];

  for (int i = 0; i < row; i++) {
    cout << "Enter the number of cols required in " << (i + 1) << " row => ";
    cin >> ptr[i];
  }

  // creating 2D Array start
  int **arr = new int *[row];
  for (int i = 0; i < row; i++) {
    arr[i] = new int[ptr[i]];
  }

  // Taking input of 2D Array from user start
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < ptr[i]; j++) {
      cout << "Enter the value of position ptr[" << (i + 1) << "][" << (j + 1)
           << "] is ";
      cin >> arr[i][j];
    }
  }
  // Taking input of 2D Array from user end

  // Printing the value of dynamic 2D array start
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < ptr[i]; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  // Printing the value of dynamic 2D array end

  // releasing memory of 2D array start
  // releasing memory of array pointed by each row (means col)
  for (int i = 0; i < row; i++) {
    delete[] arr[i];
  }

  // releasing memory of row array
  delete[] arr;
  // releasing memory of 2D array end
}