#include <iostream>

int main(){
  
  int ia[] = {0,2,4,6,8};       // array with five elements of type int
  int last = *(ia + 4);         // initializes last to 8, the value of ia [4]
  int added = *ia + 4;          // last = 4, equivalent to ia [0] + 4
  
  std::cout << "last: " << last << std::endl;
  std::cout << "added: " << added << std::endl;
  
  return 0;
}

