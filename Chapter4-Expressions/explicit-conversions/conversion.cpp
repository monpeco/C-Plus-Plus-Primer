#include <iostream>


int main(){
  
  int i=71, j=7;
  double slope_int = i/j;
  
  std::cout << "i: " << i << std::endl;
  std::cout << "j: " << j << std::endl;
  std::cout << "slope_int: " << slope_int << std::endl;
  
  double slope_static = static_cast<double>(i) / j;
  std::cout << "slope_static: " << slope_static << std::endl;
  
  return 0;
}

/*
Output:
i: 71
j: 7
slope_int: 10
slope_static: 10.1429

*/