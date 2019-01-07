// The two primary
// associative-container types are map and set.

// The library provides eight associative containers. These eight
// differ along three dimensions: Each container is (1) a set or a map, (2) requires
// unique keys or allows multiple keys, and (3) stores the elements in order or not

// Elements ordered by key:
//     map                   Associative array; holds key-value pairs
//     set                   Container in which the key is the value
//     multimap              map in which a key can appear multiple times
//     multiset              set in which a key can appear multiple times

// Unorder collections
//     unordered_map         map organized by a hash function
//     unordered_set         set organized by a hash function
//     unordered_multimap    Hashed map; keys can appear multiple times
//     unordered_multiset    Hashed set; keys can appear multiple times

// The `map`  and `multimap` types are defined in the `map` header; the `set` and 
// `mu4ltiset` types are in the `set` header; and the unordered containers are in the 
// `unordered_map` and `unordered_set` headers.

#include <iostream>
#include <map>

using namespace std;

int main(){
  // count the number of times each word occurs in the input
  map<string, size_t> word_count;    // empty `map` from `string` to `size_t`
  string word;
  
  while(cin >> word)
    ++word_count[word];        // fetch and increment the counter for word
  
  for (const auto &w : word_count)    // for each element in the counter of word
    cout << w.first << " occurs " << w.second
         << ((w.second > 1) ? " times" : " time") << endl;

  return 0;       
}