#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
  
  map<string, size_t> word_count;
  
  // list initialization
  set<string> exclude = {"the", "but", "and", "or", "an", "a",
                         "The", "But", "And", "Or", "An"};
  
  // three elements; authors maps last names to first
  map<string, string> authors = {{"Joyce", "James"}, {"Austen", "Jean"}, {"Dickens", "Charles"}};
  
  return 0;
}