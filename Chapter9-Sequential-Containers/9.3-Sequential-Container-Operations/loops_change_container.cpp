#include <iostream>
#include <vector>

using namespace std;

int main(){
  
  // Loops that add/remove elements of a `vector`, `string` or `deque` must cater to the fact that iterators, references or pointers
  // might be invalidated. The program must ensure that the iterator, reference, or pointer is refreshed on each trip through the loop.
  // Refreshing an iterator is easy if the loop calls `insert` or `erase`. Those operations return iterators, which we can use to reset
  // the iterator:
  
  // silly loop to remove even-valued elements and insert a duplicate of odd-valued elements
  vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
  auto iter = vi.begin();                   // call begin, not cbegin because we're changing vi
  
  while(iter != vi.end()){
    if (*iter % 2){
      iter = vi.insert(iter, *iter);        // duplicate the current element
      iter += 2;
    } else {
      iter = vi.erase(iter);                // remove even elements
      // don't avance the iterator; iter denotes a element after the one we erased
    }
  }  
  
  for(auto e : vi) { cout << e << ' '; } cout << endl; 

  return 0;
}


/*
Output:
1 1 3 3 5 5 7 7 9 9 
*/