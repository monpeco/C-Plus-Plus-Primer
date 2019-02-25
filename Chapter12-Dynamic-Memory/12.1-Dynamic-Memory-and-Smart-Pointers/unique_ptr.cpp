#include <iostream>
#include <memory>

using namespace std;

int main(){
  unique_ptr<int> p1;
  unique_ptr<int> p2(new int(42));
  
  unique_ptr<string> ps1(new string("this is a string"));
  //unique_ptr<string> ps2(ps1);        ERROR: no copy for unique_ptr
  unique_ptr<string> ps3;
  //ps3 = ps1;                          ERROR: no assign for unique_ptr

  // transfers ownership from p1 to p2
  unique_ptr<string> pu2(ps1.release());  // release makes p1 null

  unique_ptr<string> pu3(new string("Trex"));
  // transfer ownership from p3 to p2
  pu2.reset(pu3.release());  // reset deletes the memory to which p2 had pointed

  return 0;
}