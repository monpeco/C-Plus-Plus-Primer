#include <iostream>

bool str_subrange(const std::string &str1, const std::string &str2);

int main(int argc, char *argv[]){
  
  std::cout << str_subrange("","3") << std::endl;
  
  return 0;
}

bool str_subrange(const std::string &str1, const std::string &str2){
  
  // same size, returns normal equality
  if (str1.size() == str2.size())
    return str1 == str2;    //ok: return bool
  
  // find the size of the smallest
  auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

  for(decltype(size) i = 0; i != size; ++i){
    if (str1[i] != str2[i])
      return;  // error #1: no return value 
  }
  
  // error #2: control migth flow off the end of the function without a return
  // the compiler might not detect this error
}

/*
Output:


*/

