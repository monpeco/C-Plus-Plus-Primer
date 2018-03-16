#include <iostream>
#include <string>

struct sales_data{
  std::string bookNo;
  unsigned units_sold{0};
  double revenue{0.0};
};

int main(){
  
  sales_data s1;
  
  double price{0};
  std::cout << "Int. values: " << std::endl;
  std::cin >> s1.bookNo >> s1.units_sold >> s1.revenue;
  
  std::cout << "bookNo: " << s1.bookNo 
            <<  ", units_sold: " << s1.units_sold 
            <<  ", revenue: " << s1.revenue << std::endl;

  return 0;
}