#include <iostream>

int main(){
  
  // Initialization happens when a variable is give a value when it is created.
  // Using a initialized variable to initialize another
  double price = 109.99, discount = price * 0.15;
  
  std::cout << "price: " << price
            << ", discount: " << discount << std::endl;
  
  return 0;
}

/*
Output:

price: 109.99, discount: 16.4985

*/