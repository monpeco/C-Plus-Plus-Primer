#include <iostream>

constexpr int size(){
  
  return 7;
}

int main(){
  
  constexpr int mf = 20; // 20 is a constant expression
  constexpr int limit = mf + 1; // mf + 1 is a constant expression
  constexpr int sz = size(); // ok only if size is a constexpr function
  

  const int *p = nullptr;      // p is a pointer to a const int
  constexpr int *q = nullptr;  // q is a const pointer to int. constexpr imposes a top-level const on the objets it defines
  
  return 0;
}

