#include <iostream>
#include <string>
#include <fstream>

class Sales_data {
  public:
    Sales_data(std::string s, unsigned cnt, double price):
            bookNo(s), units_sold(cnt), revenue(cnt*price) { }
    Sales_data(): Sales_data("", 0, 0) {}
    Sales_data(std::string s): Sales_data(s, 0,0) { }
    Sales_data(std::istream &is): Sales_data() { }
    
    std::string isbn() const { return bookNo; };
    
  private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(){
  
  std::filebuf fb;
  std::istream is(&fb);
  Sales_data s(is);
  
  Sales_data obj();   // ok: but defines a function, not an object
  //if (obj.isbn() == "")  // error: obj is a function
  
  // ok: obj is a default-initialized object
  Sales_data ob;
  if (ob.isbn() == "") { std::cout << "equal" << "\n";  }

  return 0;
}

/*
Output:
equal
*/