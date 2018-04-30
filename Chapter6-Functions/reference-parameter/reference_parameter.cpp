#include <iostream>

void reset(int &i);

int main(){
  
  int v = 2;

  std::cout << "before reset - v: " << v << std::endl;

  reset(v);
  
  std::cout << "after reset - v: " << v << std::endl;

  return 0;
}

void reset(int &i){
  i = 6;
}

/*
Output:

before reset - v: 2
after reset - v: 6
*/