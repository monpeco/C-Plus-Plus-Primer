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


  int  *x(new  int(1024));      //  dangerous:  x  is  a  plain  pointer,  not  a smart pointer
  //process(x);                 // error: cannot convert int* to shared_ptr<int>
  process(shared_ptr<int>(x));  // legal, but the memory will be deleted!
  int j = *x;                   // undefined: x is a dangling pointer!

  shared_ptr<int> p2(new int(42));   // reference count 1
  int *q = p2.get();                       // ok:but dont use in a way that might delete this pointer
  {   // new block
    // undefined: two differents shared_ptr point to the same memory
    shared_ptr<int>(q);
    
  }  // block ends, q is destroyed and the memory to which q points is freed
  int foo = *p2;  // undefined, the memory to which p2 points has be freed

  return 0;
}