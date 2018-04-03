#include <iostream>
#include <vector>

using namespace std;

int main(){
  
  vector<int> v = {1,2,3,5,9};
  
  auto b = v.begin();     // The begin member returns an iterator that denotes the first element
  auto e = v.end();       // The end member returns an interator that denotes one past the end
  
  return 0;
}