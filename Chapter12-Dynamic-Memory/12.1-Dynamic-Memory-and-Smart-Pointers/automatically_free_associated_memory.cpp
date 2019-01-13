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

shared_ptr<Foo> factory(){
  return make_shared<Foo>(4);
}

int main(){
  auto p = factory();
  p->print_bar();
  p = nullptr;
  
  return 0;
}