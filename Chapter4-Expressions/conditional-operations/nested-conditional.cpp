#include <iostream>
#include <string>


int main(){
  
  int grade = 100;
  
  std::string myGrade = (grade > 60) ? "pass" : "fail";
  std::cout << "myGrade: " << myGrade << std::endl;
  
  std::string finalGrade = (grade > 90)  ? "High Pass" 
                                          : (grade < 60) ? "fail" : "pass";
  std::cout << "finalGrade: " << finalGrade << std::endl;
  
  return 0;
}