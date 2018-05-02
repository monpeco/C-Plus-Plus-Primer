#include <iostream>
#include <string>

bool isShorter(const std::string &s1, const std::string &s2);

int main(){
  
  std::string s1 = "this is a string";
  std::string s2 = "other";

  std::cout << "s1: " << s1 << std::endl;
  std::cout << "s2: " << s2 << std::endl;

  isShorter(s1, s2);
  
  std::cout << "isShorter(s1, s2): " << isShorter(s1, s2) << std::endl;

  return 0;
}


bool isShorter(const std::string &s1, const std::string &s2){
  return s1.size() < s2.size();
}

/*
Output:

s1: this is a string
s2: other
isShorter(s1, s2): 0
*/