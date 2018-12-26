#include <iostream>

using namespace std;
// A class is an aggregate if:
// 1. All of its data members are public
// 2. It does not define any constructors
// 3. It has not in-class initializers
// 4. It has no base classes or virtual functions

struct Data{
  int ival;
  string s;
};

int main(){
  Data val1 = {0, "Anna"};
  cout << val1.s << '\n';
  
  return 0;
}