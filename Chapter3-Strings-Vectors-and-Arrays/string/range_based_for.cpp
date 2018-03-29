#include <iostream>
#include <string>

int main(){

  std::string str("some string");
  
  for(auto c : str)  // C++11
    std::cout << c << std::endl;
  
  
  return 0;
}