#include <iostream>
#include <memory>
#include <list>

using namespace std;


int main(){
  
  // to make using dynamic memory easier (and safer), the new libray provides two
  // `smart pointers` types that manage dynamic objects. A smart pointer acts like a
  // regular pointer with the importan exception that it automatically deletes the object
  // to which it points.
  //
  // The new library define two kinds of smart pointers that differ in how the manage 
  // their underlying pointers: `shared_ptr`, which allows multiple pointers to refer 
  // the same object, and `unique_ptr`, which owns the object to which it points. The
  // library also defines a companion class named `weak_ptr` that is a weak reference
  // to and object managed by a `shared_ptr`. All three are defined in `memory` header.
  
  
  // smart pointers are templates. Therefore, when we create a smart pointer, we must
  // supply additional information, in this case, the type to which the pointer can point
  
  shared_ptr<string> p1;      // shared_ptr that can point at a string
  shared_ptr<list<int>> p2;   // shared_ptr that can point at a list of ints


  // A default initialized smart pointer holds a null pointer
  //
  // we use a smart pointer in ways that are similar to using a pointer. Dereferencing a
  // smart pointer returns the object to which the pointer points. When we use a smart
  // pointer in a condition, the effect is to test whether the pointer is null:
  
  // if p1 is not null, check whether it's the empty string
  if (p1 && p1->empty()){
    *p1 = "hi";  // if so, dereference p1 to assign a new value to that string
  }
  
  

  return 0;
}