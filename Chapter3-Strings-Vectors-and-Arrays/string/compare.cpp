#include <iostream>
#include <string>

int main(){
  
  std::string str = "Hello";
  std::string phrase = "Hello World";
  std::string slang = "Haya";
  
  std::cout << "str < phrase: " << (str < phrase) << std::endl;
  std::cout << "phrase < slang: " << (phrase < slang) << std::endl;
  std::cout << "str < slang: " << (str < slang) << std::endl;
  
  return 0;
}