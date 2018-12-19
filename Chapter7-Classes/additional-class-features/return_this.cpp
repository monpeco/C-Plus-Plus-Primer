#include <iostream>
#include <vector>

using namespace std;

class Screen{
  public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){};
    char get() const
      { return contents[cursor]; }
    Screen &move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos, pos, char);

  private:
    mutable size_t access_ctr;
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

class Windows_mgr{
  public:
    void get_first() const { cout << screens.at(0).get() << "\n"; }

  // Screens this Window_mgr is tracking
  // by default, a Window_mgr has one standard sized blank Screen
  private:
    vector<Screen> screens{Screen(24,80,'+')}; 
};

inline Screen &Screen::move(pos r, pos c){
  pos row = r * width;
  cursor = row + c ;
  return *this;
}

inline Screen &Screen::set(char ch){
  contents[cursor] = ch;        // set the new value at the current cursor location
  return *this;                 // return this objetc as a lvalue
}

inline Screen &Screen::set(pos r, pos col, char ch){
  contents[r*width + col] = ch;    // set  specified  location  to given value
  return *this;                    // return this object as a lvalue 
}

int main(){
  Screen screen;
  
  // like the move operation, `set` member returns a reference to the object
  // on which they are called. Functions that returns a reference are lvalues,
  // which means they return the object itself, not a copy of the object.
  
  // If concatenate a sequence of these actions into a single expression
  // move the cursor to a given position, and set that character
  screen.move(4,0).set('#');
  // this operations will execute on the same object. In this expression, we first
  // `move` the cursor inside screen and then `set` a character #. 
  
  return 0;
}

/*
Output:

*/