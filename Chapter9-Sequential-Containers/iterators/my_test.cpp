#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){

  vector<string> vec;
  auto it = vec.begin();
//  cout << "it: " << *it << endl;

  auto newit = vec.insert(it, "one");
  cout << "newit: " << *newit << endl;

  auto anotherit = vec.insert(newit, "two");
  cout << "anotherit: " << *anotherit << endl;

  auto lastit = vec.insert(anotherit + 1, "three");
  cout << "lastit: " << *lastit << endl;

  for(const auto element : vec){
    cout << "element: " << element << endl;
  }
  
  return 0;
}

/*Output:

newit: one
anotherit: two
lastit: three
element: two
element: three
element: one

*/