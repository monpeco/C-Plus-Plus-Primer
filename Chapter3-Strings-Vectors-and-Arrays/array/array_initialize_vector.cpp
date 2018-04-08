#include <iostream>
#include <vector>


using namespace std;

int main(){
  int int_array[] = {1,2,3,4,5};
  
  vector<int> ivec (begin(int_array), end(int_array)); // C++11: ivec has six elements; each is a copy of the corresponding element in int_arr
  
  for(auto e : ivec){
    cout << "ivec: " << e << endl;
  }
  
  vector<int> subVec (int_array + 1 , int_array + 3);
  
  for(auto e : subVec){
    cout << "subVec: " << e << endl;
  }
  
  return 0;
}

/*
Output:
ivec: 1
ivec: 2
ivec: 3
ivec: 4
ivec: 5
subVec: 2
subVec: 3
*/