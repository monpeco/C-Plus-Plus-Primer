#include <iostream>
#include <vector>

using namespace std;

int main(){
  
  vector<int> v, v1, v2;
  int i = 0;
  int n = 0;
  
  cout << v.empty() <<endl;     // Returns true if v is empty

  cout << v.empty() <<endl;     // Returns the number of elements in v

  v.push_back(i);               // Adds an element with value i at the end

  cout << v[n] <<endl;          // Returns a reference to the element at position n in v
  
  v1 = v2;                      // Replace the elements in v1 with a copy of the elements in v2

  v1 = {n, i};                  // C++11 - Replace the elements in v1 with a copy of the elements in the comma-separeted list
  
  cout << (v1 == v2) <<endl;      // v1 and v2 are equal if they have the same number of elements and 
                                // each element in v1 is equal to the corresponding element in v2

  cout << (v1 != v2) <<endl; 

  cout << (v1 < v2) <<endl; 

  cout << (v1 <= v2) <<endl; 

  cout << (v1 > v2) <<endl; 

  cout << (v1 >= v2) <<endl; 

  return 0;
}
