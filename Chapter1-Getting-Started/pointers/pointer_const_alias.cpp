#include <iostream>
#include <typeinfo>

int main(){
  
  typedef char* pstring;                // Pointer to char
  const pstring cstr = 0;               // const pointer to char
  const pstring *ps;                    // pointer to a constant pointer to char

  /* The base type in these declarations is const pstring. As usual, a const that appears in
  *  the base type modifies the given type. The type of pstring is "pointer to char". So,
  *  const pstring is a constant pointer to char - not a pointer to const char 
  */

  return 0;
}
