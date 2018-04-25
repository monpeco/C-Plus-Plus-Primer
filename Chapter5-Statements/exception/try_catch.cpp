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
  
  while (std::cin >> item1 >> item2){
    try {
    
      if (item1.isbn() != item2.isbn())
        throw std::runtime_error("Data must refer to same ISBN");
    
      std::cout << item1 + item2 << std::endl;
    
    } catch (std::runtime_error err) {
      // remind the user that the ISBNs must match and prompt for another pair
      std::cout << err.what() << "\nTry Again? Enter y or n" << std::endl;
      
      char c;
      std::cin >> c;
      
      if (!std::cin || c == 'n')
        break; // break out of the while loop
      
    }
  }
  

  return 0;
}
