#include <iostream>
#include <queue>
using namespace std;

int main() {
  // below given queue is maximum value priority_queue
  priority_queue<int> max_value;

  max_value.push(1);
  max_value.push(3);
  max_value.push(7);
  max_value.push(5);
  max_value.push(2);

  int n = max_value.size();

  for (int i = 0; i < n; i++) {
    cout << max_value.top() << " ";
    max_value.pop();
  }
  cout << endl << "You're outside the loop -_-" << endl;

  // below given queue is minimum value priority_queue
  // given method is the way to create the minimum value priority queue
  priority_queue<int, vector<int>, greater<int>> min_value;

  min_value.push(1);
  min_value.push(3);
  min_value.push(7);
  min_value.push(5);
  min_value.push(2);

  n = min_value.size();

  for (int i = 0; i < n; i++) {
    cout << min_value.top() << " ";
    min_value.pop();
  }
  cout << endl << "You're outside the loop -_-";
}