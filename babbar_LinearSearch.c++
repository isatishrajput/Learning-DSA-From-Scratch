#include <iostream>
using namespace std;

int findElement(int arr[], int searchElement, int Size) {
  for (int i = 0; i < Size; i++) {
    if (arr[i] == searchElement) {
      cout << "Searched Element is present in the array at position " 
      << i + 1 << endl;
      return 1;
    }
  }
  return 0;
}

int main() {
  int arr[10] = {1, -9, 3, 6, 4, 8, 2, 83, 5, 7}, searchElement;

  cout << "Elements that are already present in the array are given below"
       << endl;
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  cout << "Enter the Element which you want to search ";
  cin >> searchElement;

  int found = findElement(arr, searchElement, 10);

  if (found == 0) {
    cout << "Searched Element is not present in the array " << endl;
  }
}
