#include <iostream>
#include <string>

using namespace std;

class Screen{
  public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){};
    char get() const
      { return contents[cursor]; }           // implicitly inline
    inline char get(pos r, pos c) const;   // explicitly inline
    Screen &move(pos r, pos c);
  
  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;

};

// we can specify inline on the definition
inline Screen &Screen::move(pos r, pos c){
  pos row = r * width; // compute the row location
  cursor = row + c ;   // move cursor to the column within that row
  return *this;        // return this object as an lvalue
}

// declared as inline in the class
char Screen::get(pos r, pos c) const{
  pos row = r * width;      // compute row location
  return contents[row + c]; // return character at the given column
}

int main(){
  Screen s;
  char ch = s.get();    // calls Screen::get()
  ch = s.get(0,0);      // calls Screen::get(pos, pos)
  
  return 0;
}