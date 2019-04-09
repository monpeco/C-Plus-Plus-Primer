#include <iostream>

class HasPtr {
public:
  HasPtr(const std::string &s = std::string()) :
    ps(new std::string(s)), i(0) {}
    
    //each HasPtr has its own copy of the string to which ps points
    HasPtr(const HasPtr &p) :
      ps(new std::string(*p.ps)), i(p.i) {}
      
    HasPtr& operator=(const HasPtr &);
    ~HasPtr() { delete ps; }
    
private:
  std::string *ps;
  int i;
};

int main(){
    
    
    
    return 0;
}