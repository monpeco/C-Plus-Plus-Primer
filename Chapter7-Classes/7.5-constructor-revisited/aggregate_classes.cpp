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
  
  // we can initialize the data members of an aggregate class by prividing a braced list of member initializers
  Data val1 = {0, "Anna"};
  cout << val1.ival << " " << val1.s << '\n';

  Data val2 = {0};
  cout << val2.ival << " " << val2.s << '\n';

  Data val3 = {0, "Anna", "Joe"}; //  error: too many initializers for ‘Data’
  cout << val3.ival << " " << val3.s << '\n';


  return 0;
}