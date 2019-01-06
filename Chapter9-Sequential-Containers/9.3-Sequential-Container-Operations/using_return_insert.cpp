#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(){

//  list<string> lst;
  vector<string> lst;    // TODO: not working as expected
  auto iter = lst.begin();
  string word;
  int count = 0;
  
  cout << "iter initial value: " << &(*iter) << endl;

  while(cin >> word){
    iter = lst.insert(iter, word);     // same as calling `push_front`
    cout << "iter: " << &(*iter) << " ,count: " << count++ << endl;
  }

  for(auto e : lst) { cout << e << ' '; } cout << endl; 

  // push_front
  
  list<string> lst2;
  auto iter2 = lst2.begin();
  
  cout << &(*iter2) << endl;
  count = 0;
  
  while(cin >> word){
    lst2.push_front(word);
    cout << "iter: " << &(lst2) << " ,count: " << count++ << endl;
  }

  for(auto e : lst2) { cout << e << ' '; } cout << endl;

  return 0;
}
