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
    void some_member() const;
    void set_access_ctr(size_t ac) { access_ctr = ac; }
    size_t get_access_ctr() const { return access_ctr; }
  
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

void Screen::some_member() const {
  access_ctr++;
}

int main(){
  Windows_mgr wm;
  wm.get_first();

  return 0;
}
