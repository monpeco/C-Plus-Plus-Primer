#include <cstdlib>
#include <iostream>

auto func(int i) -> int(*) [10];

int array[10] = {9,8,7,6,5,4,3,2,1,0};
int (*pArray)[10] = &array;

int main(int argc, char* argv[]){
  std::cout << "first: "  << (*func(0))[0] << std::endl;
  std::cout << "second: " << (*func(0))[1] << std::endl;
  std::cout << "third: "  << (*func(0))[2] << std::endl;
  
}

auto func(int i) -> int(*) [10]{
  return pArray;
}
/*
Output:

first: 9
second: 8
third: 7

*/
