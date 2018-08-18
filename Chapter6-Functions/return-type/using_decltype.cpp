#include <iostream>
#include <cstdlib>


int odd[] = {1,3,5,7,9};
int even[] = {2,4,6,8,10};
decltype(odd) *arrPtr(int i);

int main(int argc, char *argv[]){
  
  std::cout << (*arrPtr(1))[1] << std::endl;
  std::cout << (*arrPtr(1))[2] << std::endl;
  std::cout << (*arrPtr(2))[1] << std::endl;
  std::cout << (*arrPtr(2))[2] << std::endl;

  return EXIT_SUCCESS;
}

//returns a pointer to an array of five int elements
decltype(odd) *arrPtr(int i){
  return (i % 2) ? &odd : &even;
}

/*
Output:

3
5
4
6

*/
