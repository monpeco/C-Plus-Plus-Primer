#include <iostream>

int main(){

  int i = 0;
  //double* dp = &i;      //exercise_2_21.cpp:6:17: error: cannot convert ‘int*’ to ‘double*’ in initialization
  //int *ip = i;          //exercise_2_21.cpp:7:13: error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
  int *p = &i;
  
  return 0;
}

