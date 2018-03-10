#include <iostream>

int main(){
  
  const double dval = 3.14;       // dval is a double; its value can be changed
  double const *cptr = &dval;             // ok: but can't change dval through cptr
  
  std::cout << "dval: " << dval << std::endl;
  std::cout << "*cptr: "<< *cptr << std::endl;

  std::cout << "cptr: "<< cptr << std::endl;
  
  return 0;
}