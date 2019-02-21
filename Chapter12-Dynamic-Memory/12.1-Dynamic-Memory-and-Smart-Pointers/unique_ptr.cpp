#include <iostream>
#include <memory>

using namespace std;

int main(){
  unique_ptr<int> p1;
  unique_ptr<int> p2(new int(42));

  return 0;
}