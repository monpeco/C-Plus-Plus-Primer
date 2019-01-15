#include <iostream>
#include <memory>

using namespace std;

int main(){
  // Using new to Dynamically Allocate and Initialize Objects
  // Objects allocated on the free store are unnamed, so new offers no 
  // way to name the objects that it allocates. Instead, `new` returns
  // a pointer to the project it allocates
  int *pi1 = new int;    // pi points to a dynamically allocated,
                        // unnamed, uninitialized int

  // By default, dynamically allocated objects are default initialized
  int *pi2 = new int;         // pi points to an uninitialized int
  string *ps2 = new string;   // initialized to empty string
  
  // we can initialize dynamically allocated objects using direct initialization
  // we can use traditional construction (using parentheses), and under the
  // c++11 standard, we can also use list initialization (using curly braces)
  
  int *pi3 = new int(1024);   // object to which pi points has value 1024
  string *ps3 = new string(10, '9');

  return 0;
}