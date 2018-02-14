#include <iostream>

int main(){
  int sum = 0, value = 0;
  
  while(std::cin >> value)
    sum += value;
  
  std::cout << "Sum is " << value << std::endl;
  return 0;
}

/* Outuput:

2 3 4 5 
Sum is 5

*/