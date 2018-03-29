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
  
  
  // Change to upper case a string. We must use a reference variable in the for loop
  std::string w("Hello World!!!");
  
  for(auto &c : w)
    c = toupper(c);
    
  std::cout << w << std::endl;
  
  
  return 0;
}