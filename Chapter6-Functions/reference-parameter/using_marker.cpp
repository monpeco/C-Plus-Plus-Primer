#include <iostream>

void print1(const int * cp);

int main(){
  
  int i[10] = {10,22,30,44,50,66,70,0};

  print1(i);
  
  return 0;
}

void print1(const int  *cp){
  int c = 0;
  if (cp){                  // if cp is not a null pointer
    while (*cp){            // so long as the character it points to is not a null character
      std::cout << *cp++ << std::endl;   // print the character and advance the pointer
    }
  }
}


/*
Output:

10
22
30
44
50
66
70

*/