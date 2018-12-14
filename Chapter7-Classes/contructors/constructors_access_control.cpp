#include <iostream>

using namespace std;

class Sales_data{
  friend Sales_data add(const Sales_data&, const Sales_data&);
  friend istream &read(istream&, Sales_data&);
  friend ostream &print(ostream&, Sales_data&);
  
  public:
    Sales_data() = default;
    Sales_data(const string &s, unsigned n, double p):
      bookNo(s), units_sold(n), revenue(p){};
    Sales_data(const string &s): bookNo(s){};
    Sales_data(istream &);
    
    string isbn() const { return bookNo; };
    Sales_data &combine(const Sales_data &s);
      
  private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(){
  

  cout << "Sales_data: \t"  << endl;  
  
}

/*
Output:


*/