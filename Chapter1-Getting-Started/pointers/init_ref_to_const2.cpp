#include <iostream>

int main(){
  
  int i = 42;
  const int &r1 = i;
  const int &r2 = 1024;


  std::cout << "i: " << i << std::endl;
  std::cout << "r1: " << r1 << std::endl;
  std::cout << "r2: " << r2 << std::endl;
  
  i = 100;
  
  std::cout << "i: " << i << std::endl;
  std::cout << "r1: " << r1 << std::endl;
  std::cout << "r2: " << r2 << std::endl;
  
  //r1 = 2000;          // init_ref_to_const.cpp:20:6: error: assignment of read-only reference ‘r1’

  return 0;
}