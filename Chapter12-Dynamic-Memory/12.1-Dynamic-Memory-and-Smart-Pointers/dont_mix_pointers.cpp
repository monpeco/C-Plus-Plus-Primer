#include <iostream>
#include <vector>
#include <memory>

using namespace std;

void process(shared_ptr<int> ptr){
  cout << "use the shared_ptr" << endl;
}  // ptr goes out of scope and is destroyed

int main(){
  shared_ptr<int> p(new int(42));     // reference count is 1
  process(p);                         // copying p increments its count; in process the reference count is 2
  int i = *p;       // Ok: reference count is 1
  cout << "i: " << i << endl;
  
  int *x(new int(42));   // dangerous: x is a plain pointer, not a smart
  //process(x);            // error: cannot convert int* to shared_ptr<int>
  
  process(shared_ptr<int>(x));  // legal, but the memory will be deleted!
  
  return 0;
}