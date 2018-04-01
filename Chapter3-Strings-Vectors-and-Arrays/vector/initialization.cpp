#include <vector>
#include <string>

using std::vector;
using std::string;

class T{
  int field;
}val, a, b, c;

int n = 5;

int main(){
  
  vector<T> v1;                   // vector that holds objects of type T. Default initializacion v1 is empty
  
  vector<T> v2(v1);               // v2 has a copy of each element in v1
  
  vector<T> v22 = v1;             // equivalent to v2(v1), v22 is a copy of each elment in v1
  
  vector<T> v3(n, val);           // v3 n elements with the value val
  
  vector<T> v4(n);                // v4 has n copies of the value-initialized value

  vector<T> v5{a,b,c};            // c++11 v5 has as many elements as there are initializers; elements are initialized by corresponding initializers

  vector<T> v55 = {a,b,c};        // c++11 v4 has n copies of the value-initialized value


  return 0;
}
