#include <iostream>

int main(){
  
  int i = 0;
  int *const p1 = &i;  // we can't change the value of p1; const is top-level
  const int ci = 42;   // we cannot change ci; const is top-level
  const int *p2 = &ci; // we can change p2; const is low-level
  const int *const p3 = p2; // right-most const is top-level, left-most is not
  const int &r = ci;  // const in reference types is always low-level

  std::cout << "i: " << i << std::endl;
  std::cout << "p1: " << p1 << std::endl;
  std::cout << "*p2: " << *p2 << std::endl;
  std::cout << "p3: " << p3 << std::endl;
  std::cout << "r: " << r << std::endl;

  return 0;
}

/*
Output:
i: 0
p1: 0x7ffc534ee3d8
*p2: 42
p3: 0x7ffc534ee3dc
r: 42

*/