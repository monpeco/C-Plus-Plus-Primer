#include <iostream>

int main(){
  int i = 42;
  int *p;           // p is a pointer to int
  int *&r = p;      // r is a reference to a pointer to int

  r = &i;           // assign to r the address of i
                    // r refers to a pointer; assigning &i to r makes p point to i

  *r = 0;           // derefering r makes the variable pointed by p, to store 0
                    // dereferencing r yields i, the object to which p points; changes i to 0
  
  return 0;
}