#include <iostream>
#include <memory>

using namespace std;

// There is one exception to the rule that we cannot copy a unique_ptr: 
// We can copy or assign a unique_ptr that is about to be destroyed. The most common
//example is when we return a unique_ptr from a function:

/*unique_ptr<int> clone(int p){
  // ok: explicitly create a unique_ptr<int> from int*
  return unique_ptr<int> p(new int(p));
} not working*/ 

// Alternative, we can also return a copy of a local object:
unique_ptr<int> clone2(int p){
  unique_ptr<int> ret(new int(p));
  // ...
  return ret;
}

int main(){
  unique_ptr<int> p1 = clone2(5);
  return 0;
}