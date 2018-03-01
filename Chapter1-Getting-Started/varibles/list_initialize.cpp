#include <iostream>

int main(){
  
  // Different types of initializers
  long double ld = 3.1415926536;
  int a = {ld};  // warning: narrowing conversion of ‘ld’ from ‘long double’ to ‘int’ inside { } [-Wnarrowing]
  int b{ld};     // warning: narrowing conversion of ‘ld’ from ‘long double’ to ‘int’ inside { } [-Wnarrowing]
  int c = ld;

  std::cout << "ld: " << ld << std::endl;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;

  return 0;
}

/*
Output:

ld: 3.14159
a: 3
b: 3
c: 3

*/