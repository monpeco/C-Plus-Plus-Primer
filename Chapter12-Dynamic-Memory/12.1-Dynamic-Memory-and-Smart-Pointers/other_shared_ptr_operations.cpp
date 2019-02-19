#include <iostream>
#include <vector>
#include <memory>

using namespace std;


int main(){
  shared_ptr<int> p;
  //p = new int(42);      // error: cannot assign a pointer to a shared_ptr
  p.reset(new int(42));   // ok: points to a new object
  
  shared_ptr<string> p2;
  if (!p2.unique())
    p2.reset(new string(*p2)); // we aren't alone; allocate a new copy
  *p2  +=  "new string";       // now that we know we're the only pointer, okay to change this object
  
  return 0;
}