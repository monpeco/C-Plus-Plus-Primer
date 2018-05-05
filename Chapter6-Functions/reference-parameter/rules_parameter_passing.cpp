#include <iostream>

void reset(int &i);

int main(){
  
  int i = 2;
  const int ci = i;
  std::string::size_type ctr = 0;

  std::cout << "before reset - v: " << i << std::endl;

  reset(i);
  
  std::cout << "after reset - v: " << i << std::endl;

  return 0;
}

void reset(int &i){
  i = 6;
}

/*
Output:


*/