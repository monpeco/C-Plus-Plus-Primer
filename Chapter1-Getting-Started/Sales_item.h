#include <iostream>

class Sales_item {
  public:
  Sales_item(){
    std::cout << "Sales_item's constructor" << std::endl;
  }
  
  friend std::istream& operator>> (std::istream& o,Sales_item& obj){
    return o; 
  }
};