#include <iostream>
#include <string>

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

HasPtr& HasPtr::operator=(const HasPtr &rhs){
    auto newp = new std::string(*rhs.ps);      // copy the underlying string
    delete ps;        // free the old memory
    ps = newp;        // copy data from rhs into this object
    i = rhs.i;
    return *this;     // return this object
}

// WRONG way to write an assignment operator!
//HasPtr& HasPtr::operator=(const HasPtr &rhs)
//{
//    delete ps;   // frees the string to which this object points
//    // if rhs and *this are the same object, we're copying from deleted memory!
//    ps = new string(*(rhs.ps));
//    i = rhs.i;
//    return *this;
//}

int main(){
    
    
    
    return 0;
}