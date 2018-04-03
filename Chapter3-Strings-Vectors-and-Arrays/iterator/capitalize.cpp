#include <iostream>
#include <string>

using namespace std;

int main(){
  
  string s("some string");
  
  cout << s << endl;          // some string
  
  if(s.begin() != s.end()){
    auto it = s.begin();
    *it = toupper(*it);
  }
  
  cout << s << endl;          // Some string
  
  return 0;
}