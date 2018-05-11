#include <iostream>

void print1(const int * cp, size_t size);

int main(){
  
  int i[10] = {10,22,30,44,50,66,70,80};

  //print1(i,8); //end(j) - begin(j));
  print1(i, std::end(i) - std::begin(i)); //end(j) - begin(j));
  
  return 0;
}


void print1(const int ia[], size_t size){
	for (size_t i = 0; i != size; ++i) {
		std::cout << ia[i] << std::endl;
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
80
0
0

*/