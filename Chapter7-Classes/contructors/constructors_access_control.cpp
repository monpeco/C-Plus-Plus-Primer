#include <iostream>

using namespace std;

class Sales_data{
  public:
    Sales_data() = default;
    Sales_data(const string &s, unsigned n, double p):
      bookNo(s), units_sold(n), revenue(p){};
      
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