// 54. Spiral Matrix
#include <iostream>
using namespace std;

int main() {
  int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  int total = 3 * 4;
  int elementCount = 0;
  int startingRow = 0;
  int startingCol = 0;
  int endingRow = 2;
  int endingCol = 3;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  while (elementCount < total) {
    // printing starting row
    for (int i = startingCol; elementCount < total && i <= endingCol; i++) {
      cout << arr[startingRow][i] << " ";
      elementCount++;
    }
    startingRow++;

    // printing ending col
    for (int i = startingRow; elementCount < total && i <= endingRow; i++) {
      cout << arr[i][endingCol] << " ";
      elementCount++;
    }
    endingCol--;

    // printing ending row
    for (int i = endingCol; elementCount < total && i >= startingCol; i--) {
      cout << arr[endingRow][i] << " ";
      elementCount++;
    }
    endingRow--;

    // printing starting col
    for (int i = endingRow; elementCount < total && i >= startingRow; i--) {
      cout << arr[i][startingCol] << " ";
      elementCount++;
    }
    startingCol++;
  }
}