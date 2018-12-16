#include <iostream>

using namespace std;

class Screen{
  public:
    void some_member() const;
    void set_access_ctr(size_t ac) { access_ctr = ac; }
    size_t get_access_ctr() const { return access_ctr; }
  
  private:
    mutable size_t access_ctr;
};

void Screen::some_member() const {
  access_ctr++;
}

int main(){
  
  Screen screen;
  screen.set_access_ctr((size_t) 5);
  cout << screen.get_access_ctr() << "\n";
  
  screen.some_member();
  cout << screen.get_access_ctr() << "\n";

  return 0;
}

/*
Output:
5
6

*/