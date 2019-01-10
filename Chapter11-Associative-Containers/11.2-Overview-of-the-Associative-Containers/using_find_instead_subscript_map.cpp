#include <iostream>
#include <map>

using namespace std;

int main(){
  
  // Sometimes we want to know if an element with a given key is 
  // present without changing the `map`. We cannot use the subscript 
  // operator because it would insert a new element if the key is 
  // not there. In such cases, we should use `find`
  
  map <string, size_t> word_count; // empty map
  word_count["Anna"] = 1;
  
  if (word_count.find("Anna") == word_count.end()){
    cout << "foo is not in the map" << endl;
  }else{
    cout << "foo is in the map" << endl;
  }
  
  return 0;
}