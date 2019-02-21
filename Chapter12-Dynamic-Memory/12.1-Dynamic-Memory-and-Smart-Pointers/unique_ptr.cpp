#include <iostream>
#include <memory>

using namespace std;

int main(){
  unique_ptr<int> p1;
  unique_ptr<int> p2(new int(42));
  
  unique_ptr<string> ps1(new string("this is a string"));
  //unique_ptr<string> ps2(ps1);        ERROR: no copy for unique_ptr
  unique_ptr<string> ps3;
  //ps3 = ps1;                          ERROR: no assign for unique_ptr

  return 0;
}