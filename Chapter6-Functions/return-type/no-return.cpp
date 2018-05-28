#include <iostream>

void swap(int &v1, int &v2);

int main(int argc, char *argv[]){

  int a = 4, b = 8;
  
  std::cout << "a: [" << a << "] , " << "b: [" << b << "]" << std::endl;
  
  swap(a, b);

  std::cout << "a: [" << a << "] , " << "b: [" << b << "]" << std::endl;

  return 0;
}

void swap(int &v1, int &v2){
  // if the values are already the same, no need to swap, just return
  if (v1 == v2)
    return;
  // if we're here, there's work to do
  int tmp = v2;
  v2 = v1;
  v1 = tmp;
  // no explicit return necessary
}

/*
Output:

a: [4] , b: [8]
a: [8] , b: [4]

*/

