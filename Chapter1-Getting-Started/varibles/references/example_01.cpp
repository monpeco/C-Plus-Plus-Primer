#include <iostream>

int main(){
  
  int ival = 1024;
  int &refVal = ival;
  //int &refVal2;         // example_01.cpp:7:8: error: ‘refVal2’ declared as reference but not initialized
  
  std::cout << "ival: " << ival << std::endl;
  std::cout << "refVal: " << refVal << std::endl;
  
  std::cout << std::endl << "Assign refVal = 2;" << std::endl;
  refVal = 2;
  
  std::cout << "refVal: " << refVal << std::endl;
  
  int ii = refVal;
  
  std::cout << "ii: " << ii << std::endl;

  return 0;
}