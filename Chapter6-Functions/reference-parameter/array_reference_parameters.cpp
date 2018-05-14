#include <iostream>

void print1(int (&arr)[10]);

int main(){
  
  int i[10] = {10,22,30,44,50,66,70,80};

  print1(i);
  
  return 0;
}

// f(int &arr[10])      // error: declares arr as an array of references
// f(int (&arr)[10])    // ok: arr is a reference to an array of ten ints

// ok: parameter is a reference to an array; the dimension is part of the type
void print1(int (&arr)[10])
{
  for (auto elem : arr)
  std::cout << elem << std::endl;
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