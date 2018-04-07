#include <iostream>
#include <string>

using namespace std;

int main(){
  
  string nums[] = {"one", "two", "three"};    // Array of strings
  string *p = &nums[0];                       // p points to the first element in the array
  string *p1 = nums;                          // equivalent to *p = &nums[0]
  
  // Whe we use a array as initializer for auto variables, the deduced type is pointer
  int ia[] = {0,1,2,3,4,5,6,7,8,9};
  auto ia2(ia);     // ia2 is a pointer to int, that points to the first element in ia
  //ia2 = 42;       invalid conversion from ‘int’ to ‘int*’
  
  // Convertion does not happens on decltype
  // The type returned by decltype(ia) is an array of 10 ints
  decltype(ia) ia3 = {0,1,2,3,4,5,6,7,8,9};
  //ia3 = p;          // Error: cant assign a int* to an array
  ia3[4] = 8;
  
  return 0;
}