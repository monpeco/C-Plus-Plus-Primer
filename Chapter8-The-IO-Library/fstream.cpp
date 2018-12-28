#include <iostream>
#include <fstream>

int main(int argc, char **argv){
  
  std::cout << "argv 0: " << *argv << std::endl;
  std::cout << "argv 1: " << *(argv+1) << std::endl;
  
  std::ifstream is(*(argv+1));
  std::ofstream output(*(argv+2));
  
  return 0;
}



