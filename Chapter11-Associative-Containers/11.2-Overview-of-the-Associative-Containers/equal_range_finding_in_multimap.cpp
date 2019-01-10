#include <iostream>
#include <map>

using namespace std;

int main(){

  multimap<string, string> authors = {{"Joyce", "Ulysses"}, {"Austen", "Emma"}, {"Dickens", "Oliver Twist"}, {"Joyce", "Eveline"}};
  string search_item("Joyce");  // author we'll be looking for
  // this function takes a key and returns a pair of iterators. If the key is present, then
  // the first iterator refers to the first instance of the key and the second iterator refers
  // one past the last instance of the key. If no matching element is found, then both the
  // first and second iterators refer to the position where this key can be inserted
  
  // `pos` holds iteratos that denote the range of elements for this key
  for(auto pos = authors.equal_range(search_item);
      pos.first != pos.second;
      ++pos.first){
    cout << pos.first->second << endl;  // print each title
  }
  
  return 0;
}