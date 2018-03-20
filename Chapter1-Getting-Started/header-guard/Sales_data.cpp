#include <iostream>
#include <string>
#include "Sales_data.h"
#include "Sales_data2.h"

int main(){
  
  std::cout << "Header guard's program" << std::endl;
  
  Sales_data s1;
  
  s1.bookNo = "message";
  s1.units_sold = 4;
  s1.revenue = 7.75;
  
  std::cout << s1.bookNo << " "
            << s1.units_sold << " "
            << s1.revenue << std::endl;
  
  return 0;
}