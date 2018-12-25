#include <iostream>
#include <string>

using namespace std;

class ConstRef{
  public:
    ConstRef(int ii);
    
  private:
    int i;
    const int ci;
    int &ri;
};

// error: ci and ri must be initialized
// ConstRef::ConstRef(int ii){
//   i = ii;    // ok
//   ci = ii;   // error: cannot assign to a const
//   ri = i;    // error: ri was never initialized
// }

ConstRef::ConstRef(int ii) : i(ii), ci(ii), ri(i) {}

int main(){
  string foo = "Hello world!";  // define and initialize
  string bar;                   // default initialized the empty string
  bar = "Hello world!";         // assing a new value to bar
  return 0;
}