#include <iostream>
#include <string>
#include <fstream>

class Sales_data {
  public:
    // nondelegating constructor initializes members from corresponding arguments
    Sales_data(std::string s, unsigned cnt, double price):
            bookNo(s), units_sold(cnt), revenue(cnt*price) {  std::cout << "constructor string, unsigned and double" << "\n";  }
            
    // remaining constructors all delegate to another constructor
    Sales_data(): Sales_data("", 0, 0) { std::cout << "default" << "\n"; }
    Sales_data(std::string s): Sales_data(s, 0,0) { std::cout << "constructor(string)" << "\n"; }
    Sales_data(std::istream &is): Sales_data() { std::cout << "istream" << "\n"; }
    
  private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(){
  
  std::filebuf fb;
  std::istream is(&fb);
  Sales_data s(is);

  return 0;
}

/*
Output:
constructor string, unsigned and double
default
istream

*/