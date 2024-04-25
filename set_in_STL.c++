#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main() {
  // below given programme we created set then we inserted elements in it
  // benefits of set is, it always returns a value in in stored order
  // and when we insert duplicate value it always count it as only 1 time
  // suppose in given example we are inserting 5 and 6 more than 1 time but
  // when we try to print it it always gives me only one 5 and one six;
  set<int> set;

  set.insert(1);
  set.insert(5);
  set.insert(5);
  set.insert(6);
  set.insert(9);
  set.insert(2);
  set.insert(6);
  set.insert(7);

  int n = set.size();

  for (int i : set) {
    cout << i << " ";
  }
  cout << endl << "you're outside the loop " << endl;

  //  to erase the  element in set
  std::set<int>::iterator itr = set.begin();
  itr++;
  set.erase(itr);
  for (int i : set) {
    cout << i << " ";
  }
  cout << endl << "you're outside the loop " << endl;

  // way to find the reference or iterator of given number
  std::set<int>::iterator itr1 = set.find(7);

// it is starting the array from given reference to the end of array
  for (auto i = itr1; i != set.end(); i++) {
    cout << *i << " ";
  }
  cout << endl << "you're outside the loop " << endl;
}