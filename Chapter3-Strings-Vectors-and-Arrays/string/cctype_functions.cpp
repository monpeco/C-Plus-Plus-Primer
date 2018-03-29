#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
  
  char letter_a = 'a';
  
  cout << "isalnum: " << isalnum(letter_a) << endl;  // true if is a letter or a digit
  
  cout << "isalpha: " << isalpha(letter_a) << endl;  // true if is a letter
  
  cout << "iscntrl: " << iscntrl(letter_a) << endl;  // true if is a control character
  
  cout << "isdigit: " << isdigit(letter_a) << endl;  // true if is a digit
  
  cout << "isgraph: " << isgraph(letter_a) << endl;  // true if not a space but is printable

  cout << "islower: " << islower(letter_a) << endl;  // true if is a lower case
  
  cout << "isprint: " << isprint(letter_a) << endl;  // true if is printable character (a space or a character that has visible representation)
  
  cout << "ispunct: " << ispunct(letter_a) << endl;  // true if is a puntuation character
  
  cout << "isspace: " << isspace(letter_a) << endl;  // true if is a white space
  
  cout << "isupper: " << isupper(letter_a) << endl;  // true if is a upper case letter
  
  cout << "isxdigit: " << isxdigit(letter_a) << endl;  // true if is a hexadecimmal digit
  
  cout << "tolower: " << tolower(letter_a) << endl;  // returns the lower case of the letter
  
  cout << "toupper: " << toupper(letter_a) << endl;  // returns the upper case of the letter
  
  
  return 0;
}