#include <iostream>

void reset(int &i);
void reset(int *i);

int main(){
  
  int i = 2;
  const int ci = i;
  std::string::size_type ctr = 0;

  std::cout << "before reset - v: " << i << std::endl;
  reset(i);
  std::cout << "after reset - v: " << i << std::endl;

  // reset(ci);    // invalid initialization of reference of type ‘int&’ from expression of type ‘const int’

  std::cout << "before reset - v: " << i << std::endl;
  reset(&i);
  std::cout << "after reset - v: " << i << std::endl;


  return 0;
}

void reset(int &i){
  i = 6;
}

void reset(int *i){
  *i = 7;
}

/*
Output:


*/