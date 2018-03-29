#include <iostream>
#include <string>

int main(){

  std::string str("some string");
  
  if(!str.empty())
    std::cout << str[0] << std::endl;
    

  if(!str.empty())
    str[0] = toupper(str[0]);
    
    std::cout << "str: " << str << std::endl;
    
    
  return 0;
}