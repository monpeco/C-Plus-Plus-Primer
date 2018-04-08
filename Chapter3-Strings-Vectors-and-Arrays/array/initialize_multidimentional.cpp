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

  // assigns the first element of arr to the last element in the last row of ia
  int arr[10][20][30] = {0}; // initialize all elements to 0
  ia4[2][3] = arr[0][0][0];
  int (&row)[4] = ia4[1]; // binds row to the second four-element array in ia

  return 0;
}

/*
Output:

*/