#include <iostream>
#include <vector>
#include <memory>

using namespace std;


int main(){
  shared_ptr<double> p1;              // shared pointer that can point to a double
  shared_ptr<int> p2(new int(42));    // p2 points to a int with value 42
  
  //shared_ptr<int> p3 = new int(1024);  // error: must use direct initialization

  return 0;
}