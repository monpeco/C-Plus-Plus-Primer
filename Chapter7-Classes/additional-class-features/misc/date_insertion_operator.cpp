#include <iostream>

using namespace std;

class Date{
  friend ostream& operator<<(ostream& os, const Date& d);
  
  public:
    Date(int d, int m, int y) :
    day(d), month(m), year(y) { }
  
  private:
    int day, month, year;
};

ostream& operator<<(ostream& os, const Date& d){
  os << d.day << '/' << d.month << '/' << d.year << '\n';
  return os;
}

int main(){
  Date date(5,2,1985);
  
  cout << date;
  
  return 0;
}