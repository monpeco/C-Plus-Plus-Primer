#include <iostream>

class Sales_data{
  public:
    // other members and constructor as before
    // declaration equivalent to the synthesized copy constructor
    Sales_data(){ std::cout << "default constuctor \n"; };
    Sales_data(const Sales_data&);
  private:
    std::string bookNo;
    int units_sold = 0;
    double revenue = 0.0;
};

Sales_data::Sales_data(const Sales_data& orig) :
  bookNo(orig.bookNo),             // uses the string copy constructor
  units_sold(orig.units_sold),     // copies orig.units_sold
  revenue(orig.revenue)            // copies orig.revenue
  { std::cout << "copy constuctor \n";  }

int main(){
    Sales_data f1;
    Sales_data f2(f1);
    
    return 0;
}