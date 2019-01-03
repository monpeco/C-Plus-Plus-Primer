#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> c = {11, 2, 5, 10, 9, 7, 5};
  
  int e = c.back();        // Returns a reference to the last element in c
  cout << e << endl;
  
  e = c.front();           // Returns a referente to the first element in c
  cout << e << endl;
  
  int n = 3;  
  e = c[n];                // Returns a reference to the element indexed by the unsigned integral value n. 
  cout << e << endl;
    
  e = c.at(n);             // Returns a reference to tha element indexed by n. If the index is out of range, throws an `out_of_range` exception
  cout << e << endl;
  
  
  return 0;
}

/*
Output:

5
11
10
10

*/