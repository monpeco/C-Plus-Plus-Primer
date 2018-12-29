#include <iostream>
#include <fstream>
#include <vector>

struct PersonInfo{
  std::string name;
  std::vector<std::string> phones;
};

int main(int argc, char **argv){
  
  std::string line, word;  // will hold a line and word from input, respectively
  std::vector<PersonInfo> people; // will hold all the records from the input

  while(getline(std::cin, line)){
    PersonInfo info;
    std::istringstream record(line);
    record >> info.name;
    while(record >> word){
      info.phones.push_back(word);
    }
    people.push_back(info);
    
  }
  
  return 0;
}

