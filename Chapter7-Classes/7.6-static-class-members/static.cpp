#include <iostream>

using namespace std;

class Account{
public:
  void calculate() {amount += amount * interestRate; }
  static double rate() { return interestRate; }
  static void rate(double);
private:
  string owner;
  double amount;
  static double interestRate;
  static double initRate();
};

int main(){
  double r;
  r = Account::rate();  // access a static memeber using the scope operator
  
  Account ac1;
  Account *ac2 = &ac1;
  
  //equivalent ways to call the static member rate function
  r = ac1.rate();   // through an Account object or reference
  r = ac2->rate();  // throught a pointer to an Account object
  
  
  return 0;
}