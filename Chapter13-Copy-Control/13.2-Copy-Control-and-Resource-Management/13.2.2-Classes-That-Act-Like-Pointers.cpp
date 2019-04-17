#include <iostream>
#include <string>

class HasPtr {
public:
    // constructor allocates a new string and a new counter, which it sets to 1
    HasPtr(const std::string &s = std::string()):
            ps(new  std::string(s)),  i(0), use(new std::size_t(1)) {}
    // copy constructor copies all three data members and increments the counter
    HasPtr(const HasPtr &p):
        ps(p.ps), i(p.i), use(p.use) { ++*use; }
    HasPtr& operator=(const HasPtr&);
    ~HasPtr();
private:
    std::string *ps;
    int    i;
    std::size_t *use;   // member to keep track of how many objects share *ps
};

HasPtr::~HasPtr()
{
    if (--*use == 0) {    // if the reference count goes to 0
        delete ps;        // delete the string
        delete use;       // and the counter
    }
}


int main(){
    
    
    
    return 0;
}