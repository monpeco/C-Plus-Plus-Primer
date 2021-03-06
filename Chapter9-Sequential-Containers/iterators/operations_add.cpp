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
  list<char> c;
  char t('h');
  
  list<Sales_data> s;
  
  c.push_back(t);                             // Creates an element with value t or constructed from args at the end of c. Returns void.
  s.emplace_back("455-95552108", 15, 50.50);  // s.emplace_back(args);
  
  c.push_front(t);                            //   Creates an element with the value t or constructed from args on the fron of c. Returns void.
  s.emplace_front();                          // c.emplace_fron(args);
  
  list<char> c2(10,'r');
  auto p = c2.begin();
  auto b = c2.begin();
  auto e = c2.end();
  auto p2 = s.begin();
  
  c.insert(p,t);                              //   Creates an element with value t or constructed from args before the element denoted by iterator p. Returns an iterator referring to the element that was added.
  s.emplace(p2,"455-95552108", 15, 50.50);    // c.emplace(p,args);
  
  int n = 3;
  c.insert(p,n,t);                            //   Inserts n elements with value t before the element denoted by iterator p. Returns an iterator the the first element inserted; if n is zero, returns p.
  
  c.insert(p,b,e);                            //   Inserts the elements from the range denoted by iterators b and e before the element denoted by the iterator p. b and e may not refer to elments in c. Returns an iterator to the first element inserted; if the range is empty, returns p.
  
  c.insert(p,{'e', 'y', 'm', 'l'});           // c.insert(p,il);             //    il is a braced list of elements values. Inserts the given values before the element denoted by the iterator p. Returns an iterator to the first inserted element; if the list is empty returns p.
  
  list<string> slist(5, "this");
  slist.insert(slist.begin(), "hello");      // equivalent to calling slist.push_front("Hello")
  
  vector<string> svec(5, "this");

  // no push_front on vector, but we can insert before begin()
  // warning: inserting anywhere but at the end of a vector might be slow
  svec.insert(svec.begin(), "Hello");

  // The arguments of insert that appear after the initial iterator argument are analogous to the container constructors that take the same parameters.
  // The version that takes an element count and a value adds the specified number of identical elements before the given position
  svec.insert(svec.begin(), 10, "Anna");
  

  // The version that takes a pair of iterators or an initilizer list insert the elements from the given range before the given position:
  vector<string> v = {"quasi", "simba", "frollo", "scar"};
  
  // insert the last two elements of v at the beginning of slist
  slist.insert(slist.begin(), v.end() - 2, v.end());
  slist.insert(slist.end(), {"these", "words", "will", "go", "at", "the", "end"});
  // under the c++11, the version of insert that take a count or a range return an iterator to the first element that was inserted.
  // (in prior versions of the library, these operations returned void). If the range is empty, no elements are inserted, and the 
  // operation returns its first parameter.
    
  return 0;
}