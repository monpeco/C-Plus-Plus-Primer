#include <iostream>

int main(){
  double obj = 3.14, *pd = &obj;
  
  void *pv = &obj;          // pv can hold the address of any data pointer type
  
  pv = pd;
  
  return 0;
}

/*

There a limited number of things we can do with a void pointer:
  1. We can compare it with another pointer
  2. We can pass it or return it from a function
  3. And we can assign it to another void pointer
  
We can not use a void pointer to operate on the object it addresses (we dont know that object type)

*/