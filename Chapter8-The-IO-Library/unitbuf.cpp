#include <iostream>

int main(){
  
  std::cout << std::unitbuf;  // all writes will be flushed immediately

  // any output is flushed immediately, no buffering

  std::cout << std::nounitbuf;     // returns to normal buffering
  
  return 0;
}