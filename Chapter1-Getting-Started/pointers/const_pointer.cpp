#include <iostream>

int main(){
  
  int errNumb = 2;
  int *const curErr = &errNumb;
  /*
  int errNumb = 0;
  int *const curErr = &errNumb;  // curErr will always point to errNumb
  const double pi = 3.14159;
  const  double  *const  pip  =  &pi;  //  pip  is a  const  pointer to a  const object
  */
  std::cout << "errNumb: " << errNumb << std::endl;
  std::cout << "*curErr: "<< *curErr << std::endl;
  std::cout << "curErr: "<< curErr << std::endl;
  
  *curErr = 9;
  std::cout << "errNumb: " << errNumb << std::endl;
  std::cout << "*curErr: "<< *curErr << std::endl;
  std::cout << "curErr: "<< curErr << std::endl;
  
  // curErr = nullptr; // const_pointer.cpp:22:10: error: assignment of read-only variable ‘curErr’

  return 0;
}

/*
Output:

errNumb: 2
*curErr: 2
curErr: 0x7ffd7f39dfb4
errNumb: 9
*curErr: 9
curErr: 0x7ffd7f39dfb4

*/