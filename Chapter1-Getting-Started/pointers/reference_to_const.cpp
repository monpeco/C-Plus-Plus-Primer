/*
* reference to const  is a reference that refers to a const type
*/

#include <iostream>

int main(){
  const int ci = 1024;
  const int &ri = ci;
  
  //ri = 42;                //reference_to_const.cpp:11:6: error: assignment of read-only reference ‘ri’
  
  //int &r2 = ci;           //reference_to_const.cpp:13:13: error: invalid initialization of reference of type ‘int&’ from expression of type ‘const int’
  
  return 0;
}