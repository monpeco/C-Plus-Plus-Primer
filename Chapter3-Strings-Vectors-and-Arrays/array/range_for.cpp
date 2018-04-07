#include <iostream>

using namespace std;

int main(){
  
  int array[] = {4,7,8,2,5,8,9};
  
  for(auto i : array){   // C++11
    cout << i << endl;
  }
  
  return 0;
}