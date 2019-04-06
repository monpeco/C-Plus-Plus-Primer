#include <iostream>

class Sales_data{
  public:
    // other members and constructor as before
    // declaration equivalent to the synthesized copy constructor
    Sales_data(){ std::cout << "default constuctor \n"; };
    Sales_data(const Sales_data&){ std::cout << "copy constuctor \n"; };
  private:
    std::string bookNo;
    int units_sold = 0;
    double revenue = 0.0;
};

int main(){
    Sales_data f1;
    Sales_data f2(f1);
    
    return 0;
}