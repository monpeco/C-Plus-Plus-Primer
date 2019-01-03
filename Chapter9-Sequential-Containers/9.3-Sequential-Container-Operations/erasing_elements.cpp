#include <iostream>
#include <list>

using namespace std;

int main(){
  
  list<int> c = {11, 2, 5, 10, 9, 7, 5, 4, 7, 6};
  for(auto e : c) { cout << e << ' '; } cout << endl; 

  c.pop_back();    // Removes last element in c
  for(auto e : c) { cout << e << ' '; } cout << endl; 

  c.pop_front();   // Removes first element in c
  for(auto e : c) { cout << e << ' '; } cout << endl; 

  auto p = c.begin();
  p++;
  c.erase(p);      // Removes the element denoted by the iterator p and retuns an interator to the element
                   // after the one deleted or the off-the-end iterator is p denotes the last element
  for(auto e : c) { cout << e << ' '; } cout << endl; 
  
  auto b = c.begin(), e = c.end();
  advance(b, 4);
  c.erase(b,e);    // Removes the range of elements denotes by the iterators b and e. Returns an iterator to
                   // the element after the last one that was deleted, or an off-the-end iterator if e is 
                   // itself an off-the-end iterator
  for(auto e : c) { cout << e << ' '; } cout << endl; 

  c.clear();       // Removes all the elements in c

// Removing elements anywhere but the beginning or the end of a `deque` invalidates all iterators, references and pointers.
// Iterators, references and pointers to elements after the erasure point in a `vector` or `string` are invalidated.


  return 0;
}
