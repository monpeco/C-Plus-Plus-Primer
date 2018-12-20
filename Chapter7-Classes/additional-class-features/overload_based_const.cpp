#include <iostream>

using namespace std;

class Screen{
  public:
    typedef string::size_type pos;
    // display overloaded on whether the object is const or not
	  Screen &display(std::ostream &os)
	               { do_display(os); return *this; }
	  const Screen &display(std::ostream &os)
	               { do_display(os); return *this; }
  private:
    // function to do the work of displaying a Screen
    void do_display(std::ostream &os) const { os << contents; }
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

int main(){
  Screen myScreen();
  //const Screen blank(5, 3);
  
  //myScreen.set('#').display(cout);   // calls non const version
  //blank.display(cout);               // calls const version
    
  return 0;
}