#include <iostream>
#include <list>
#include <string>

using namespace std;


int main(){

// we can use the value returned by insert to repeatedly insert elements at a specified position in the container:

  list<string> lst;
  auto iter = lst.begin();
  string word;
  
  while (cin >> word){
    iter = lst.insert(iter, word);  // same as calling push_front
  }
  
  for (const auto elem : lst){
    cout << "elem: " << elem << endl;
  }
  
  return 0;
}