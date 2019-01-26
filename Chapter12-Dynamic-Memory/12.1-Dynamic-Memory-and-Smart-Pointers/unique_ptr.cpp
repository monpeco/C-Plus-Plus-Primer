#include <memory>

using std::unique_ptr;
using std::string;

int main(){
  
  std::unique_ptr<double> p1;            // unique_ptr that can point to a double
  std::unique_ptr<int> p2(new int(42));  // p2 points to a int with value 42
  
  unique_ptr<string> p3(new string("Stegosaurus"));
  // unique_ptr<string> p4(p3);          // error: no copy for unique_ptr
  unique_ptr<string> p5;
  //p5 = p3;                             // error: no assign for unique_ptr
  
  // transfer ownership from p3 to p4
  unique_ptr<string> p4(p3.release());   // release make p3 null
  unique_ptr<string> p6(new string("Trex"));
  // transfer the ownershipt from p6 to p4
  p4.reset(p6.release());                // reset deletes the memory to which p4 had pointed
  
  return 0;
}