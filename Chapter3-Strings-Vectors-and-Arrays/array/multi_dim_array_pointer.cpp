#include <iostream>

using namespace std;

int main(){
  
  int ia[3][4];       // array of size 3; each element is an array of ints of size 4
  int (*p)[4] = ia;   // p points to an array of four ints
  p = &ia[2];         // p now points to the last element in ia
  
  // The parentheses in this declaration are essential:
  int *ip1[4];      // array of pointers to int
  int (*ip2)[4];    // pointer to an array of four ints


  /*
  * With the advent of c++11, we can often avoid having to write the type of a 
  * pointer into an array by using auto of decltype
  */

  int count = 10;
  for(auto p = ia; p != ia + 3; ++p){
    for(auto q = *p; q != *p + 4; ++q){
      *q = count;
      count++;
    }
  }
  
  for(auto p = ia; p != ia + 3; ++p){
    for(auto q = *p; q != *p + 4; ++q){
      cout << *q << ' ';
    }
    cout << endl;
  }
  
  return 0;
}