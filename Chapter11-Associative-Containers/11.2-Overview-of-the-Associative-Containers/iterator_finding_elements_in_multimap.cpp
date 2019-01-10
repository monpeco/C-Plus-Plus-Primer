#include <iostream>
#include <map>

using namespace std;

int main(){
  
  // Finding an element in a multiple keys container is more complicated.
  // There may be many elements with the given key. When a `multimap` or a `multiset`
  // has multiple elements of a given key, those elements will be adjecent w
  // ithin the container:

  multimap<string, string> authors = {{"Joyce", "Ulysses"}, {"Austen", "Emma"}, {"Dickens", "Oliver Twist"}, {"Joyce", "Eveline"}};
  string search_item("Joyce");  // author we'll be looking for
  
  // we can use `lower_bound` and `upper_bound`, each takes a key
  // and return an iterator. 
  //
  // If the key is in the container, the iterator returned from `lower_bound` 
  // will refer to the first instance of that key and the iterator returner 
  // by `upper_bound` will refer just after the last instance of the key.
  //
  // If the element is not in the `multimap`, then the `lower_bound` and the 
  // `upper_bound` will return equal iterators: both will refer to the point at
  // which the key can be inserted without disrupting the order. Thus, calling 
  // `lower_bound` and `upper_bound` on the same keys yields an interator range
  // that denotes all the elements with that key.
  //
  // Note: the iterator returned from `lower_bound` may or may not refer to an
  // element with the given key. If the key is not in the container, then 
  // `lower_bound` refers to the first point at which this key can be inserted
  // while preserving the element order within the container
  
  // definitions of authors and search_item as above
  // `beg` and `end` denotes the range of elements for this author
  for(auto beg = authors.lower_bound(search_item),
           end = authors.upper_bound(search_item);
      beg != end; ++beg){
    cout << beg->second << endl;  // print each title
  }
  
  return 0;
}