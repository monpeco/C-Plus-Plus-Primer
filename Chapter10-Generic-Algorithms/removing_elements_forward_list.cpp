#include <iostream>
#include <forward_list>

using namespace std;

int main(){
  
  // When we add or remove elements in a forward_list, we have to keep track of
  // two iterators—one to the element we’re checking and one to that element’s
  // predecessor.
  
  forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
  auto prev = flst.before_begin();                  // denotes element "off the start" of `flst`
  auto curr = flst.begin();                         // denotes the first element in `flst`
  
  while(curr != flst.end()){                        // while there are still elements to process
    if (*curr % 2){
      curr = flst.erase_after(prev);                // erase it and move curr
    } else {
      prev = curr;                                  // move the iterators to denote the next
      ++curr;                                       // element and one before the next element
    }
  }
  
  for(const auto e : flst){ cout << e << ' '; }
  
  return 0;
}

/*
Output:
0 2 4 6 8 
*/
