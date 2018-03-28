#include <iostream>
#include <string>

int main(){
  
  std::string s;
  
  std::cin >> s;
  
  std::cout << "s: " << s << std::endl;
  
  
  
  std::string s1, s2;
  
  std::cin >> s1 >> s2;
  
  std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;
  
  
  std::string word;
  
  while(std::cin >> word){
    std::cout << "word: " << word << std::endl; 
  }
  
  return 0;
}