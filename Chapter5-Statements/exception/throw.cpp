#include <iostream>
#include <stdexcept>

class Sales_item {
  public:
  Sales_item(){
    std::cout << "Sales_item's constructor" << std::endl;
  }
  
  friend std::istream& operator>> (std::istream& o,Sales_item& obj){
    std::cout << "operator>>" << std::endl;
    return o; 
  }
  
  friend std::ostream& operator<< (std::ostream& o,const Sales_item& obj){
    std::cout << "operator<<" << std::endl;
    return o;
  }
  
  // stub implementation
  friend Sales_item& operator+= (Sales_item& o,const Sales_item& obj){
    std::cout << "operator+=" << std::endl;
    return o;
  }
  
  // stub implementation
  friend Sales_item& operator+ (Sales_item& o,const Sales_item& obj){
    std::cout << "operator+=" << std::endl;
    return o;
  }
  
  // stub implementation
  int isbn(){
    return 0;
  }
};

int main(){

  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  
  // first check that item1 and item2 represent the same book
  if (item1.isbn() == item2.isbn()) {
  	std::cout << item1 + item2 << std::endl;
  	return 0; // indicate success
  } else {
  	std::cerr << "Data must refer to same ISBN" << std::endl;
  	return -1; // indicate failure
  }
  
  
  // In a more realistic program, the part that adds the objects might be separated from
  // the part that manages the interaction with a user. In this case, we might rewrite the
  // test to throw an exception rather than returning an error indicator:
  
  if (item1.isbn() != item2.isbn())
    throw std::runtime_error("Data must refer to same ISBN");

  std::cout << item1 + item2 << std::endl;
  
  return 0;
}
