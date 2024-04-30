// 443. String Compression
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main() {
  vector<char> ch = {'a', 'b', 'b', 'b', 'b', 'b', 'b',
                     'b', 'b', 'b', 'b', 'b', 'b'};
  int ansIndex = 0;
  int i = 0;
  int n = ch.size();
  while (i < n) {
    int j = i + 1;
    while (j < n && ch[j] == ch[i]) {
      j++;
    }

    ch[ansIndex++] = ch[i];

    if ((j - i) > 1) {
      string chrNum = to_string((j - i));
      for (char digit : chrNum) {
        ch[ansIndex++] = digit;
      }
    }
    i = j;
  }

  for (int i = 0; i < ansIndex; i++) {
    cout << ch[i] << " ";
  }
}