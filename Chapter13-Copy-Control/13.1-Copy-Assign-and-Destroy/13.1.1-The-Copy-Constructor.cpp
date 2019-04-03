#include <iostream>

class Foo{
  public:
    Foo(){ std::cout << "default constuctor \n"; };
    Foo(const Foo&){ std::cout << "copy constuctor \n"; };
};

int main(){
    Foo f1;
    Foo f2(f1);
    
    return 0;
}