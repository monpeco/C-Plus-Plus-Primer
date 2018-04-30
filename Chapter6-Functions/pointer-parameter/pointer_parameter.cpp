#include <iostream>

void reset(int *p);

int main(){
  
  int n = 4;
  int *p = &n;
  
  std::cout << "before reset - *p: " << *p << std::endl;
  std::cout << "before reset - p: " << p << std::endl;

  reset(p);
  
  std::cout << "after reset - *p: " << *p << std::endl;
  std::cout << "before reset - p: " << p << std::endl;

  return 0;
}

void reset(int *p){
  *p = 7;   // Ok, this change the pointed value
  p = 0;    // This only change the local copy of p, not the argument
}

/*
Output:

before reset - *p: 4
before reset - p: 0x7ffcd2ef3cd4
after reset - *p: 7
before reset - p: 0x7ffcd2ef3cd4
*/