#include <iostream>
#include <vector>
#include <memory>

using namespace std;


int main(){
  shared_ptr<int> p;
  //p = new int(42);      // error: cannot assign a pointer to a shared_ptr
  p.reset(new int(42));   // ok: points to a new object
  
  return 0;
}