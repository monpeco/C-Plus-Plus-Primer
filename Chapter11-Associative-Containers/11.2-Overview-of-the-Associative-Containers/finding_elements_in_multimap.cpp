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
  
  auto entries = authors.count(search_item); // number of elements
  auto iter = authors.find(search_item); // first entry for this author
  cout << entries << endl;
  
  // loop through the number of entries there are for this author
  while(entries){
    cout << iter->second << endl;   // print each title
    ++iter;    // advance to the next title
    --entries;  // keep track of how many we've printed
  }
  
  return 0;
}