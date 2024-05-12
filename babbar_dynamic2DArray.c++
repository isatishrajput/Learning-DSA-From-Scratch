// creating 2d array dynamically
#include <iostream>
using namespace std;

int main() {
  int row, col;
  cout << "Enter the number of row in array you've required => ";
  cin >> row;

  cout << "Enter the number of col in array you've required => ";
  cin >> col;

  // creating 2D array start
  // allocating number of rows of 2D array dynamically in Heap Memory
  int **ptr = new int *[row];

  // assigning the number of col. on each row of 2D Array
  for (int i = 0; i < row; i++) {
    ptr[i] = new int[col];
  }
  // creating 2D array end

  // Taking input of 2D Array from user start
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << "Enter the value of position ptr[" << (i + 1) << "][" << (j + 1)
           << "] is ";
      cin >> ptr[i][j];
    }
  }
  // Taking input of 2D Array from user end

  // Printing the value of dynamic 2D array start
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << ptr[i][j] << " ";
    }
    cout << endl;
  }
  // Printing the value of dynamic 2D array end

  // releasing memory of 2D array start
  // releasing memory of array pointed by each row (means col)
  for (int i = 0; i < row; i++) {
    delete[] ptr[i];
  }

  // releasing memory of row array
  delete[] ptr;
  // releasing memory of 2D array end
}