/*
A type alias is a name that is a synonym for another type. Type aliases let us
simplify complicated type definitions, making those types easier to use. Type aliases
also let us emphasize the purpose for which a type is used.
*/
#include <iostream>

int main(){
  typedef double wages;
  typedef wages base, *p;
  
  wages w = 12.25;
  base b = 47.98;
  p p1 = &b;

  std::cout << "w: " << w << '\n';
  std::cout << "b: " << b << '\n';
  std::cout << "p1: " << p1 << '\n';
  std::cout << "*p1: " << *p1 << '\n';

  return 0;
}

/*
Output:

w: 12.25
b: 47.98
p1: 0x7ffcf6e3cfe8
*p1: 47.98

*/