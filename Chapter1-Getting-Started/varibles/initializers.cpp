#include <iostream>

double applyDiscount(double price, double discount);
  
int main(){
  
  // Initialization happens when a variable is give a value when it is created.
  // Using a initialized variable to initialize another
  double price = 109.99, discount = price * 0.15;
  
  //ok: call applyDiscount and use the return value to initialize salePrice
  double salePrice = applyDiscount(price, discount);
  
  std::cout << "price: " << price
            << ", discount: " << discount << std::endl;
  
  std::cout << "salePrice: " << salePrice << std::endl;
  
  return 0;
}

double applyDiscount(double price, double discount){
  return price - discount;
}
/*
Output:

price: 109.99, discount: 16.4985
salePrice: 93.4915

*/