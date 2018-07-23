#include <iostream>

const std::string &shorterString(const std::string &s1, const std::string &s2);

int main(int argc, char *argv[]){
  
  std::string name1 = "Joe", name2 = "Frank";
  
  std::cout << "The shorter name is " << shorterString(name1, name2) << std::endl;
  
  return 0;
}

const std::string &shorterString(const std::string &s1, const std::string &s2){
  return s1.size() < s2.size() ? s1 : s2;
}

/*
Output:

The shorter name is Joe
*/

