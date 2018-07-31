#include <cstdlib>

int main(int argc, char* argv[]){

  if (argc != 2)
    return EXIT_FAILURE;
  else
    return EXIT_SUCCESS; 
}

/*
Output:

./a.out 89
echo $?
0

*/
