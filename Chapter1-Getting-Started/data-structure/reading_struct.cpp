#include <iostream>
#include <string>

struct sales_data{
  std::string bookNo;
  unsigned units_sold{0};
  double revenue{0.0};
};

int main(){
  
  sales_data s1, s2;
  
  double price{0};
  std::cout << "read the first transaction: " << std::endl;
  std::cin >> s1.bookNo >> s1.units_sold >> price;
  
  s1.revenue = s1.units_sold * price;
  
  std::cout << "bookNo: " << s1.bookNo 
            <<  ", units_sold: " << s1.units_sold 
            <<  ", revenue: " << s1.revenue << std::endl;


  std::cout << "read the second transaction: " << std::endl;
  std::cin >> s2.bookNo >> s2.units_sold >> price;
  
  s2.revenue = s2.units_sold * price;
  
  std::cout << "bookNo: " << s2.bookNo 
            <<  ", units_sold: " << s2.units_sold 
            <<  ", revenue: " << s2.revenue << std::endl;

  return 0;
}