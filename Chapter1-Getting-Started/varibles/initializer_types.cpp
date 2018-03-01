#include <iostream>

int main(){
  
  // Different types of initializers
  int unit_sold_1 = 10;
  int unit_sold_2 = {10};
  int unit_sold_3(10);
  int unit_sold_4{10};
  
  std::cout << "unit_sold_1: " << unit_sold_1 << std::endl;
  std::cout << "unit_sold_2: " << unit_sold_2 << std::endl;
  std::cout << "unit_sold_3: " << unit_sold_3 << std::endl;
  std::cout << "unit_sold_4: " << unit_sold_4 << std::endl;
  
  return 0;
}