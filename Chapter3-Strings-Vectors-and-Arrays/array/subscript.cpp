#include <iostream>
#include <string>

using namespace std;

int main(){
  
  int ia[] = {0,2,4,6,8};     // array with 5 elements of type int
  
  // When we subscript an array, we are really subscripting a pointer to an element in that array:
  int i = ia[2];              // ia is converted to a pointer to the first element in ia
                              // ia[2] fetches the element to which (ia + 2) points
  
  int *p = ia;                // p points the first element in ia
  
  i = *(p + 2);               // equivalent to ia[2];
  
  // We can use the subscript operator on any pointer, as long as that pointer points to an element (or ona past the last element) in an array:
  int *q = &ia[2];            // q points to the element indexed by 2
  int j = q[1];               // q[1] is equivalent to *(q + 1),
                              // q[1] is the same element as ia[3]
  
  int k = q[-2];              // q[-2] is equivalent to ia[0]
  
  /*
  * This last example points out an important difference between arrays and library
  * types such as vector and string that have subscript operators. The library types
  * force the index used with a subscript to be an unsigned value. The built-in subscript
  * operator does not. The index used with the built-in subscript operator can be a
  * negative value. Of course, the resulting address must point to an element in (or one
  * past the end of) the array to which the original pointer points.
  */
  
  
  return 0;
}