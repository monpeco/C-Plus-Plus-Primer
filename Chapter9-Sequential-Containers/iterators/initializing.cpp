#include <list>
#include <vector>
#include <forward_list>
#include <string>

using namespace std;

int main(){
  
  // 1. Every container type defines a default constructor 
  //    the default constructor creates an empty container of the specified type ( With the exception of array)
  // the other constructors take arguments that specify the size of the container and initial values for the elements (Again excepting array)
  // 2. We can directly copy the container (excepting array) 
  // 3. or we can copy a range of elements denoted by a pair of iterators
  
  // each container has three elements, initialized from the given initializers
  list<string> authors = {"Milton", "Shakespeare", "Austen"};
  vector<const char *> articles = {"a", "an", "the"};
  
  list<string> list2(authors);              // ok: types match
  //deque<string> authList(authors);        // error: container types don't match
  //vector<string> words(articles);         // error: element types must match
  
  forward_list<string> words(articles.begin(), articles.end());   // ok: converts const char* elements to string
  
  return 0;
}