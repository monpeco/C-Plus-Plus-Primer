#include <memory>

int main(){
  
  std::unique_ptr<double> p1;            // unique_ptr that can point to a double
  std::unique_ptr<int> p2(new int(42));  // p2 points to a int with value 42
   
  return 0;
}