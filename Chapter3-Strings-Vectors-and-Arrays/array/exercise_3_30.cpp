#include <iostream>

using namespace std;

int main(){
  
  constexpr size_t array_size = 10;
  
  int ai[array_size];
  
  for(size_t ix = 1; ix <= array_size ; ++ix){  // Error1: ix should start with 0
    ai[ix] = ix;                                // Error2: ix should not end in array_size (should be array_size - 1)
  }
  
  return 0;
}