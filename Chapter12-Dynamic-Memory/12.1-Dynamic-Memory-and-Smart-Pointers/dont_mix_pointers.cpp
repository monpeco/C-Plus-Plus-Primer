#include <memory>

using namespace std;

// ptr is created and initialized when process is called
void process(shared_ptr<int> ptr)
{
    // use ptr
} // ptr goes out of scope and is destroyed

int main(){
  
  shared_ptr<int> p(new int(42)); // reference count is 1
  process(p); // copying p increments its count; in process the reference count is 2
  int i = *p; // ok: reference count is 1

  return 0;
}