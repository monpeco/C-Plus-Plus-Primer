#include <iostream>
#include <vector>
#include <memory>
#include "StrBlob.h"

using namespace std;

class StrBlobPtr{
public:
  StrBlobPtr(): curr(0) {}
  StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) { }
private:
  weak_ptr<vector<string>> wptr;
  size_t curr;      // current position within the array
};

int main(){


  return 0;
}