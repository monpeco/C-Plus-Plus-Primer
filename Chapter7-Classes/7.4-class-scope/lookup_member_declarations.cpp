#include <iostream>
#include <string>

using namespace std;

typedef double Money;
string bal;
class Account{
  public:
    //  it will look for a declaration of Money in the Account class. The compiler considers only declarations
    // inside Account that appear before the use of Money. Because no matching member
    // is found, the compiler then looks for a declaration in the enclosing scope(s) and find typedef double Money;
    
    Money balance(){ return bal; };  // On the other hand, the function body of balance is processed only after the entire class
                                     // is seen. Thus, the return inside that function returns the member named bal, not
                                     // the string from the outer scope
    
  private:
    typedef double Money; // error: cannot redefine Money
    Money bal;
};


int main(){

  
  return 0;
}