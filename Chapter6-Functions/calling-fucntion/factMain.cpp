//main 

#include <iostream>
#include "Chapter6.h"

int main(){
  
  std::cout << "Output: " << fact(5) << std::endl;
  
  return 0;
}

/*
g++ -c factMain.cpp
  factMain.o

g++ -c fact.cpp 
  fact.o

g++ factMain.o fact.o 
  a.out*

g++ factMain.o fact.o -o main
  main*

*/