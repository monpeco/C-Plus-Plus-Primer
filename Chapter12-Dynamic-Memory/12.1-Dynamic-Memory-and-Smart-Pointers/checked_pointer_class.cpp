#include <iostream>
#include <vector>
#include <memory>
#include "StrBlob.h"

using namespace std;


class StrBlobPtr{
public:
  StrBlobPtr(): curr(0) {}
  
  StrBlobPtr(StrBlob &a, size_t sz = 0):
    wptr(a.data), curr(sz) {}

  string& deref() const;

  StrBlobPtr& incr();     // prefix version
private:
  // check returns a shared_ptr to the vector if the check succeeds
  shared_ptr<vector<string>> check(size_t, const string&) const;

  // store a weak_ptr, which menas the underlying vector might be destroyed
  weak_ptr<vector<string>> wptr;
  
  std::size_t curr;    // current position within the array
};

int main(){
  auto p = make_shared<int>(42);
  weak_ptr<int> wp(p);    // wp weakly shares with p; use count in p is unchanged
  
  if (shared_ptr<int> np = wp.lock()){    // true if np is not null
    // inside the if, np shares its object with p
  }
}