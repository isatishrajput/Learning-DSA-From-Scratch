#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(8);
  v.push_back(7);
  v.push_back(9);

  //  we can use the algorithm library to find the value
  cout << "The index on which we found 3 is "
       << binary_search(v.begin(), v.end(), 3) << endl;

  // finding the lower bound in the vector
  cout << "Value of lower bound is "
       << v[lower_bound(v.begin(), v.end(), 7) - v.begin()] << endl;

  cout << "Value of upper bound is "
       << v[upper_bound(v.begin(), v.end(), 7) - v.begin()] << endl;
}
