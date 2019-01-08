#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
  
  // count the number of times each word occurs in the input
  map<string, size_t> word_count; // empty `map` from string to size_t
  set<string> exclude = {"The", "But", "And", "Or", "An", "A",
                         "the", "but", "and", "or", "an", "a"};
  
  string word;
  while(cin >> word){
    // count only words that are not in `exclude`
    if(exclude.find(word) == exclude.end()){
      ++word_count[word];
    }
  }

  for (const auto &w : word_count)    // for each element in the counter of word
    cout << w.first << " occurs " << w.second
         << ((w.second > 1) ? " times" : " time") << endl;

  return 0;       
}