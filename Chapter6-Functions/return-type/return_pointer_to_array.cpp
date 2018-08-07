#include <cstdlib>

typedef int arrT[10];       // arrT is a synonym for the type array of ten ints
using arrtT = int[10];      // equivalente declaration of arrT; c++11
arrT* func(int i);          // func returns a pointer to an array of ten ints
  
int main(int argc, char* argv[]){

  if (argc != 2)
    return EXIT_FAILURE;
  else
    return EXIT_SUCCESS; 
}

/*
Output:



*/
