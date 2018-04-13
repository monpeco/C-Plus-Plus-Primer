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
  
  cout << "use auto in for" << endl;
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
  
  
  /*
  * more easily using begin and end functions
  */
  
  // p points to the first in ia
  cout << endl << "use begin and end functions" << endl;
  for(auto p1 = begin(ia); p1 != end(ia); ++p1){
    for(auto q1 = begin(*p1); q1 != end(*p1); ++q1){
      cout << *q1 << ' ';
    }
    cout << endl;
  }
  
  /*
  * type aliases simplify pointers to multidimensional arrays
  */
  
  cout << endl << "use type aliases" << endl;
  
  using int_array = int[4];
  
  typedef int int_array[4];
  
  for(int_array *p2 = ia; p2 != ia + 3; ++p2){
    for(int *q2 = *p2; q2 != *p2 + 4 ; ++q2){
      cout << *q2 << ' ';
    }
    cout << endl;
  }
  
  return 0;
}

/* Output:

use auto in for
10 11 12 13 
14 15 16 17 
18 19 20 21 

use begin and end functions
10 11 12 13 
14 15 16 17 
18 19 20 21 

use type aliases
10 11 12 13 
14 15 16 17 
18 19 20 21
*/