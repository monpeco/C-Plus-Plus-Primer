#include <iostream>
#include <string>


int main(){
  
  // 3.2.1. Defining and Initializing strings
  
  std::string s1;             // default initialization, s1 is the empty string
  std::string s2 = s1;        // s2 is a copy of s1
  std::string s3 = "";        // s3 is a copy of the string literal
  std::string s4(10, 'c');    // s4 is cccccccccc
  
  // Direct and Copy Forms of Initialization
  
  std::string s5 = "Hi";      // copy initialization
  std::string s6("HI");       // direct initialization
  std::string s7(5, 'h');     // direct initialization
  
  // We can use 
  
  std::string s8 = std::string(10, 'c');
  
  return 0;
}