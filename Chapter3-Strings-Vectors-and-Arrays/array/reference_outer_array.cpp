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
  return 0;
}

/*
Output:
0 1 2 3 
4 5 6 7 
8 9 10 11 
*/