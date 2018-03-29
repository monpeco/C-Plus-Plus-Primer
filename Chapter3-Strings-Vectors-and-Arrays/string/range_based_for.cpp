#include <iostream>
#include <string>

int main(){

  std::string str("some string");
  
  for(auto c : str)  // C++11
    std::cout << c << std::endl;
  
  // count the puntuation characters
  std::string s("Hello world!!!");
  
  decltype(s.size()) punct_cnt = 0;
  
  for(auto c : s)
    if( ispunct(c) )
      ++punct_cnt;
  
  std::cout << punct_cnt << " punctuation characters in " << s << std::endl;
  
  return 0;
}