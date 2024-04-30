// Reverse the array of string
#include <iostream>
using namespace std;

void reverseArray(char arr[]) {
  int end = -1;
  int start = 0;
  for (int i = 0; arr[i] != '\0'; i++) {
    end++;
  }

  while (start < end) {
    swap(arr[start++], arr[end--]);
  }

  cout << "After Reverse Value is " << endl;
  for (int i = 0; arr[i] != '\0'; i++) {
    cout << arr[i];
  }
}

int main() {
  char arr[30];
  cout << "Enter Your first name: ";
  cin >> arr;

  reverseArray(arr);
}