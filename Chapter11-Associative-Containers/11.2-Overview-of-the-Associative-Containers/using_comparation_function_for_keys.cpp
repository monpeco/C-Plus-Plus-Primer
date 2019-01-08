// ## Key Types for Ordered Containers
// we can supply our own operarion to to use in place of the < operator on keys
// The spedified operation must define a `strict weak ordering` over the key type.
// we can think of it as a less than, although our function might use a more 
// complicated procedure. However we define it, the comparison fuction must have
// the following properties:
//    * Two keys cannot both be `less than` each other; if `k1` is `less than` `k2`,
//      then `k2` must never be `less than` k1.
//    * if `k1` is `less than` `k2` and `k2` is `less than` `k3`, then `k1` must be
//      `less than` `k3`
//    * If there are two keys, and neither key is `less than` the other, then we'll
//      say that those keys are equivalent. If `k1` is equivalent to `k2` and `k2` 
//      is equivalent to `k3`, then `k1` must be equivalent to `k3`
//
// If two keys are equivalent, the container treats them as equal. When used as a key
// to a `map`, there will be only one element associated with those keys, and either
// key can be used to access the corresponding value.

#include <iostream>
#include <vector>
#include <set>


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

// ## using a comparison fucntion for the key type
// The type of operation that a container uses to organize its elements is part of
// the of that container. To specefy our own operation, we must supply the type of that 
// operation when we define the type of an associative container.
// We supply a particular comparison operation as a constructor argument when the
// container is created.
bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs){
  return lhs.isbn() < rhs.isbn();
}

int main(){
  // bookstore can have several transactions with the same ISBN
  // elements in bookstore will in ISBN order
  multiset<Sales_data, decltype(compareIsbn)*>  bookstore(compareIsbn);
  
  return 0;
}