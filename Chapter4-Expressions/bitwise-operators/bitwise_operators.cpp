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


  // Using Bitwise Operators
  unsigned long quiz1 = 11453246122;
  std::bitset<32> z(quiz1);
  std::cout << "\nquiz1: \t\t\t[" << z << "]" << std::endl;

  std::cout << "quiz1 |= 1UL << 28) : \t[" << (z |= 1UL << 28) << "]" << std::endl;

  std::cout << "quiz1 &= ~(1UL << 27): \t[" << (z &= ~(1UL << 27)) << "]" << std::endl;

  quiz1 |= 1UL << 27; // indicate student number 27 passed
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

quiz1:                  [10101010101010101010101010101010]
quiz1 |= 1UL << 28) :   [10111010101010101010101010101010]
quiz1 &= ~(1UL << 27):  [10110010101010101010101010101010]
*/