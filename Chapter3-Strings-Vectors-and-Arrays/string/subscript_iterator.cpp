#include <iostream>
#include <string>

int main(){

  std::string str("some string");
  
  for( decltype(str.size()) index = 0 ;
       index != str.size() && !isspace(str[index]) ; 
       ++index)
       str[index] = toupper(str[index]);
    
    std::cout << "str: " << str << std::endl;
    
  /* Caution: Subscripts are Unchecked
   * When we use a subscript, we must ensure that the subscript is in range. That
   * is, the subscript must be >= 0 and < the size() of the string. One way
   * to simplify code that uses subscripts is always to use a variable of type
   * string::size_type as the subscript. Because that type is unsigned, we
   * ensure that the subscript cannot be less than zero. When we use a
   * size_type value as the subscript, we need to check only that our subscript
   * is less than value returned by size().
  */
    
    
  return 0;
}