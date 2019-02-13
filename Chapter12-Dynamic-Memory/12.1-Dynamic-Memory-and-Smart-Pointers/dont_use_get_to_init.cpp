#include <iostream>
#include <vector>
#include <memory>

using namespace std;


int main(){
  shared_ptr<int> p(new int(42));
  int *q = p.get();     // // ok:  but  don't use  q  in  any  way  that  might  delete  its pointer
  
  return 0;
}