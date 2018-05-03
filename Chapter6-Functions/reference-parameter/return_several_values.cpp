#include <iostream>
#include <string>

using namespace std;

string::size_type find_char(const string &s, char c, string::size_type &occurs);

int main(){
  
  std::string s1 = "this is a string";
  char c1 = 'i';
  string::size_type oc;

  std::cout << "s1: " << s1 << std::endl;

  auto pos = find_char(s1, c1, oc);
  
  std::cout << "pos: " << pos << std::endl;
  std::cout << "c1: " << c1 << std::endl;
  std::cout << "oc: " << oc << std::endl;


  return 0;
}


// returns the index of the first occurrence of c in s
// the reference parameter occurs counts how often c occurs
string::size_type find_char(const string &s, char c, string::size_type &occurs){
  auto ret = s.size(); // position of the first occurrence, if any  // c++11
  occurs = 0; // set the occurrence count parameter
  for (decltype(ret) i = 0; i != s.size(); ++i) {
    if (s[i] == c) {
      if (ret == s.size())
        ret = i; // remember the first occurrence of c
      ++occurs; // increment the occurrence count
    }
  }
  return ret; // count is returned implicitly in occurs
}

/*
Output:

s1: this is a string
pos: 2
c1: i
oc: 3
*/
