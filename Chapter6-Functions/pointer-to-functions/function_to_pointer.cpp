#include <iostream>

using namespace std;

// Functions prototype
bool lenghtCompare(const string &first, const string &second);

// Pointer to function
bool (*pf)(const string &name, const string &address);

int main(int argc, char* argv[]){
  
  const string sFirst = "Joe";
  const string sSecond = "My home";
  const string &psFrist = sFirst;
  const string &psSecond = sSecond;
  
  lenghtCompare(psFrist, psSecond); // Calling the function through its name
  
  pf = lenghtCompare;
  (*pf)(psFrist, psSecond);   // Calling the function through a pointer to function
  
  return 0;
}


//function definition
bool lenghtCompare(const string &first, const string &second){
  
  cout << "lenghtCompare called!" << endl;
  return true;
}