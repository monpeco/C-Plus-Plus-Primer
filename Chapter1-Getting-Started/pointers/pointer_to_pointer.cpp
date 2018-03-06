#include <iostream>

int main(){
  int ival = 1024;
  int *pi = &ival;    //pi is a pointer to int
  int **ppi = &pi;    //ppi is a pointer to a pointer
  
  std::cout << "ival: "  << ival  << std::endl;
  std::cout << "pi: "    << pi    << std::endl;
  std::cout << "*pi: "   << *pi   << std::endl;
  std::cout << "ppi: "   << ppi   << std::endl;
  std::cout << "*ppi: "  << *ppi  << std::endl;
  std::cout << "**ppi: " << **ppi << std::endl;
  
  
  std::cout << "\nThe value of ival\n"
            << "direct value: " << ival << "\n"
            << "indirect value: " << *pi << "\n"
            << "doubly indirect value: " << **ppi
            << std::endl;

  return 0;
}

/*

Output:

ival: 1024
pi: 0x7ffc668ac59c
*pi: 1024
ppi: 0x7ffc668ac5a0
*ppi: 0x7ffc668ac59c
**ppi: 1024

*/