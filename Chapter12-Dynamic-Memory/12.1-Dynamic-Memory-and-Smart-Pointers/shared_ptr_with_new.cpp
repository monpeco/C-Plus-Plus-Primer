#include <memory>

using namespace std;


shared_ptr<int> clone(int p){
  return new int(p);  // error: implicit convertion to shared_ptr
}

shared_ptr<int> clone(int p){
  return shared_ptr<int>(new int(p));
}

int main(){
  
  shared_ptr<double> p1;                // shared_ptr that can point to a double
  shared_ptr<int> p2(new int(42));      // p2 points to a int of value 42
  
  // shared_ptr<int> p3 = new int(1024);  // error: must use direct initialization
  shared_ptr<int> p4(new int(42));        // ok: uses direct initialization
  
  return 0;
}