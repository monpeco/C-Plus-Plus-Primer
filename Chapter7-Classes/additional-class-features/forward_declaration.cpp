#include <iostream>

using namespace std;

class Screen;  // incomplete type
               // it’s known that Screen is a class type but not known what members that type contains.

class Frame{
  int id;
  string name;
};

//  a class is considered declared (but not yet defined) as soon as its class name has been seen. 
// Therefore, a class can have data members that are pointers or references to its own type
class Link_screen{
  Frame windows;
  Link_screen *next;
  Link_screen *prev;
  
  Link_screen &other;
};

int main(){
  
  
  return 0;
}
