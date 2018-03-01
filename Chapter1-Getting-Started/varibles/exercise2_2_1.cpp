#include <iostream>

std::string global_str;
int global_int;

int main(){
  
  // std::cin >> int input_value;         // Error: can't use the declaration types when you're calling the functions
   int i = { 3.14 };                      // warning: narrowing conversion of ‘3.1400000000000001e+0’ from ‘double’ to ‘int’ inside { } [-Wnarrowing]
  // double salary = wage = 9999.99;      // error: ‘wage’ was not declared in this scope
  int j = 3.14;                           // No warning but i = 3
  
  
  int local_int;
  std::string local_str;

  std::cout << "global_str: " << global_str << std::endl;
  std::cout << "global_int: " << global_int << std::endl;
  std::cout << "local_int: " << local_int << std::endl;
  std::cout << "local_str: " << local_str << std::endl;

  std::cout << "i: " << i << std::endl;
  std::cout << "j: " << j << std::endl;

  return 0;
}

/*
Output:

global_str: 
global_int: 0
local_int: 0
local_str: 
i: 3
j: 3

*/