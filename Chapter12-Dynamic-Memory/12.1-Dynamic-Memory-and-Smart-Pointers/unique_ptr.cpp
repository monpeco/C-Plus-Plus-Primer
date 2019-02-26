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


  // calling release breaks the connection between a unique_ptr and the object it had been managing.
  // Often the pointer returned by release is used to initialize or to assign another smart pointer.
  // In that case, the responsability for managing the memory is simple transferred from ona smart pointer to another.
  // However, if we do not use another smart pointer to hold the pointer returned from release, our program takes over responsability for freeing that resourse:

  p2.release(); // WRONG: p2 won't free the memory and we've lost the pointer
  auto p = p2.release();  // ok, but we must remember to delete(p)

  return 0;
}