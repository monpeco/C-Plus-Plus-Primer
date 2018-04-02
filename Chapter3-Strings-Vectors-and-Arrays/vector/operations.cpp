#include <iostream>
#include <vector>

using namespace std;

int main(){
  
  vector<int> v;
  int i = 0;
  
  cout << v.empty() <<endl;     // Returns true if v is empty

  cout << v.empty() <<endl;     // Returns the number of elements in v

  v.push_back(i);               // Adds an element with value i at the end

  
  return 0;
}
