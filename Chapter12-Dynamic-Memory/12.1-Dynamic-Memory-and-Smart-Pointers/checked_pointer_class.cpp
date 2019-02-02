#include <iostream>
#include <vector>
#include <memory>
#include "StrBlob.h"

using namespace std;

class StrBlobPtr{
public:
  StrBlobPtr(): curr(0) {}
  StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) { }
  std::string& deref() const;
  StrBlobPtr& incr();       // prefix version
  
private:
  // check returns a shared_ptr to the vector if the check succeeds
  shared_ptr<vector<string>> check(size_t, const string&) const;
  // store a weak_ptr, which means the underlying vector might be destroyed
  weak_ptr<vector<string>> wptr;
  size_t curr;      // current position within the array
};

shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const{
  auto ret = wptr.lock();    // is the vector still around?
  if(!ret){
    throw runtime_error("Unbound StrBlobPtr");
  }
  if(i >= ret->size()){
    throw out_of_range(msg);
  }
  return ret;
}

int main(){


  return 0;
}