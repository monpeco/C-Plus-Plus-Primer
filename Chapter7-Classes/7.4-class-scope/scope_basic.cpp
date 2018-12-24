#include <iostream>
#include <string>

using namespace std;

class Screen{
  public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){};
    char get() const
      { return contents[cursor]; }

  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;

};


int main(){
  Screen::pos ht = 24, wd = 80;
  Screen scr(ht, wd, ' ');
  Screen *p = &scr;
  char c = scr.get();
  c = p->get();
  
  return 0;
}