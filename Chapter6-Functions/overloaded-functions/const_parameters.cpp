#include <iostream>

void print(const char *cp);
void print(const int *j, size_t s);

int main(int argc, char* argv[]){
  
  const int i = 45;
  const int* pi = &i;
  size_t s = 7;

  print("H");
  print(pi, s);

  return 0;
}

void print(const char *cp){
  std::cout << "print(const char *cp): " << *cp << std::endl;
}

void print(const int *j, size_t s){
  std::cout << "print(const int *j, size_t s): " << *j << ", " << s << std::endl;
}

/*
Output:

print(const char *cp): H
print(const int *j, size_t s): 45, 7

*/
