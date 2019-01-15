#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class StrBlob{
public:
  typedef vector<string>::size_type size_type;
  StrBlob();
  StrBlob(initializer_list<string> il);
  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }

  // add and remove elements
  void push_back(const string &t) { data->push_back(t); }
  void pop_back();

  // element access
  string& front();
  string& back();

private:
  shared_ptr<vector<string>> data;
  // throws msg if data[i] isn't valid
  void check(size_type i, const string &msg) const;
};

// StrBlob Constructors
StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il) : 
             data(make_shared<vector<string>>(il)) {}

// Element Access Members
void StrBlob::check(size_type i, const string& msg) const{
  if(i >= data->size())
    throw out_of_range(msg);
}

// The `pop_back` and element access members first call `check`.
// If check succeds, these members forward their work to the 
// underlying vector operation:
string& StrBlob::front(){
  // if the vector is empty, check will throw
  check(0, "front on empty StrBlob");
  return data->front();
}

string& StrBlob::back(){
  check(0, "back on empty StrBlob");
  return data->back();
}

void StrBlob::pop_back(){
  check(0, "pop_back on empty StrBlob");
  data->pop_back();
}

// `front` and `back` members should be overloaded on const
int main(){
  

  return 0;
}

