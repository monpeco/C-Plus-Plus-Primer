#include <iostream>
#include <string>

using namespace std;

class Screen{
  public:
    typedef string::size_type pos;
    // equivalent to 
    // using pos = string::size_type;
    Screen() = default;  // Needed because Screen have another constructor
    // cursor initialized to 0 by its in-class initializer
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){};
    char getChar() const            // get the character at the cursor
      { return contents[cursor]; }     // implicitly inline
    inline char get(pos ht, pos wd) const;  // explicitly inline
    Screen move(pos r, pos c);
  
  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;

};

int main(){
  Screen s;
  
  return 0;
}