#include <iostream>

// each function has a single parameter of type const int*
void print1(const int*);

int main(){
  
  int i[] = {1,2,3,4,5,6,7,8,9,0};
  
  print1(i);
  
  return 0;
}

void print1(const int* i){
  std::cout << *i << std::endl;
}



/*
Output:

1
*/