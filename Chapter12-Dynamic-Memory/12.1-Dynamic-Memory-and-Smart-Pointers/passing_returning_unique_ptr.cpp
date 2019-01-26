#include <iostream>
#include <memory>

using std::unique_ptr;
using std::string;
using std::cout;
using std::endl;


// there is one exception to the rule that we cannot copy a `unique_ptr`: we can copy
// or assing an `unique_ptr` that is about to be destroyed. The most common example is 
// when we return a `unique_ptr` from a function:
unique_ptr<int> clone(int p){
  // ok: explicitily create a unique_ptr<int> from a int*
  return unique_ptr<int>(new int(p));
}

unique_ptr<int> clone2(int p){
  unique_ptr<int> ptr(new int(p));
  return ptr;
}

int main(){
  
  unique_ptr<int> p(new int(42));
  unique_ptr<int> pclone = clone(8);
  cout << "*pclone: " << *pclone << endl;
  
  unique_ptr<int> pclone2 = clone2(15);
  cout << "*pclone2: " << *pclone2 << endl;

  return 0;
}