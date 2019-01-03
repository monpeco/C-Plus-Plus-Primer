#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> c = {11, 2, 5, 10, 9, 7, 5};
  
  int e = c.back();        // Returns a reference to the last element in c
  cout << e << endl;
  
  e = c.front();           // Returns a referente to the first element in c
  cout << e << endl;
  
  int n = 3;  
  e = c[n];                // Returns a reference to the element indexed by the unsigned integral value n. 
  cout << e << endl;
    
  e = c.at(n);             // Returns a reference to tha element indexed by n. If the index is out of range, throws an `out_of_range` exception
  cout << e << endl;
  
  // each sequential container has a `front` member
  // and all except `forward_list` also have a `back` member.
  
  
  // check that there are elements before dereferencing an interator or calling `front` or `back`
  if (!c.empty()){
    // val and val2 are copies of the value of first element in c
    auto val = *c.begin(), val2 = c.front();
    
    // val3 and val4 are copies of the last element in c
    auto last = c.end();
    auto val3 = *(--last);
    cout << "val3:" << val3 << endl;

    auto val4 = c.back();
    cout << "val4:" << val4 << endl;

  }

  return 0;
}

/*
Output:

5
11
10
10
val3:5
val4:5

*/