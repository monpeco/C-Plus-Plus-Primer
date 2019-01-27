#include <iostream>
#include <memory>

using std::make_shared;
using std::weak_ptr;

int main(){
  auto p = make_shared<int>(42);
  weak_ptr<int> wp(p);            //  wp  weakly  shares  with  p;  use  count  in  p  is unchanged
  
  return 0;
}