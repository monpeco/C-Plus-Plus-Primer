#include <iostream>
#include <vector>


using namespace std;

int main(){
  constexpr size_t rowCnt = 3, colCnt = 4;
  int ia[rowCnt][colCnt];   // 12 uninitialized elements
  // for each row
  for (size_t i = 0; i != rowCnt; ++i) {
      // for each column within the row
      for (size_t j = 0; j != colCnt; ++j) {
          // assign the element's positional index as its value
          ia[i][j] = i * colCnt + j;
      }
  }
  return 0;
}

/*
Output:

*/