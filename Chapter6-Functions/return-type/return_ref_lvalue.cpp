#include <iostream>

char &get_val(std::string &str, std::string::size_type ix);

int main(int argc, char *argv[]){
  
  std::string name1 = "histogram";
  std::string::size_type index = 5;
  
  std::cout << "The char is " << get_val(name1, index) << std::endl;
  
  
  /*Whether a function call is an lvalue (§ 4.1.1, p. 135) depends on the return type of
  the function. Calls to functions that return references are lvalues; other return types
  yield rvalues. A call to a function that returns a reference can be used in the same
  ways as any other lvalue. In particular, we can assign to the result of a function that
  returns a reference to nonconst:
  */
  
  std::string s("a value");
  std::cout << s <<  std::endl;
  get_val(s, 0) = 'A';
  std::cout << s <<  std::endl;

  return 0;
}

char &get_val(std::string &str, std::string::size_type ix){
  return str[ix];
}

/*
Output:

The char is g
a value
A value
*/

