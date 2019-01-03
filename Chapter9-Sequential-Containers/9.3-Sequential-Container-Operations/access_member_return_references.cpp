#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> c = {11, 2, 5, 10, 9, 7, 5};
  
  // The members that access elements in a container (`front`, `back`, subscript and `at`) return references. 
  // If the container is a `const` object, the return is a reference to `const`. If the container is not `const`,
  // The return is an ordinary reference that we can use to change the value of the fetched element:
  
  if (!c.empty()){
    cout << "array: " << endl;
    for(auto e : c) { cout << e << ' '; }
    
    c.front() = 42;         // assing 42 to the first element in c
    cout << endl << "c.front() = 42 " << endl;
    for(auto e : c) { cout << e << ' '; }
    
    auto &v = c.back();     // get a reference to the last element
    v = 1024;               // changes the element
    cout << endl << "v = 1024" << endl;
    for(auto e : c) { cout << e << ' '; }
    
    auto v2 = c.back();     // v2 is not a reference; it's a copy of c.back()
    v2 = 0;                 // no change to the element in c
    cout << endl << "v2 = 0" << endl;
    for(auto e : c) { cout << e << ' '; }
    
  }
  
  // as usual, if we want to use `auto` to store the return from one of these function and we want to use
  // that variable to change the element, we must remember to define our variable as a reference type.


  return 0;
}

/*
Output:

array: 
11 2 5 10 9 7 5 
c.front() = 42 
42 2 5 10 9 7 5 
v = 1024
42 2 5 10 9 7 1024 
v2 = 0
42 2 5 10 9 7 1024

*/