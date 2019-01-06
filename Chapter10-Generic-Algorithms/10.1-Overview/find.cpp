#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(){
  // Most of the altorithms are defined in the `algorithm` header.
  // The library also defines a set of generic numeric algorihms 
  // that are defined in the `numeric` header
  
  vector<int> vec = {11, 85, 95, 42, 49, 61};
  int val = 42;  // value we'll look for
  // result will denote the element we want if it's in `vec`, or `vec.cend` if not
  auto result = find(vec.cbegin(), vec.cend(), val);
  // report the result
  cout << "The value " << val
       << (result == vec.cend()
              ? " is not present" : " is present") << endl;


  // in a list of strings
  list<string> lst = {"hello", "world", "a value", "error"};
  string val2 = "a value";
  // this call to `find` looks through string elements in a list
  auto result2 = find(lst.begin(), lst.end(), val2);
  cout << "The value [" << val2
       << (result2 == lst.end()
              ? "] is not present" : "] is present") << endl;

  return 0;
}