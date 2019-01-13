#include <iostream>
#include <memory>
#include <vector>

using namespace std;
  
int main(){
  
  auto p = make_shared<int>(42);   // object to which p points has one user
  auto q(p);                       // p and q point to the same object
                                   // object to which p and q point had two users
  
  // we can think of shared_ptr as if it has an associated counter, usually referred as
  // `reference counter`. Whenever we copy a `shared_ptr`, the count is incremented. For
  // example, the counter associated is incremented when:
  //   1) When we use a `shared_ptr` to initialize another `shared_ptr`
  //   2) When we use it as a right-hand operand of an assignment
  //   3) Whem we pass it to or return it from a function by value.
  //
  // The  counter is decremented:
  //   1) When we assign a new value to the `shared_ptr`
  //   2) When the `shared_ptr` itself is destroyed, such as when a local 
  //      `shared_ptr` goes out of scope.
  //
  // Once a `shared_ptr`'s counters goes to zero, the `shared_ptr` 
  // automatically frees the object that it manages:
  
  auto r = make_shared<int>(42);    // int to which r points has one user
  r = q;    // assign to r, making it point to a different address
            // increase the use count for the object to which q points
            // reduce the use count for the object to which r had pointed
            // the object r had pointed to has no users; that object is 
            // automatically freed

  return 0;
}