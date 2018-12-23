#include <iostream>
#include <vector>

using namespace std;

class Screen{
  friend class Window_mgr;
  
  public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){};

  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
  
};

class Window_mgr{
  public:
    // location ID for each screen on the window
    using ScreenIndex = vector<Screen>::size_type;
    // reset the screen at the given position to all blanks
    void clear(ScreenIndex);
    
  private:
    vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i){
  // s is a reference to the screen we want to clear
  Screen &s = screens[i];
  
  // reset the contents of that screen to all blancks
  s.contents = string(s.height * s.width, ' ');  // accessing private members of the class Screen!
};

int main(){
  
  
  return 0;
}