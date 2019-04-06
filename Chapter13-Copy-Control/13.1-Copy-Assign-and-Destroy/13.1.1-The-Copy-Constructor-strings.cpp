#include <iostream>

int main(){
    std::string dots(10, '.');                   // direct initialization
    std::string s(dots);                         // direct initialization
    std::string s2 = s;                          // copy initialization
    std::string null_block = "9-999-999-999";    // copy initialization
    std::string nines = std::string(100, '9');   // copy initialization
    
    return 0;
}