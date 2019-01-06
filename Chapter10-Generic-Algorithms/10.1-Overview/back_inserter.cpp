#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  
  // back_inserter, which is a function defined in the `iterator` header.
  // `back_inserter` takes a reference to a container and returns an inserter iterator
  // bound to that container. When we assign through that iterator, the assignment calls
  // `push_back` to add an element with the given value to the container:
  vector<int> vec;
  auto it = back_inserter(vec); // assigning through it adds elements to vec
  *it = 42;
  *it = 53;
  *it = 68;

  for(auto e : vec) { cout << e << ' '; } cout << endl;

  return 0;
}