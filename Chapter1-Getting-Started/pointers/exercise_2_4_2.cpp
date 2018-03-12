#include <iostream>

int main(){
  
  int i = 0;
  const int *const p3 = &i;
  //const int &const r2;                   //exercise_2_4_2.cpp:7:20: error: ‘const’ qualifiers cannot be applied to ‘const int&’
  const int i2 = i, &r = i;
  std::cout << "i: " << i << std::endl;

  return 0;
}
