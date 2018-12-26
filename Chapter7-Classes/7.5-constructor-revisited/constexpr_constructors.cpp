#include <iostream>

using namespace std;
// Although constructors can't be const, constructors in a literal class
// can be constexpr functions. Indeed, a literal class must provide at 
// least one constexpr constructor.

// A constexpr constructor can be declared as = default.
// Otherwise, a constexpr constructor must meet the requirements of a 
//   constructor (no return statement) and of a constexpr function (the 
//   only executable statment it can have is a return statement)
// As a result, the body of a constexpr constructor is typically empty.

// We define a constexpr constructor by preceding its declaration with the 
// keyword constexpr:

class Debug{
public:
  constexpr Debug(bool b = true): hw(b), io(b), other(b){}
  constexpr Debug(bool b, bool i, bool o): hw(b), io(i), other(o){}
  
  constexpr bool any() { return hw || io || other; }
  void set_io(bool b) { io = b; }
  void set_hw(bool b) { hw = b; }
  void set_other(bool b) { other = b; }
  
private:
  bool hw;     // hardware errors other than IO errors
  bool io;     // IO errors
  bool other;  // other errors
};

int main(){
  constexpr Debug io_sub(false, true, false); // debugging IO
  if(io_sub.any()){  // equivalent if(true)
    cerr << "print appropiate error message" << endl;
  }
  constexpr Debug prod(false);               // no debugging production
  if(prod.any()){  // equivalent if(false)
    cerr << "print and error message" << endl;
  }
  return 0;
}