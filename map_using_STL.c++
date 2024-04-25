#include <iostream>
#include <map>
using namespace std;

int main() {
  // in map out first datatype represents the key, which is in our case int and
  // 2nd data type represents to the value so it will make key value pair
  // sorted map is always insert the data in sorted manner
  map<int, string> data_map;

  data_map[1] = "G-Wagon";
  data_map[13] = "Thar";
  data_map[7] = "Wrangler";
  data_map[5] = "Swift";

  data_map.insert({8, "Volvo"});

  for (auto i : data_map) {
    cout << "value of " << i.first << " element is " << i.second << " " << endl;
  }
  cout << endl << "you're outside the loop" << endl;

  // note unordered map always gives you a data in un-orderly
}