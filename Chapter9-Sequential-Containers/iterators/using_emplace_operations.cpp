#include <list>
#include <vector>
#include <forward_list>
#include <string>

using namespace std;

class Sales_data{
  public:
    Sales_data() = default;
    Sales_data(const string &s, unsigned n, double p):
      bookNo(s), units_sold(n), revenue(p){};
    Sales_data(istream &);
    
    string isbn() const { return bookNo; };
    Sales_data &combine(const Sales_data &s);
      
  private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;  
};

int main(){
  list<Sales_data> c;
  
  // construct a Sales_data object at the end of c
  // uses the three-argument Sales_data constructor
  c.emplace_back("978-05987496", 25, 15.99);
  
  // error: there is no version of push_back that takes three arguments
  //c.push_back("978-05987496", 25, 15.99);
      
  // ok: we craete a temporary Sales_data object to pass to push_back
  c.push_back(Sales_data("978-05987496", 25, 15.99));

  return 0;
}