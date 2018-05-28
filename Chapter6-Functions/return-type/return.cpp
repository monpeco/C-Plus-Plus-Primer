#include <iostream>

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending);

int main(int argc, char *argv[]){
  
  std::string result;
  
  result = make_plural(2, "beer", "s");
  
  std::cout << "result: " << result << std::endl;
  
  result = make_plural(2, "fish", "es");
  
  std::cout << "result: " << result << std::endl;
  
  return 0;
}

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending){
  
  return (ctr > 1) ? word + ending : word;
}

/*
Output:

result: beers
result: fishes

*/

