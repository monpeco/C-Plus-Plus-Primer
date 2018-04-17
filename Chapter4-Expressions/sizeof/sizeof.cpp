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
  
  std::cout << "sizeof(Sales_data):\t" << sizeof (Sales_data) << std::endl;
  std::cout << "sizeof data :\t\t" << sizeof data << std::endl;
  std::cout << "sizeof p :\t\t" << sizeof p << std::endl;
  std::cout << "sizeof *p :\t\t" << sizeof *p << std::endl;
  std::cout << "sizeof data.revenue :\t\t" << sizeof data.revenue  << std::endl;
  std::cout << "sizeof Sales_data::quantity :\t" << sizeof Sales_data::quantity << std::endl;

  // sizeof char or an expression of type char is guaranteed to be 1.
  std::cout << "sizeof char:\t\t" << sizeof (char) << std::endl;
  
  // sizeof an array is the size of the entire array.
  long int array[] = {'a','s','a','s','a','s','a'};
  std::cout << "sizeof array:\t\t" << sizeof array << std::endl;
  std::cout << "sizeof array:\t\t" << sizeof (array)/sizeof(*array) << std::endl;

  // sizeof(ia)/sizeof(*ia) returns the number of elements in ia
  int ia[] = {4,5,3,2,8,9,5,4,7,1};
  constexpr size_t sz = sizeof(ia)/sizeof(*ia);               //constexpr C++11
  int arr2[sz]; // ok sizeof returns a constant expression
  std::cout << " sizeof ia :\t\t" << sizeof ia  << std::endl;
  std::cout << " sizeof *ia :\t\t" << sizeof *ia  << std::endl;
  std::cout << " sz:\t\t" << sz << std::endl;

  return 0;
}

/*
Output:

sizeof(Sales_data):     32
sizeof data :           32
sizeof p :              8
sizeof *p :             32
sizeof data.revenue :           8
sizeof Sales_data::quantity :   4
sizeof char:            1
sizeof array:           56
sizeof array:           7
 sizeof ia :            40
 sizeof *ia :           4
 sz:            10

*/