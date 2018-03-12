#include <iostream>

int main(){
  
  int i = 0;
  int *const p1 = &i;               // we can't change the value of p1; const is top-level
  const int ci = 42;                // we cannot change ci; const is top-level
  const int *p2 = &ci;              // we can change p2; const is low-level
  const int *const p3 = p2;         // right-most const is top-level, left-most is not
  const int &r = ci;                // const in reference types is always low-level

  // The distinction between top-level and low-level matters when we copy an object.
  // When we copy an object, the top-level const are ignored.
  
  i = ci;
  p2 = p3;                           // ok: p2 has the same low-level const qualification as p3
  
  // On the other hand, low-level const is never ignored, when we copy an object, both objects
  // must have the same low-level const qualification on there must be a conversion between the
  // types of the two objects. In general, we can convert a non-const to const, but not the other
  // way round
  
  //int *p = p3;                      // error: p3 has a low-level const but p doesn't
  
  p2 = &ci;
  p2 = &i;                            // ok: we can convert int* to const int*
  
  //int &r2 = ci;                     // error: can't bind an ordinary int& to a const int object
  
  const int &r2 = i;                  // ok: can bind const int& to plain int
  
  return 0;
}
