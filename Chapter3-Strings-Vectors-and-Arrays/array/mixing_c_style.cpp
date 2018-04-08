#include <iostream>
#include <string>

using namespace std;

int main(){
  
  //  initialize a string from a string literal
  string s("Hello World");
  cout << s << endl;
  
  // We can use a null-terminated character array to initialize or assign a string
  char array[] = {"another"};
  cout << array << endl;
  
  string s2 = array;
  cout << s2 << endl;
  
  // We can use a null-terminated character array as one operand (but not both operands) to the string addition operator 
  char array2[] = {"this is "};
  string s3 = "another concat ";
  cout << array2 + s3 << endl;

  // or as the right-hand operand in the string compound assignment (+=) operator.
  string s4("Concat: ");
  s4 += array2;
  cout << s4 << endl;
  
  // char *str = s4;     // error: cannot convert ‘std::string {aka std::basic_string<char>}’ to ‘char*’ in initialization
  const char *str = s.c_str();    // Error if it is not const
  cout << str << endl;

  return 0;
}

/*
Output:
[h]
[e]
[l]
[l]
[o]
*/