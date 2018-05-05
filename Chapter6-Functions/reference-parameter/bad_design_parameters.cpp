#include <iostream>
#include <string>

using namespace std;

string::size_type find_char(string &s, char c, string::size_type &occurs);

int main(){
  
  std::string s1 = "this is a string";
  char c1 = 'i';
  string::size_type oc;

  std::cout << "s1: " << s1 << std::endl;

  auto pos = find_char(s1, c1, oc);
  
  std::cout << "pos: " << pos << std::endl;
  std::cout << "c1: " << c1 << std::endl;
  std::cout << "oc: " << oc << std::endl;

  auto pos2 = find_char("Hello World", 'o', oc);    // invalid initialization of non-const reference of type ‘std::string& {aka std::basic_string<char>&}’ from an rvalue of type ‘const char*’


  return 0;
}


// bad design: the first parameter should be a const string&
string::size_type find_char(string &s, char c, string::size_type &occurs){
  auto ret = s.size();// c++11
  occurs = 0;
  for (decltype(ret) i = 0; i != s.size(); ++i) {
    if (s[i] == c) {
      if (ret == s.size())
        ret = i;
      ++occurs;
    }
  }
  return ret;
}

/*
Output:

s1: this is a string
pos: 2
c1: i
oc: 3
*/
