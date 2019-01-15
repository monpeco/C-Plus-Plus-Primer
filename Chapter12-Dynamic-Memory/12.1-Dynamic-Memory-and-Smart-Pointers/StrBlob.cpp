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

int main(){
  

  return 0;
}

