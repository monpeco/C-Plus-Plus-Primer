#include <iostream>
#include <string>

struct Sales_data{
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main(){
  
  Sales_data s1;
  s1.bookNo = "ISBN 45787";
  s1.units_sold = 2;
  s1.revenue = 14.75;
  
  std::cout << s1.bookNo << ' ' << s1.units_sold << ' ' << s1.revenue << std::endl;
  return 0;
}