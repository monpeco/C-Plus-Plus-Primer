#include <iostream>

using namespace std;

int height;  // defines a name subsequently used inside Screen

class Screen{
  public:
    typedef std::string::size_type pos;
    void setHeight(pos);
    pos height = 0;  // hides the declaration of height in the outer scope
};

Screen::pos verify(Screen::pos);

void Screen::setHeight(pos var){
  // var: refers to the parameter
  // height: refers to the class member
  // verify: refers to the global function
  height = verify(var);
}

Screen::pos verify(Screen::pos p){
  return p;
}

int main(){
  
  
  return 0;
}