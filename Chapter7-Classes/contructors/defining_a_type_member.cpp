#include <iostream>
#include <string>

using namespace std;

class Screen{
  public:
    typedef string::size_type pos;
    // equivalent to 
    // using pos = string::size_type;
  
  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;

};

int main(){
  Screen s;
  
  return 0;
}