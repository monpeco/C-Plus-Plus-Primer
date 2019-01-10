#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){

  // count occurrences, but the words won't be in alphabetical order
  unordered_map<string, size_t> word_count;
  string word;
  while(cin >> word)
    ++word_count[word];
  for(const auto &w : word_count){
    // print the results
    cout << w.first << " occurs " << w.second
         << ((w.second > 1) ? " times " : " time ") << endl;
  }
  
  return 0;
}