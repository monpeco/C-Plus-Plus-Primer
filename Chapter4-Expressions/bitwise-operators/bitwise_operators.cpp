#include <iostream>
#include <bitset>


int main(){
  
  char a = -58;    
  std::bitset<8> x(-58);
  std::bitset<8> y(-29);

  std::cout << "x: \t[" << x << "]" << std::endl;
  
  std::cout << "~x: \t[" << ~x << "]" << std::endl;

  std::cout << "x<<2: \t[" << (x << 2) << "]" << std::endl;

  std::cout << "x>>2: \t[" << (x >> 2) << "]" << std::endl;

  std::cout << "\nx: \t[" << x << "]" << std::endl;
  std::cout << "y: \t[" << y << "]" << std::endl;

  std::cout << "x|y: \t[" << (x|y) << "]" << std::endl;
  
  std::cout << "x&y: \t[" << (x&y) << "]" << std::endl;

  return 0;
}

/*

Output:

x:      [11000110]
~x:     [00111001]
x<<2:   [00011000]
x>>2:   [00110001]

x:      [11000110]
y:      [11100011]
x|y:    [11100111]
x&y:    [11000010]

*/