#include <iostream>
#include <initializer_list>

void error_msg(std::initializer_list<std::string> il);

void error_msg(int type, std::initializer_list<std::string> il);

int main(int argc, char *argv[]){
  std::initializer_list<std::string> ls;    // initializer_list of strings
  std::initializer_list<int> li;            // initializer_list of ints
  
  error_msg({"functionX", "expected", "actual"});

  error_msg({"functionX", "expected", "actual", "wind", "high"});

  // sending another parameter
  error_msg(3, {"functionX", "expected", "actual", "wind", "high"});
  error_msg(7, {"functionX", "ex"});


  return 0;
}

void error_msg(std::initializer_list<std::string> il){
  for (auto beg = il.begin(); beg != il.end(); ++beg){
    std::cout << *beg << std::endl;
  }
  
  std::cout << std::endl;
  
}


void error_msg(int type, std::initializer_list<std::string> il){
  for (auto beg = il.begin(); beg != il.end(); ++beg){
    std::cout << *beg << std::endl;
  }
  
  std::cout << "type:" << type << std::endl << std::endl;
  
}

/*
Output:

functionX
expected
actual

functionX
expected
actual
wind
high

functionX
expected
actual
wind
high
type:3

functionX
ex
type:7

*/