#include <iostream>

void print1(const int *beg, const int *end);

int main(){
  
  int i[10] = {10,22,30,44,50,66,70,0};

  print1(std::begin(i), std::end(i));   // C++11 std::begin(i) and std::end(i)
  
  return 0;
}

void print1(const int *beg, const int *end){
  while(beg != end){
	std::cout << *beg++ << std::endl;
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
0
0
0

*/