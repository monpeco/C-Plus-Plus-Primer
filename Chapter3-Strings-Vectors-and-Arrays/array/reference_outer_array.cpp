#include <iostream>
#include <vector>


using namespace std;

int main(){
  
  constexpr size_t rowCnt = 3, colCnt = 4;
  int ia[rowCnt][colCnt];

  for (size_t i = 0; i != rowCnt; ++i) {
      for (size_t j = 0; j != colCnt; ++j) {
          ia[i][j] = i * colCnt + j;
      }
  }
  
  for (const auto &row : ia){     // for every element in the outer array
    for (auto col : row)          // for every element in the inner array
      cout << col << " ";
    cout << endl;
  }
  
  // for (auto row : ia)
    // for (auto col : row)       // Error
        // cout << col << " ";
      
  /*
  * Because row is not a reference, when the compiler
  * initializes row it will convert each array element (like any other object of array type)
  * to a pointer to that array’s first element. As a result, in this loop the type of row is
  * int*. The inner for loop is illegal. Despite our intentions, that loop attempts to
  * iterate over an int*.
  */
  
  return 0;
}

/*
Output:
0 1 2 3 
4 5 6 7 
8 9 10 11 
*/