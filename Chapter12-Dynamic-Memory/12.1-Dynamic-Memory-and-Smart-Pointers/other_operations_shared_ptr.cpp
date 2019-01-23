#include <memory>

using namespace std;


int main(){
  
  shared_ptr<int> p;
  //p = new int(1024);       // error: cannot assign a pointer to a shared_ptr
  p.reset(new int(1024));  // ok: p points to a new object

  return 0;
}