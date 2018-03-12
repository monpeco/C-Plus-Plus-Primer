#include <iostream>

int main(){
  
  int i = 0;
  int *const p1 = &i;               // we can't change the value of p1; const is top-level
  const int ci = 42;                // we cannot change ci; const is top-level
  const int *p2 = &ci;              // we can change p2; const is low-level
  const int *const p3 = p2;         // right-most const is top-level, left-most is not
  const int &r = ci;                // const in reference types is always low-level

  return 0;
}
