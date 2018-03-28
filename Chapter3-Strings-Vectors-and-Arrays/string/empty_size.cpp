#include <iostream>
#include <string>

int main(){
  
  std::string line;
  
  while( getline(std::cin, line) ){
    if (!line.empty()){
      std::cout << "line: " << line << std::endl;
    }else{
      std::cout << "Opps this line is empty"<< std::endl;
    }
    
    if (line.size() > 10){
      std::cout << "long line!!!" << std::endl;
    }
    
    //size returns a string::size_type value.
    
  }
  
  return 0;
}