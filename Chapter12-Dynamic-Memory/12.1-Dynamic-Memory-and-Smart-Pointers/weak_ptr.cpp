#include <iostream>
#include <memory>

using std::shared_ptr;
using std::make_shared;
using std::weak_ptr;

int main(){
  auto p = make_shared<int>(42);
  weak_ptr<int> wp(p);            //  wp  weakly  shares  with  p;  use  count  in  p  is unchanged
  
  
  // Because the object might no longer exist, we cannot use a weak_ptr to access its
  // object directly. To access that object, we must call lock. The lock function checks
  // whether the object to which the weak_ptr points still exists. If so, lock returns a
  // shared_ptr to the shared object. As with any other shared_ptr, we are
  // guaranteed that the underlying object to which that shared_ptr points continues to
  // exist at least as long as that shared_ptr exists. 
  
  if(shared_ptr<int> np = wp.lock()){    // true if np is not null
    // inside the if, np shares its object with p
  }

  return 0;
}