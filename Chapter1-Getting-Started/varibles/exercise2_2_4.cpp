#include <iostream>

int i = 42;

int main(){

  int i = 100;
  int j = i;

  std::cout << "i: " << i << std::endl;
  std::cout << "j: " << j << std::endl;

  int k = 100, sum = 0;
  for (int k = 0; k != 10; ++k)
    sum += k;
  std::cout << k << " " << sum << std::endl;

  return 0;
}

/*
Output:

i: 100
j: 100
100 45

*/