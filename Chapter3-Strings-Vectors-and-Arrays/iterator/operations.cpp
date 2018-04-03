#include <iostream>
#include <vector>

using namespace std;

class C{
  public:
  string mem = "string test";
};

int main(){
  
  vector<int> v = {8,2,3,5,9};
  
  vector<C> vc;
  C c1, c2, c3;
  c1.mem = "first";
  c3.mem = "last";
  vc.push_back(c1);
  vc.push_back(c2);
  vc.push_back(c3);
  
  
  auto iter = v.begin();            // The begin member returns an iterator that denotes the first element
  
  cout << *iter << endl;            // Return a pointer to the object denoted by the iterator
  
  auto iterCB = vc.begin(), iterCE = vc.end();
  
  cout << (*iterCB).mem << endl;
  cout << iterCB->mem << endl;      // Dereference iter and feches the member named mem from the underlying element. Equivalent to (*iterCB).mem

  ++iter;                           // Increments iter to refer to the next element in the container 
  cout << *iter << endl; 
  
  --iter;                           // Decrements iter to refer to the previous element in the container 
  cout << *iter << endl; 
  
  cout << (iterCB == iterCE) << endl;     // Compare two iterators for equality (inequality). Two elements are equal if the denote
  cout << (iterCB != iterCE) << endl;     // the same element or if they are off-the-end iterator for the same container

  
  return 0;
}