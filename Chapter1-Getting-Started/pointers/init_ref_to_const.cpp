#include <iostream>

int main(){
  
  int i = 42;
  const int &r1 = i;
  const int &r2 = 1024;
  const int &r3 = r1 * 3;

  //int &r4 = r1 * 2;           //init_ref_to_const.cpp:10:16: error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’

  std::cout << "i: " << i << std::endl;
  std::cout << "r1: " << r1 << std::endl;
  std::cout << "r2: " << r2 << std::endl;
  std::cout << "r3: " << r3 << std::endl;

  return 0;
}