#include <iostream>
#include <vector>
#include <memory>

using namespace std;


int main(){
  shared_ptr<int> p(new int(42));
  int *q = p.get();     // // ok:  but  don't use  q  in  any  way  that  might  delete  its pointer
  {  // new block
    //  undefined: two independent shared_ptrs point to the same memory
    shared_ptr<int>(q);
  } // block ends, q is destroyed, and the memory to which q points is freed
  int foo = *p; // undefined; the memory to which p points was freed
  
  return 0;
}