#include <iostream>

int main(){
  std::cout << "Exercise 1.8: Indicate which, if any, of the following output statements are legal: " << std::endl;
  std::cout << "/*" << std::endl;
  std::cout << "*/" << std::endl;
  //std::cout <<  /* "*/" */ << std::endl; Ilegal
  std::cout << /* "*/" /* "/*" */  << std::endl;
  
  return 0;
}

/* 

Output:
/*
*/
 /* 

*/