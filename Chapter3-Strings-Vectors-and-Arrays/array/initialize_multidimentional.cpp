#include <iostream>
#include <vector>


using namespace std;

int main(){
  int ia[3][4] = {
    {0,  1,  2,  3},
    {4,  5,  6,  7},
    {8,  9,  10, 11}
  };

  int ia2[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
  
  //  We can initialize only the first element of each row as follows:
  
  int ia3[3][4] = {{0} , {4} , {8}};
  
  // explicitly initialize row 0; the remaining elements are value initialized
  
  int ia4[3][4] = {0,3,6,9};

  return 0;
}

/*
Output:

*/