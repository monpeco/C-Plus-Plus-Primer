#include <iostream>

class Sales_data{
  public:
    int id;
    double price;
    double revenue;
    int quantity;
};

int main(){
  
  Sales_data data, *p;
  
  std::cout << "sizeof(Sales_data):\t" << sizeof(Sales_data) << std::endl;
  std::cout << "sizeof(data):\t\t" << sizeof(data) << std::endl;
  std::cout << "sizeof(p):\t\t" << sizeof(p) << std::endl;
  std::cout << "sizeof(*p):\t\t" << sizeof(*p) << std::endl;
  std::cout << "sizeof(data.revenue):\t\t" << sizeof(data.revenue) << std::endl;
  std::cout << "sizeof(Sales_data::quantity):\t" << sizeof(Sales_data::quantity) << std::endl;

  
  return 0;
}

/*
Output:

sizeof(Sales_data):     32
sizeof(data):           32
sizeof(p):              8
sizeof(*p):             32
sizeof(data.revenue):           8
sizeof(Sales_data::quantity):   4

*/