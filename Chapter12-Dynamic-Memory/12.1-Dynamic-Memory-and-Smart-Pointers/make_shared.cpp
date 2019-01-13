#include <iostream>
#include <memory>
#include <vector>

using namespace std;


int main(){
  // The safest way to allocate and use dynamic memory is to call a library function named
  // `make_shared`. This function allocates and initializes an object in dynamic memory and 
  // returns a shared_ptr that points to that object. Is defined in `memory` header.
  
  // shared_ptr that points to an int with value 42
  shared_ptr<int> p3 = make_shared<int>(42);
  
  // points to a string with value 9999999999
  shared_ptr<string> p4 = make_shared<string>(10, '9');
  
  // p5 points to a int that is value initialized to 0
  shared_ptr<int> p5 = make_shared<int>();
  
  // p6 points to a dynamically allocated, empty vector<string>
  auto p6 = make_shared<vector<string>>();

  return 0;
}