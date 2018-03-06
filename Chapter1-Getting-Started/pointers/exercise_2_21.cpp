#include <iostream>

int main(){

  int i = 1;
  //double* dp = &i;      //exercise_2_21.cpp:6:17: error: cannot convert ‘int*’ to ‘double*’ in initialization
  //int *ip = i;          //exercise_2_21.cpp:7:13: error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
  int *p = &i;
  
  if (p) std::cout << "p: " << p << std::endl;
  if (*p) std::cout << "*p: " << *p << std::endl;
  
  int i2 = 42; 
  void *p2 = &i2; 
  //long *lp2 = &i2;      //exercise_2_21.cpp:15:16: error: cannot convert ‘int*’ to ‘long int*’ in initialization
  
  return 0;
}

