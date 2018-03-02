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

  std::cout << std::endl << "Assign &refVal3 = refVal;" << std::endl;
  int &refVal3 = refVal;
  std::cout << "refVal3: " << refVal3 << std::endl;

  int i = refVal;
  std::cout << std::endl << "i: " << i << std::endl;
  
  // int &refVal4 = 10; // error: initializer must be an object
  // example_01.cpp:25:16: error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’
  // int &refVal4 = 10; // error: initializer must be an object
  //                ^
  
  double dval = 3.14;
  // int &refVal5 = dval; // error: initializer must be an int object
  // example_01.cpp:27:16: error: invalid initialization of reference of type ‘int&’ from expression of type ‘double’
  // int &refVal5 = dval; // error: initializer must be an int object
  //                ^
  
  return 0;
}