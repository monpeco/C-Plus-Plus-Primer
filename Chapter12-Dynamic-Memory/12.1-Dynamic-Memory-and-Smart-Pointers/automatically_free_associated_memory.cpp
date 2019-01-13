#include <iostream>
#include <memory>

using namespace std;

class Foo{
public:
  Foo(){};
  Foo(int b) : bar(b) {};
  void print_bar(){ std::cout << "bar: " << bar << endl; }
  
private:
  int bar;
};

// factory returns a shared_ptr pointing to a dynamucally allcoated object
shared_ptr<Foo> factory(){
  return make_shared<Foo>(4);   // shared_ptr will take care of deleting this memory
}

// Because factory returns a shared_ptr, we can be sure that the object
// allocated by factory will be freed when appropriate. For example, the
// following function stores the shared_ptr returned by factory in a local
// variable:
void use_factory(){
  shared_ptr<Foo> p = factory();
  p->print_bar();
  // use p
}       // p goes out of scope; the memory to which p points is automatically freed

// The memory will not be freed if there is any other shared_ptr pointing to it
shared_ptr<Foo> return_factory(){
  shared_ptr<Foo> p = factory();
  p->print_bar();
  return p;   // reference count is incremented when we return p
}   // p goes out of scope; the memory to which p points is not freed

int main(){
  
  use_factory();
  shared_ptr<Foo> p = return_factory();
  
  return 0;
}