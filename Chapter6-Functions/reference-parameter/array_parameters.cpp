#include <iostream>

// each function has a single parameter of type const int*
void print1(const int*);

int main(){
  
  int i[] = {10,22,30,44,50,66,70,88,99,100};
  
  print1(i);
  
  return 0;
}

void print1(const int* i){
  std::cout << *i << std::endl;
  std::cout << *i+5 << std::endl;
  std::cout << *(i+5) << std::endl;
}



/*
Output:

10
15
66

*/