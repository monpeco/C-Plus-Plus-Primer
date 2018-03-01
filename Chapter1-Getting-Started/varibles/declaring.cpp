#include <iostream>

int main(){
  int sum = 0, value,
      units_sold = 0;
  std::string book("0-201-78345-X");
  
  std::cout << "sum: " << sum << std::endl;
  std::cout << "value: " << value << std::endl;
  std::cout << "units_sold: " << units_sold << std::endl;
  
  std::cout << "book: " << book << std::endl;
  
  return 0;
}

/*
Output:
 
sum: 0
value: 0    // In this case prints 0, but it depends on the compiler
units_sold: 0
book: 0-201-78345-X

*/