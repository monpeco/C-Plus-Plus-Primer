#include <iostream>

using namespace std;

int main(){
  
  // initialize counters for each vowel
  unsigned vowelCnt = 0;
  char ch;
  
  while (cin >> ch) {
    // if ch is a vowel, increment the appropriate counter
    switch (ch) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
         ++vowelCnt;
         break;
    }
  }
  
  // print results
  cout << "Number of vowels: \t" << vowelCnt << endl;  
  
}

/*
Output:

a
e
w
Number of vowels:       2

*/