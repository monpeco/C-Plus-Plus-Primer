#include <iostream>

int get_value();

int array[] = {40,50,80,90,42,80,70};
int index = 0;

int main(){
  
  int i = get_value();  
  std::cout << "i: " << i << "(outside)" << std::endl;
  
  while (i != 42) {
      i = get_value();  // get remaining values
      std::cout << "i: " << i << std::endl;
  }
  
  std::cout << "Exit!" << std::endl;

  // A better way to write the loop
  index = 0;
  while((i = get_value()) != 42){
    std::cout << "i: " << i << std::endl;
  }
  
  std::cout << "Exit again!" << std::endl;

  return 0;
}

int get_value(){
  return array[index++%5];
}