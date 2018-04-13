#include <iostream>


int main(){
  
  int ia[3][4];       // array of size 3; each element is an array of ints of size 4
  int (*p)[4] = ia;   // p points to an array of four ints
  p = &ia[2];         // p now points to the last element in ia
  
  // The parentheses in this declaration are essential:
  int *ip1[4];      // array of pointers to int
  int (*ip2)[4];    // pointer to an array of four ints


  
  return 0;
}