#include <iostream>
#include <string>

int main(){
  
  std::string line;
  
  while( getline(std::cin, line) ){
    std::cout << "line: " << line << std::endl;
  }
  
  // The newline that causes getline to return is discarded; the newline is  not stored in the string.
  
  return 0;
}