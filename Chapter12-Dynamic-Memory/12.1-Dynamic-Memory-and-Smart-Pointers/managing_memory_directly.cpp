#include <iostream>
#include <memory>
#include <vector>

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


  
  // vector with ten elements with values from 0 to 9
  vector<int> *pv = new vector<int>{0,1,2,3,4,5,6,7,8,9};
  
  // we can also value initialize a dynamically allocated object by
  // following the type name with a pair of empty parentheses
  string *ps4 = new string;     // default initialized to the empty string
  string *ps5 = new string();   // value initialized to the empty string
  int *pi4 = new int;           // default initialized; *pi1 is undefined
  int *pi5 = new int();         // value initialized to 0; *pi5 is 0
  

  // when we provide an initializer inside parentheses, we can use `auto`
  // to deduce the type of the object we want to allocate from that initializer.
  // However, because the compiler uses the initializer's type to deduce the
  // type to allocate, we can use `auto` only with a single initializer inside
  // parentheses
  
  auto p1 = new auto(obj);    // p points to an object of the type of obj
  auto p2 = new auto{a,b,c};  // error: must use parentheses for the initializer
  
  // The newly allocated object is initialized from the value of obj.

  return 0;
}